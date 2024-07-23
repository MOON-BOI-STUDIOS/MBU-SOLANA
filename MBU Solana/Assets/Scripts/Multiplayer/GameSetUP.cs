using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;

[System.Serializable]
public struct SpawnPoints
{
    public Transform spawnPoint;
    public bool boolSpawnPoint;

    public bool GetBoolSpawnPoint()
    {
        return boolSpawnPoint;
    }

    public void SetBoolSpawnPoint(bool value)
    {
        boolSpawnPoint = value;
    }

    public Transform GetTransformSpawnPoint()
    {
        return spawnPoint;
    }
}

// Script by Oliver Lancashire
public class GameSetUP : MonoBehaviour
{
    #region fields
    /// <summary>
    /// Creating a singleton for this script
    /// </summary>
    public static GameSetUP GS;
    /// <summary>
    /// Array of spawn points
    /// </summary>
    public SpawnPoints[] spawnPoints;
    [SerializeField] Pause pause;
    #endregion

    #region methods
    /// <summary>
    /// Initialize singleton for game setup
    /// </summary>
    private void OnEnable()
    {
        if (GameSetUP.GS == null)
        {
            GameSetUP.GS = this;
        }
    }

    /// <summary>
    /// Disconnect player from game
    /// </summary>
    public void DisconnectPlayer()
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
    if (PhotonNetwork.IsConnected)
            PhotonNetwork.Disconnect();

        SceneManager.LoadScene("MultiplayerLobby");

        
        if (!PhotonNetwork.IsConnected)
            PhotonNetwork.ConnectUsingSettings();
    }

    /// <summary>
    /// Coroutine that will load the menu scene
    /// </summary>
    /// <returns></returns>
    public IEnumerator DisconnectAndLoad()
    {
        PhotonNetwork.LeaveRoom();

        // Wait until the player has left the room
        while (PhotonNetwork.InRoom)
        {
            yield return null;
        }

        SceneManager.LoadScene(MultiplayerSettings.multiplayerSettings.menuScene);
    }
    #endregion
}