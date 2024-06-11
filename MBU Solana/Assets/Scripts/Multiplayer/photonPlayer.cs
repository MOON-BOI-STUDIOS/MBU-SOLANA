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

        if (PhotonNetwork.IsMasterClient)
        {
            // randomly chooses spawn point
            int spawnPicker = 0;
            if (GameSetUP.GS.spawnPoints[spawnPicker].GetBoolSpawnPoint())
            {
                spawnPicker = 1;
            }
            //Setting the element's object's value of bool to be true in the struct
            GameSetUP.GS.spawnPoints[spawnPicker].SetBoolSpawnPoint(true);

            // Synchronize the spawn point selection with other clients
            PV.RPC("RPC_SetSpawnPoint", RpcTarget.AllBuffered, spawnPicker);
        }

    }
    #endregion

    [PunRPC]
    void RPC_SetSpawnPoint(int spawnPicker)
    {
        if (PV.IsMine)
        {
            // Instantiate the player avatar at the selected spawn point
            myAvatar = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerAvatar"),
                GameSetUP.GS.spawnPoints[spawnPicker].GetTransformSpawnPoint().position,
                GameSetUP.GS.spawnPoints[spawnPicker].GetTransformSpawnPoint().rotation, 0);
        }
        
        if(PhotonNetwork.IsMasterClient)
            Debug.Log(GameSetUP.GS.spawnPoints[spawnPicker].GetBoolSpawnPoint());
    }
}


