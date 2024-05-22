using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System.IO;

public class photonPlayer : MonoBehaviour
{
    #region fields
    /// <summary>
    /// reference to photon view
    /// </summary>
    private PhotonView PV;
    /// <summary>
    /// game object for player avatar
    /// </summary>
    public GameObject myAvatar;
    #endregion

    #region methods
    void Start()
    {
        // gets photon view component at start
        PV = GetComponent<PhotonView>();

        // randomly chooses spawn point
        //int spawnPicker = Random.Range(0, GameSetUP.GS.spawnPoints.Length);
        if (PV.IsMine)
        {
            //Check if Spawn point is empty
            if (!GameSetUP.GS.spawnPoints[0].GetBoolSpawnPoint())
            {
                // instantiates photon prefab over the network
                myAvatar = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerAvatar"), GameSetUP.GS.spawnPoints[0].GetTransformSpawnPoint().position, GameSetUP.GS.spawnPoints[0].GetTransformSpawnPoint().rotation, 0);
                //Setting the element's object's value of bool to be true in the struct
                GameSetUP.GS.spawnPoints[0].SetBoolSpawnPoint(true);
            }
            else
            {
                // instantiates photon prefab over the network
                myAvatar = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerAvatar"), GameSetUP.GS.spawnPoints[1].GetTransformSpawnPoint().position, GameSetUP.GS.spawnPoints[1].GetTransformSpawnPoint().rotation, 0);
                //Setting the element's object's value of bool to be true in the struct
                GameSetUP.GS.spawnPoints[1].SetBoolSpawnPoint(true);
            }
        }
    }
    #endregion
}


