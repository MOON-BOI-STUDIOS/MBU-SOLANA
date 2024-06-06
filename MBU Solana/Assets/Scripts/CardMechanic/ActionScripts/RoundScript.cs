using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;


public class RoundScript : MonoBehaviourPunCallbacks
{
    //private PlayerManager playerManagerScript;
    private PlayerManager enemyManagerScript;

    public ITurnOptionsMethods turnOptionsMethods;

    PhaseSpecialAbilityOptions phase;

    private PhotonView pv;

    private Dictionary<int, PlayerManager> playerDict = new Dictionary<int, PlayerManager>();

    private bool nextRoundAttack = false;

    private PlayerManager playerToBeDamaged = null;

    private float DamageToBeInflicted = 0; //Next Round DamageVariable 

    // Start is called before the first frame update
    void Start()
    {
        turnOptionsMethods = GetComponent<ITurnOptionsMethods>();
        // For Phase Logic
        phase = GetComponent<PhaseSpecialAbilityOptions>();
        pv = GetComponent<PhotonView>();

    }

    public void FindPlayers(int playerId,PlayerManager player)
    {
        /*if (!playerDict.ContainsKey(playerId))
        {
            playerDict.Add(playerId, player);
        }*/
        if (PhotonNetwork.IsMasterClient)
        {
            object[] data = { playerId, player };
            pv.RPC("SetVariableDict", RpcTarget.MasterClient, data);
        }
    }

    [PunRPC]
    public void SetVariableDict(int playerId,PlayerManager player)
    {
        if (!playerDict.ContainsKey(playerId))
        {
            Debug.Log("Registered with player ID: " + playerId);
            playerDict.Add(playerId, player);
        }
    }

    public PlayerManager GetPlayerScript()
    {
        int playerId = PhotonNetwork.LocalPlayer.ActorNumber; //PhotonNetwork.LocalPlayer.ActorNumber;
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        return null;
    }

    public PlayerManager GetEnemyScript()
    {
        int playerId = PhotonNetwork.PlayerListOthers[0].ActorNumber;
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        Debug.Log("Enemy script is null as Player id not present:" + playerId);
        return null;

    }

    public void OnCalculationOfResult()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            pv.RPC("HandleResultCalculation", RpcTarget.MasterClient);
        }
    }

    [PunRPC]
    // This function is Invoking other functions to calculate the Result
    public void HandleResultCalculation()
    {
        Debug.Log("Calculating");
        int playerNumber = turnOptionsMethods.OnPhase1Options(GetPlayerScript(), GetEnemyScript());
        Debug.Log("Player Number is:" + playerNumber);
        // 0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie
        if (playerNumber == 2)
        {
            // For Phase 2 and 3 Attacks of player
            phase.PhaseOptions(GetPlayerScript(), GetEnemyScript(), true);// Check the Definition of PhaseOptions
            // For Phase 2 and 3 Attacks of Enemy
            phase.PhaseOptions(GetEnemyScript(), GetPlayerScript(), true);// true is used to call both the phases
        }
        /*else if (playerNumber == 0)
        {
            // For Phase 2 and 3 Attacks of player
            phase.PhaseOptions(playerManagerScript, enemyManagerScript, true);
            // For only Phase 2 Attack of enemy
            phase.PhaseOptions(enemyManagerScript, playerManagerScript, false);
        }
        else if (playerNumber == 1)
        {
            // For only Phase 2 Attack of player
            phase.PhaseOptions(playerManagerScript, enemyManagerScript, false);
            // For Phase 2 and 3 Attacks of Enemy
            phase.PhaseOptions(enemyManagerScript, playerManagerScript, true);
        }*/


        // This will happen for 3 rounds
        //Call OnRoundStart Once again
    }

    #region NextRoundAttack
    public void SetNextRoundAttack(bool value)
    {
        nextRoundAttack = value;
    }

    public void SetToBeDamagedPlayer(PlayerManager player)
    {
        playerToBeDamaged = player;
    }

    public void SetDamageForNextRound(float value)
    {
        DamageToBeInflicted = value;
    }

    public void OnNextRoundAttack()
    {
        if (nextRoundAttack && playerToBeDamaged != null)
        {
            playerToBeDamaged.OnChangeHealth(DamageToBeInflicted, false);
        }
    }

    #endregion
}
