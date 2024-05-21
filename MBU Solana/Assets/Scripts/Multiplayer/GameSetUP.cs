using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Photon.Pun;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

//script by Oliver Lancashire
public class GameSetUP : MonoBehaviour
{
    #region fields
    /// <summary>
    /// creating a singleton for this script
    /// </summary>
    public static GameSetUP GS;
    /// <summary>
    /// array of spawn points
    /// </summary>
    public Transform[] spawnPoints;
    #endregion

    #region methods
    /// <summary>
    /// intialise singleton for game set up
    /// </summary>
    private void OnEnable()
    {
        if (GameSetUP.GS == null)
        {
            GameSetUP.GS = this;
        }
    }

    /// <summary>
    /// disconnect player from game
    /// </summary>
    public void disconnectPlayer()
    {


        StartCoroutine(DsiconnectAndLoad());
        Destroy(PhotonRoom.room.gameObject);


    }


    //public void NextLevel()
    //{
    //    StartCoroutine(LoadLevel());
    //}

    /// <summary>
    /// coroutine that will load menu scene
    /// </summary>
    /// <returns></returns>
    public IEnumerator DsiconnectAndLoad()
    {

        PhotonNetwork.Disconnect();

        //while(PhotonNetwork.IsConnected)
        while (PhotonNetwork.InRoom)

            yield return null;
        SceneManager.LoadScene(MultiplayerSettings.multiplayerSettings.menuScene);






    }

    //IEnumerator LoadLevel()
    //{
    //    while (PhotonNetwork.InRoom)
    //    {
    //        yield return null;
    //        SceneManager.LoadScene(Multiplayersettings.multiplayersettings.secondScene);

    //    }
    //}
    #endregion
}







