using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using System;
using TMPro;

public class PhotonRoom : MonoBehaviourPunCallbacks,IInRoomCallbacks
{
    // room info
    public static PhotonRoom room;
    private PhotonView pv;

    public bool isGameLoaded;
    public int currentScene;
    public int multiplayerScene;

    //player info
    Player[] photonPlayers;
    public int playersInRoom;
    public int myNumberInRoom;

    public int PlayersInGame;

    private bool readyToCount;
    private bool ReadyToStart;
    public float startingTime;
    private float lessThanmaxPlayers;
    private float atmaxPlayers;
    private float timeToStart;

    public GameObject lobbyGO, RoomGO,playerListingPrefab,startButton;
    public Transform playerPanel;



    private void Awake()
    {
        // set up singleton
        if (PhotonRoom.room == null)
        {
            PhotonRoom.room = this;
        }
        else
        {
            if (PhotonRoom.room != this)
            {
                Destroy(PhotonRoom.room.gameObject);
                PhotonRoom.room = this;
            }
        }
        DontDestroyOnLoad(this.gameObject);
       
    }

    public override void OnEnable()
    {
        base.OnEnable();
        PhotonNetwork.AddCallbackTarget(this);
        SceneManager.sceneLoaded += OnSceneFinishedLoading;
    }

    public override void OnDisable()
    {
        base.OnDisable();
        PhotonNetwork.RemoveCallbackTarget(this);
        SceneManager.sceneLoaded -= OnSceneFinishedLoading;
    }

    void Start()
    {
        pv = GetComponent<PhotonView>();
        readyToCount = false;
        ReadyToStart = false;
        lessThanmaxPlayers = startingTime;
        atmaxPlayers = 2;
        timeToStart = startingTime;

    }


    void Update()
    {
        if (MultiplayerSettings.multiplayerSettings.delayStart)
        {
            if(playersInRoom == 1)
            {
                RestartTimer();
            }
            if (!isGameLoaded)
            {
                if (ReadyToStart)
                {
                    atmaxPlayers -= Time.deltaTime;
                    lessThanmaxPlayers = atmaxPlayers;
                    timeToStart = atmaxPlayers;
                }
                else if (readyToCount)
                {
                    lessThanmaxPlayers -= Time.deltaTime;
                    timeToStart = lessThanmaxPlayers;
                }
                Debug.Log("Display time to start to the players" + timeToStart);
                if(timeToStart <= 0)
                {
                    StartGame();
                }
            }
        }


    }

    public void RestartTimer()
    {
        lessThanmaxPlayers = startingTime;
        timeToStart = startingTime;
        atmaxPlayers = 6;
        readyToCount = false;
        ReadyToStart = false;
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("in room");
        lobbyGO.SetActive(false);
        RoomGO.SetActive(true);
        if (PhotonNetwork.IsMasterClient)
        {
            if(playersInRoom < 2)
            {
                startButton.SetActive(true);
            }
          
        }
        else
        {
            startButton.SetActive(false);
        }

        ClearPlayerListing();
        ListPlayers();

        photonPlayers = PhotonNetwork.PlayerList;
        playersInRoom = photonPlayers.Length;
        myNumberInRoom = playersInRoom;

        if (MultiplayerSettings.multiplayerSettings.delayStart)
        {
            Debug.Log("Display players in room of max players possible(" + playersInRoom + ":" + MultiplayerSettings.multiplayerSettings.maxPlayers + "(");
            if (playersInRoom > 1)
            {
                readyToCount = true;
            }
            if (playersInRoom == MultiplayerSettings.multiplayerSettings.maxPlayers)
            {
                ReadyToStart = true;
                if (!PhotonNetwork.IsMasterClient)
                    return;
                PhotonNetwork.CurrentRoom.IsOpen = true;
            }

        }
    }


    public void ListPlayers()
    {
        if (PhotonNetwork.InRoom)
        {
            foreach(Player player in PhotonNetwork.PlayerList)
            {
                GameObject tempListing = Instantiate(playerListingPrefab, playerPanel);
                TextMeshProUGUI tempText = tempListing.transform.GetChild(0).GetComponent<TextMeshProUGUI>();
                tempText.text = player.NickName;
            }
        }
    }
    public void ClearPlayerListing()
    {
        for(int i  = playerPanel.childCount -1; i >= 0; i--)
        {
            Destroy(playerPanel.GetChild(i).gameObject);
        }
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
        //Debug.Log("new player joined" + PhotonNetwork.NickName.ToString());
        ClearPlayerListing();
        ListPlayers();
        photonPlayers = PhotonNetwork.PlayerList;
        playersInRoom++;
        if (MultiplayerSettings.multiplayerSettings.delayStart)
        {
            Debug.Log("displayer players in room outr of max players possible(" + playersInRoom + ":" + MultiplayerSettings.multiplayerSettings.maxPlayers + ")");
            if (playersInRoom > 1)
            {
                readyToCount = true;
            }
            if (playersInRoom == MultiplayerSettings.multiplayerSettings.maxPlayers)
            {
                ReadyToStart = true;
                if (!PhotonNetwork.IsMasterClient)
                    return;
                PhotonNetwork.CurrentRoom.IsOpen = false;
            }
        }
    }


        public void OnSceneFinishedLoading(Scene scene,LoadSceneMode mode)
        {
        // called when multiplayer scene is loaded
        currentScene = scene.buildIndex;
        if(currentScene == MultiplayerSettings.multiplayerSettings.mulitplayerScene)
        {
            isGameLoaded = true;

            if (MultiplayerSettings.multiplayerSettings.delayStart)
            {
                pv.RPC("RPC_LoadedGameScene", RpcTarget.MasterClient);
            }
            else
            {
                CreatePlayer();
            }
        }
    }

    public void StartGame()
    {
        isGameLoaded = true;
        if (!PhotonNetwork.IsMasterClient)
            return;
        if (MultiplayerSettings.multiplayerSettings.delayStart)
        {
            PhotonNetwork.CurrentRoom.IsOpen = false;
        }
        PhotonNetwork.LoadLevel(MultiplayerSettings.multiplayerSettings.mulitplayerScene);
    }

    [PunRPC]
    private void CreatePlayer()
    {
        // creates player network controller but not player character
        PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "photonNetworkPlayer"), transform.position, Quaternion.identity,0);
    }

    [PunRPC]  
    private void RPC_LoadedGameScene()
    {
        PlayersInGame++;
        if (PlayersInGame == PhotonNetwork.PlayerList.Length)
        {
            pv.RPC("CreatePlayer", RpcTarget.All);
        }
    }
}
