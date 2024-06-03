using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

public class RoomButton : MonoBehaviour
{
    public TextMeshProUGUI nameText;

    public string roomName;

    public void SetRoom()
    {
        nameText.text = roomName.ToString();

    }

    public void JoinRoomClick()
    {
        PhotonNetwork.JoinRoom(roomName);
    }


    
}
