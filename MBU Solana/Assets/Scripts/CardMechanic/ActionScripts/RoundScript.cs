using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using static TurnOptions;


public class RoundScript : MonoBehaviourPunCallbacks
{
    //private PlayerManager playerManagerScript;
    private PlayerManager enemyManagerScript;

    public ITurnOptionsMethods turnOptionsMethods;

    PhaseSpecialAbilityOptions specialphase;

    private PhotonView pv;

    private Dictionary<int, PlayerManager> playerDict = new Dictionary<int, PlayerManager>();

    private bool nextRoundAttack = false;

    private PlayerManager playerToBeDamaged = null;

    private float DamageToBeInflicted = 0; //Next Round DamageVariable

    private int winningPlayer = 0; // 0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie

    // Start is called before the first frame update
    void Start()
    {
        turnOptionsMethods = GetComponent<ITurnOptionsMethods>();
        // For Phase Logic
        specialphase = GetComponent<PhaseSpecialAbilityOptions>();
        pv = GetComponent<PhotonView>();

    }

    public void FindPlayers(int playerId,PlayerManager player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            object[] data = { playerId, player };
            pv.RPC("SetVariableDict", RpcTarget.MasterClient, data);
        }
    }

    public PlayerManager GetLocalPlayer()
    {
        if (PlayerManager.LocalPlayerInstance != null)
        {
            return PlayerManager.LocalPlayerInstance.GetComponent<PlayerManager>();
        }
        return null;
    }

    public PlayerManager GetOtherPlayer()
    {
        if (PlayerManager.OtherPlayer != null)
        {
            return PlayerManager.OtherPlayer.GetComponent<PlayerManager>();
        }
        return null;
    }

    [PunRPC]
    public void SetVariableDict(int playerId,PlayerManager player)
    {
        if (!playerDict.ContainsKey(playerId))
        {
            playerDict.Add(playerId, player);
        }
    }

    public PlayerManager GetPlayerScript()
    {
        int playerId = PhotonNetwork.LocalPlayer.ActorNumber;//PhotonNetwork.LocalPlayer.ActorNumber;
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        return null;
    }

    public PlayerManager GetEnemyScript()
    {

        int playerId = PhotonNetwork.PlayerListOthers[0].ActorNumber;
        Player player = PhotonNetwork.PlayerListOthers[0];
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        return null;
    }

    public void OnCalculationOfResult()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            pv.RPC("HandleResultCalculation", RpcTarget.MasterClient);
            pv.RPC("ApplyCardDamages", RpcTarget.All);
        }
        // For --Host and --Client

    }

    [PunRPC]
    // This function is Invoking other functions to calculate the Result
    public void HandleResultCalculation()
    {
        winningPlayer = turnOptionsMethods.OnPhase1Options(GetPlayerScript(), GetEnemyScript());
        Debug.Log("The Player number which won is:" + winningPlayer);
        Debug.Log("0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie");
    }

    [PunRPC]
    public void ApplyCardDamages()
    {
        Debug.Log("(Inside ApplyCardDamage Function)The Player number which won is:" + winningPlayer);
        //0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie

        // For phase 2 damages
        GetLocalPlayer().OnChangeHealth(GetOtherPlayer().Phase2CardDamage, 1); // Set the last parameter to 1 to let the function in player manager decrease health

        if (winningPlayer == 0 && PhotonNetwork.IsMasterClient) // Host won RPS round
        {
            //specialphase.SpecialPhaseResult(GetLocalPlayer(), GetOtherPlayer());
            TurnOptions.PhaseDefenceTurns cardName = GetOtherPlayer().Phase3Options;
            switch (cardName)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower * 2);
                    break;

                case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                    break;
            }
        }
        else if (winningPlayer == 1 && !PhotonNetwork.IsMasterClient) // Client Won
        {
            //specialphase.SpecialPhaseResult(GetLocalPlayer(), GetOtherPlayer());
            TurnOptions.PhaseDefenceTurns cardName = GetOtherPlayer().Phase3Options;
            switch (cardName)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower * 2);
                    break;

                case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                    break;
            }
        }
        else
        {
            //specialphase.SpecialPhaseResult(GetLocalPlayer(), GetOtherPlayer());
            TurnOptions.PhaseDefenceTurns cardName = GetOtherPlayer().Phase3Options;
            switch (cardName)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower * 2);
                    break;

                case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                    break;
            }
        }
        }
       /*0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie
       if (playerNumber == 2)
       {
           // For Phase 2 and 3 Attacks of player
           phase.PhaseOptions(GetPlayerScript(), GetEnemyScript(), true);// Check the Definition of PhaseOptions
           // For Phase 2 and 3 Attacks of Enemy
           phase.PhaseOptions(GetEnemyScript(), GetPlayerScript(), true);// true is used to call both the phases
       }
       if (playerNumber == 0 && PhotonNetwork.IsMasterClient)
       {
           pv.RPC("InflictDamage", RpcTarget.All);
           Debug.Log("Inflicting Damage on the other player");
           // For Phase 2 and 3 Attacks of player
           //phase.PhaseOptions(GetPlayerScript(), GetEnemyScript(), true);
           // For only Phase 2 Attack of enemy
           //phase.PhaseOptions(GetEnemyScript(), GetPlayerScript(), false);
       }
       /*else if (playerNumber == 1)
       {
           // For only Phase 2 Attack of player
           phase.PhaseOptions(GetPlayerScript(), GetEnemyScript(), false);
           // For Phase 2 and 3 Attacks of Enemy
           phase.PhaseOptions(GetEnemyScript(), GetPlayerScript(), true);
       }*/
        // This will happen for 3 rounds
        //Call OnRoundStart Once again


    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext((int)winningPlayer);
        }
        else
        {
            winningPlayer = (int)stream.ReceiveNext();
        }
    }
}
