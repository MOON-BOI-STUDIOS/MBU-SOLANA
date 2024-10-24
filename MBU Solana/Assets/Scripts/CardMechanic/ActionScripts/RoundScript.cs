using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using static TurnOptions;


public class RoundScript : MonoBehaviourPunCallbacks
{
    //private MultiPlayerManager MultiPlayerManagerScript;
    private MultiPlayerManager enemyManagerScript;

    public ITurnOptionsMethods turnOptionsMethods;

    PhaseSpecialAbilityOptions specialphase;

    private PhotonView pv;

    private Dictionary<int, MultiPlayerManager> playerDict = new Dictionary<int, MultiPlayerManager>();

    private bool nextRoundAttack = false;

    private MultiPlayerManager playerToBeDamaged = null;

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

    public void FindPlayers(int playerId, MultiPlayerManager player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            object[] data = { playerId, player };
            pv.RPC("SetVariableDict", RpcTarget.MasterClient, data);
        }
    }

    public MultiPlayerManager GetLocalPlayer()
    {
        if (MultiPlayerManager.LocalPlayerInstance != null)
        {
            return MultiPlayerManager.LocalPlayerInstance.GetComponent<MultiPlayerManager>();
        }
        return null;
    }

    public MultiPlayerManager GetOtherPlayer()
    {
        if (MultiPlayerManager.OtherPlayerInstance != null)
        {
            return MultiPlayerManager.OtherPlayerInstance.GetComponent<MultiPlayerManager>();
        }
        return null;
    }

    [PunRPC]
    public void SetVariableDict(int playerId,MultiPlayerManager player)
    {
        if (!playerDict.ContainsKey(playerId))
        {
            playerDict.Add(playerId, player);
        }
    }

    public MultiPlayerManager GetPlayerScript()
    {
        int playerId = PhotonNetwork.LocalPlayer.ActorNumber;//PhotonNetwork.LocalPlayer.ActorNumber;
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        return null;
    }

    public MultiPlayerManager GetEnemyScript()
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
            pv.RPC("UpdateWinningPlayer", RpcTarget.Others, winningPlayer);
            pv.RPC("ApplyCardDamages", RpcTarget.All);
        }
        // For --Host and --Client

    }

    [PunRPC]
    // This function is Invoking other functions to calculate the Result
    public void HandleResultCalculation()
    {
        /*winningPlayer = turnOptionsMethods.OnPhase1Options(GetLocalPlayer(), GetGetOtherPlayer()());
        Debug.Log("The Player number which won is:" + winningPlayer);
        Debug.Log("0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie");*/
        Debug.Log("Calculating Round Option from phase 1");
        //Tie Option both the player and enemy selected same Option
        if (GetLocalPlayer().Phase1Options == GetOtherPlayer().Phase1Options)
        {
            winningPlayer = 2;
        }
        else if (GetLocalPlayer().Phase1Options == TurnOptions.Phase1Turns.Rock &&
            GetOtherPlayer().Phase1Options == TurnOptions.Phase1Turns.Scissor)
        {
            winningPlayer = 0;
        }
        else if (GetLocalPlayer().Phase1Options == TurnOptions.Phase1Turns.Rock &&
            GetOtherPlayer().Phase1Options == TurnOptions.Phase1Turns.Paper)
        {
            winningPlayer = 1;
        }
        else if (GetLocalPlayer().Phase1Options == TurnOptions.Phase1Turns.Paper &&
            GetOtherPlayer().Phase1Options == TurnOptions.Phase1Turns.Rock)
        {
            winningPlayer = 0;
        }
        else if (GetLocalPlayer().Phase1Options == TurnOptions.Phase1Turns.Paper &&
            GetOtherPlayer().Phase1Options == TurnOptions.Phase1Turns.Scissor)
        {
            winningPlayer = 1;
        }
        else if (GetLocalPlayer().Phase1Options == TurnOptions.Phase1Turns.Scissor &&
            GetOtherPlayer().Phase1Options == TurnOptions.Phase1Turns.Rock)
        {
            winningPlayer = 1;
        }
        else
        {
            winningPlayer = 0;
        }
        Debug.Log("The Player number which won is:" + winningPlayer);
    }

    [PunRPC]
    public void UpdateWinningPlayer(int value)
    {
        this.winningPlayer = value;
        Debug.Log("(Only for client)The Player number which won is:" + winningPlayer);
    }

    [PunRPC]
    public void ApplyCardDamages()
    {
        Debug.Log("(Inside ApplyCardDamage Function)The Player number which won is:" + winningPlayer);
        //0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie

        // For phase 2 damages
        GetLocalPlayer().OnChangeHealth(GetOtherPlayer().Phase2CardDamage, 1); // Set the last parameter to 1 to let the function in player manager decrease health
                                                                               //specialphase.SpecialPhaseResult(GetLocalPlayer(), GetGetOtherPlayer()());
        TurnOptions.PhaseDefenceTurns cardName = GetOtherPlayer().Phase3Options;
        Debug.Log("The name of the card chosen by the other player" + cardName);

        if (winningPlayer == 0) // Host won RPS round
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                GetLocalPlayer().SetOptionSelected(3); // Damage will be imminent;
                Debug.Log("if it is 0");
                switch (cardName)
                {
                    case PhaseDefenceTurns.DoubleAttack:
                        GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower * 2);
                        Debug.Log("GetOtherPlayer().Phase3OptionAttackPower * 2" + GetOtherPlayer().Phase3OptionAttackPower * 2);
                        break;

                    case PhaseDefenceTurns.PlayerIncreseDamage:
                        GetLocalPlayer().OnChangeHealth(0, (int)(GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * (float)(GetOtherPlayer().Phase3OptionhealthEffector/100))));
                        Debug.Log("GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector" + GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                        break;
                    default:
                        GetLocalPlayer().OnChangeHealth(0, 0);
                        break;
                }
            }
            else
            {
                GetLocalPlayer().OnChangeHealth(0, 0);
            }
        }
        else if (winningPlayer == 1) // Client Won
        {
            if (PhotonNetwork.IsMasterClient)
            {
                GetLocalPlayer().SetOptionSelected(3); // Damage will be imminent;
                Debug.Log("if it is 1");
                switch (cardName)
                {
                    case PhaseDefenceTurns.DoubleAttack:
                        GetLocalPlayer().OnChangeHealth(0, (GetOtherPlayer().Phase3OptionAttackPower * 2));
                        Debug.Log("GetOtherPlayer().Phase3OptionAttackPower * 2" + GetOtherPlayer().Phase3OptionAttackPower * 2);
                        break;

                    case PhaseDefenceTurns.PlayerIncreseDamage:
                        GetLocalPlayer().OnChangeHealth(0, (int)(GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * (float)(GetOtherPlayer().Phase3OptionhealthEffector / 100))));
                        Debug.Log("GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector" + GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                        break;
                    default:
                        GetLocalPlayer().OnChangeHealth(0, 0);
                        break;
                }
            }
            else
            {
                GetLocalPlayer().OnChangeHealth(0, 0);
            }
        }
        else if(winningPlayer == 2)
        {
            Debug.Log("if it is 2");
            switch (cardName)
            {
                case PhaseDefenceTurns.DoubleAttack:
                    GetLocalPlayer().OnChangeHealth(0, GetOtherPlayer().Phase3OptionAttackPower * 2);
                    Debug.Log("GetOtherPlayer().Phase3OptionAttackPower * 2" + GetOtherPlayer().Phase3OptionAttackPower * 2);
                    break;

                case PhaseDefenceTurns.PlayerIncreseDamage:
                    GetLocalPlayer().OnChangeHealth(0, (int)(GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * (float)(GetOtherPlayer().Phase3OptionhealthEffector / 100))));
                    Debug.Log("GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector" + GetOtherPlayer().Phase3OptionAttackPower + (GetOtherPlayer().Phase3OptionAttackPower * GetOtherPlayer().Phase3OptionhealthEffector));
                    break;

                default:
                    GetLocalPlayer().OnChangeHealth(0, 0);
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
