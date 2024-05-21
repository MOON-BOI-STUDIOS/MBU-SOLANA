using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
public class CustomLobby : MonoBehaviourPunCallbacks
{
    public static CustomLobby lobby;

    public string roomName;
    public GameObject roomListingprefab;
    public Transform roomsPanel;

    public List<RoomInfo> roomlistings;


    private void Awake()
    {
        lobby = this; // creates the singleton, lives within the main menu scene
    }


    void Start()
    {
        PhotonNetwork.ConnectUsingSettings(); //  connect to masters photon server
        roomlistings = new List<RoomInfo>();
        string playerRegion = PhotonNetwork.CloudRegion;
        Debug.Log("Player Region" + playerRegion);
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Player has connected to photon master server");
        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.NickName = "Player" + Random.Range(0, 1000);
        PhotonNetwork.JoinLobby();


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
            if (roomlistings != null)
            {
                tempIndex = roomlistings.FindIndex(ByName(room.Name));
            }
            else
            {
                tempIndex = -1;
            }
            if (tempIndex != -1)
            {
                roomlistings.RemoveAt(tempIndex);
                Destroy(roomsPanel.GetChild(tempIndex).gameObject);

            }
            else
            {
                roomlistings.Add(room);
                ListRoom(room);
            }


        }

    }


    public void RemoveRoomListing()
    {
        while(roomsPanel.childCount != 0)
        {
            Destroy(roomsPanel.GetChild(0).gameObject);
  
        }
    }

    public void ListRoom (RoomInfo room)
    {
        if(room.IsOpen && room.IsVisible)
        {
            GameObject tempListing = Instantiate(roomListingprefab, roomsPanel);
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
        //CreateRoom();
    }

    public void OncancleearchClicked()
    {
        Debug.Log("search canceled");

        PhotonNetwork.LeaveRoom();
    }

    public void onNameChange(string nameIn)
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

}
