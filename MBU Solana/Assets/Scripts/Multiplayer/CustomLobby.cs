using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
public class CustomLobby : MonoBehaviourPunCallbacks
{
    public static CustomLobby lobby;

    public string roomName;
    public int roomSize;
    public GameObject roomListingprefab;


    private void Awake()
    {
        lobby = this; // creates the singleton, lives within the main menu scene
    }


    void Start()
    {
        PhotonNetwork.ConnectUsingSettings(); //  connecr to masters photon server
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Player has connected to photon master server");
        PhotonNetwork.AutomaticallySyncScene = true;

    }

    public void OnSearchButtonClicked()
    {

        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("Tried to join a randon game but failed. There must be no open games available");
        CreateRoom();

        
    }
    public void CreateRoom()
    {
        Debug.Log("Trying to create a new room");
        int randomRoomName = Random.Range(0, 1000);
        RoomOptions roomOps = new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = (byte)MultiplayerSettings.multiplayerSettings.maxPlayers };
        PhotonNetwork.CreateRoom("Room" + randomRoomName, roomOps);
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log("Tried to create a new room but failed, there must already be a room with the same name");
        CreateRoom();
    }

    public void OncancleearchClicked()
    {
        Debug.Log("search canceled");

        PhotonNetwork.LeaveRoom();
    }

    //public override void OnJoinedRoom()
    //{
    //    Debug.Log("We are now in a room");
    //}


    void Update()
    {
        
    }
}
