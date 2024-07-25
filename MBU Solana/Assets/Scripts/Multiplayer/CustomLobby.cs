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
    private string[] regions = { "eu", "us", "asia", "jp", "au", "sa", "in" };
    public Button rlp;
    public string currentRegion;
    public GameObject lobbyGo, roomGo, startGame;
    public TextMeshProUGUI regiontxt, textroom;
    private float lastUpdateTime = 0f;
    public float updateInterval = 1f; // Time interval in seconds
    [SerializeField]
    GameObject loadingPanel, backButton, reconnectButton, connectPanel;

    private Coroutine retryCoroutine;

    private void Awake()
    {
        if (lobby == null)
        {
            lobby = this;
        }
    }

    void Start()
    {
        roomListings = new List<RoomInfo>();
        regionDropdown.ClearOptions();
        regionDropdown.AddOptions(new List<string>(regions));
        RemoveRoomListing();
        regiontxt.text = "Current Region is: " + PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion;

        connectPanel.SetActive(true);
    }

    
    public void RetryConnection()
    {
    // Stop the previous coroutine if it's running
    if (retryCoroutine != null)
    {
        StopCoroutine(retryCoroutine);
        retryCoroutine = null; // Clear the reference
    }

    // Start a new coroutine for reconnection
    retryCoroutine = StartCoroutine(DisconnectAndReconnect());
    }

    private IEnumerator DisconnectAndReconnect()
    {
    // Disconnect if currently connected
    if (PhotonNetwork.IsConnected)
    {
        PhotonNetwork.Disconnect();
        // Wait until the client is completely disconnected
        while (PhotonNetwork.IsConnected)
        {
            yield return null;
        }
    }

    // Attempt to reconnect
    PhotonNetwork.ConnectUsingSettings();

    // Optionally, you could wait for a bit to give time for reconnection
    // If needed, add a delay or check for connection status
    yield return new WaitForSeconds(1f); // Adjust the delay as necessary

    retryCoroutine = null; // Clear the reference after the coroutine finishes
    }

    public void ConnectToPhoton()
    {
        if (!PhotonNetwork.IsConnected)
        {
            PhotonNetwork.ConnectUsingSettings();
            loadingPanel.SetActive(true);
        }
    }

    public override void OnConnected()
    {
        Debug.Log("Attempting to connect to Photon Master Server");
    }

    public override void OnConnectedToMaster()
    {
        loadingPanel.SetActive(false);
        Debug.Log("Player has connected to Photon Master Server");
        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.NickName = "Player" + Random.Range(0, 1000);
    }

    public void OnRegionSelected()
{
    if (PhotonNetwork.IsConnected)
        PhotonNetwork.Disconnect();

    int index = regionDropdown.value;
    string selectedRegion = regions[index];
    PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion = selectedRegion;
    currentRegion = selectedRegion;
    regiontxt.text = "Current Region is: " + currentRegion;

    if (!PhotonNetwork.IsConnected)
        PhotonNetwork.ConnectUsingSettings();
    
    Debug.Log("Region switched to " + PhotonNetwork.PhotonServerSettings.AppSettings.FixedRegion);
}


    public void OnSearchButtonClicked()
    {
        if (PhotonNetwork.IsConnectedAndReady)
        {
            PhotonNetwork.JoinRandomRoom();
        }
        else
        {
            Debug.LogError("Client is not connected and ready to join a room.");
        }
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
{
    if (Time.time - lastUpdateTime < updateInterval) return;
    lastUpdateTime = Time.time;
    
    base.OnRoomListUpdate(roomList);
    RemoveRoomListing();
    foreach (RoomInfo room in roomList)
    {
        if (roomListings.Exists(r => r.Name == room.Name))
        {
            // Update existing room listing
            roomListings.Remove(roomListings.Find(r => r.Name == room.Name));
            Destroy(roomsPanel.GetChild(roomListings.Count).gameObject);
        }
        if (room.IsOpen && room.IsVisible)
        {
            roomListings.Add(room);
            ListRoom(room);
        }
    }
}

    private void Update()
    {
        if (PhotonNetwork.InRoom)
        {
            bool isMasterClient = PhotonNetwork.IsMasterClient;
            bool isFull = PhotonNetwork.CurrentRoom.PlayerCount >= 2;

            rlp.interactable = !isFull;
            startGame.SetActive(isMasterClient && isFull);
            textroom.text = roomName;
        }
    }

    public void RemoveRoomListing()
    {
        foreach (Transform child in roomsPanel)
        {
            Destroy(child.gameObject);
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

    public void CreateRoom()
{
    if (!PhotonNetwork.IsConnected)
        PhotonNetwork.ConnectUsingSettings();

    if (PhotonNetwork.IsConnectedAndReady)
    {
        if (string.IsNullOrEmpty(roomName))
        {
            Debug.LogError("Room name is empty.");
            return;
        }
        
        Debug.Log("Trying to create a new room");
        RoomOptions roomOps = new RoomOptions
        {
            IsVisible = true,
            IsOpen = true,
            MaxPlayers = (byte)MultiplayerSettings.multiplayerSettings.maxPlayers
        };
        PhotonNetwork.CreateRoom(roomName, roomOps);
        backButton.SetActive(false);
        reconnectButton.SetActive(false);
    }
    else
    {
        Debug.LogError("Client is not connected and ready to create a room.");
    }
}

    public override void OnJoinedRoom()
    {
        backButton.SetActive(false);
        reconnectButton.SetActive(false);
    }


    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.LogError("Failed to create room: " + message);
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
    if (PhotonNetwork.InRoom)
    {
        PhotonNetwork.LeaveRoom();
        if (PhotonNetwork.CurrentRoom != null && PhotonNetwork.CurrentRoom.PlayerCount <= 1)
        {
            // If this is the last player in the room, destroy the room object
            if (PhotonRoom.room != null)
            {
                Destroy(PhotonRoom.room.gameObject);
            }
        }
    }
}

    public override void OnLeftRoom()
    {
        Debug.Log("Left room successfully");
        if (PhotonNetwork.IsConnected)
            PhotonNetwork.Disconnect();

        SceneManager.LoadScene("MultiplayerLobby");

        
        if (!PhotonNetwork.IsConnected)
            PhotonNetwork.ConnectUsingSettings();
    }

    public void BackToArcade()
{
    if (PhotonNetwork.InRoom)
    {
        PhotonNetwork.LeaveRoom();
    }

    // Destroy PhotonRoom instance before loading the new scene
    if (PhotonRoom.room != null)
    {
        Destroy(PhotonRoom.room.gameObject);
        PhotonRoom.room = null; // Clear the static reference
    }

    SceneManager.LoadScene("BonkArcade");
    PhotonNetwork.Disconnect();
}
}
