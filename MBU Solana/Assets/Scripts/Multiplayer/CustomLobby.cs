using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine.SceneManagement;

public class CustomLobby : MonoBehaviourPunCallbacks
{
    public static CustomLobby lobby;

    public string roomName;
    public GameObject roomListingPrefab;
    public Transform roomsPanel;

    public List<RoomInfo> roomListings;
    public TMP_Dropdown regionDropdown;
    private string[] regions = { "us", "eu", "asia", "jp", "au", "sa", "in" };
    public Button rlp;

    public string currentRegion;

    public GameObject lobbyGo, roomGo, startGame;

    public TextMeshProUGUI regiontxt,regiontext1 ,textroom;
    
    
    private void Awake()
    {
        lobby = this;
    }

    void Start()
    {
        if (!PhotonNetwork.IsConnected)
        {
            PhotonNetwork.ConnectUsingSettings();
        }
        roomListings = new List<RoomInfo>();
        string playerRegion = PhotonNetwork.CloudRegion;
        Debug.Log("Player Region: " + playerRegion);

        regionDropdown.ClearOptions();
        regionDropdown.AddOptions(new List<string>(regions));
        RemoveRoomListing();

         regiontxt.text = "Current Region is:" + PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion;
         regiontext1.text = "Current Region is:" + PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion;
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Player has connected to photon master server");
        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.NickName = "Player" + Random.Range(0, 1000);
    }

    public void OnRegionSelected()
    {
        int index = regionDropdown.value;
        string selectedRegion = regions[index];
        PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion = selectedRegion;
        currentRegion = selectedRegion;
        regiontxt.text = "Current Region is:" + currentRegion;
        regiontext1.text = "Current Region is:" + currentRegion;

        PhotonNetwork.ConnectUsingSettings();
        Debug.Log("Region was switched to " + PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion);
    }

    public void OnSearchButtonClicked()
    {
        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        base.OnRoomListUpdate(roomList);
        RemoveRoomListing();
        int tempIndex;
        foreach (RoomInfo room in roomList)
        {
            if (roomListings != null)
            {
                tempIndex = roomListings.FindIndex(ByName(room.Name));
            }
            else
            {
                tempIndex = -1;
            }
            if (tempIndex != -1)
            {
                roomListings.RemoveAt(tempIndex);
                Destroy(roomsPanel.GetChild(tempIndex).gameObject);
            }
            else
            {
                roomListings.Add(room);
                ListRoom(room);
            }
        }
    }

    private void Update()
    {
        if (PhotonRoom.room.playersInRoom == 2)
        {
            rlp.interactable = false;
        }
        else
        {
            rlp.interactable = true;
        }

        if (PhotonNetwork.IsMasterClient)
        {
            if (PhotonRoom.room.playersInRoom == 2)
            {
                startGame.SetActive(true);
            }
        }
        else
        {
            startGame.SetActive(false);
        }

        textroom.text = roomName.ToString();


    }

    public void RemoveRoomListing()
    {
        while (roomsPanel.childCount != 0)
        {
            Destroy(roomsPanel.GetChild(0).gameObject);
        }
    }

    public void ListRoom(RoomInfo room)
    {
        if (room.IsOpen && room.IsVisible)
        {
            GameObject tempListing = Instantiate(roomListingPrefab, roomsPanel);
            RoomButton tempButton = tempListing.GetComponent<RoomButton>();
            tempButton.roomName = room.Name;
            tempButton.SetRoom();
        }
    }

    static System.Predicate<RoomInfo> ByName(string name)
    {
        return delegate (RoomInfo room)
        {
            return room.Name == name;
        };
    }

    public void CreateRoom()
    {
        Debug.Log("Trying to create a new room");
        RoomOptions roomOps = new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = (byte)MultiplayerSettings.multiplayerSettings.maxPlayers };
        PhotonNetwork.CreateRoom(roomName, roomOps);
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log("Tried to create a new room but failed, there must already be a room with the same name");
    }

    public void OnCancelSearchClicked()
    {
        Debug.Log("Search canceled");
        PhotonNetwork.LeaveRoom();
    }

    public void OnNameChange(string nameIn)
    {
        roomName = nameIn;
    }

    public void JoinLobbyClick()
    {
        if (!PhotonNetwork.InLobby)
        {
            PhotonNetwork.JoinLobby();
        }
    }

    public void Disconnect()
    {
        PhotonNetwork.LeaveRoom();
        Destroy(PhotonRoom.room.gameObject);
    }

    public override void OnLeftRoom()
    {
        Debug.Log("Left room successfully");

        // Reload the lobby scene after leaving the room
        SceneManager.LoadScene(MultiplayerSettings.multiplayerSettings.menuScene);
    }
}