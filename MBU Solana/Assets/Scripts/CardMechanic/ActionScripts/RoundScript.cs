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
        if (PhotonNetwork.IsMasterClient)
        {
            pv.RPC("SetVariables", RpcTarget.All, player);
        }
        if (!playerDict.ContainsKey(playerId))
        {
            playerDict.Add(playerId, player);
        }
    }

    [PunRPC]
    public void SetVariables(PlayerManager player)
    {
        if (player != null && !player.IsLocalPlayer())
        {
            enemyManagerScript = player;
        }
    }

    public PlayerManager GetPlayerScript()
    {
        int playerId = PhotonNetwork.LocalPlayer.ActorNumber;
        if (playerDict.ContainsKey(playerId))
        {
            return playerDict[playerId];
        }
        return null;
    }

    public PlayerManager GetEnemyScript()
    {
        if (enemyManagerScript != null)
        {
            return enemyManagerScript;
        }
        return null;
    }

    public void OnCalculationOfResult()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            HandleResultCalculation();
        }
    }

    [PunRPC]
    // This function is Invoking other functions to calculate the Result
    public void HandleResultCalculation()
    {
        /*if (playerManagerScript != null && enemyManagerScript != null)
        {
            int playerNumber = turnOptionsMethods.OnPhase1Options(playerManagerScript, enemyManagerScript);
            // 0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie
            if (playerNumber == 2)
            {
                // For Phase 2 and 3 Attacks of player
                phase.PhaseOptions(playerManagerScript, enemyManagerScript, true);// Check the Definition of PhaseOptions
                                                                                  // For Phase 2 and 3 Attacks of Enemy
                phase.PhaseOptions(enemyManagerScript, playerManagerScript, true);// true is used to call both the phases
            }
            else if (playerNumber == 0)
            {
                // For Phase 2 and 3 Attacks of player
                phase.PhaseOptions(playerManagerScript, enemyManagerScript, true);
                // For only Phase 2 Attack
                phase.PhaseOptions(enemyManagerScript, playerManagerScript, false);
            }
            else if (playerNumber == 1)
            {
                // For only Phase 2 Attack
                phase.PhaseOptions(playerManagerScript, enemyManagerScript, false);
                // For Phase 2 and 3 Attacks of Enemy
                phase.PhaseOptions(enemyManagerScript, playerManagerScript, true);
            }
        }*/

        // This will happen for 3 rounds
        //Call OnRoundStart Once again
    }



    /*public void OnOptionSelected(TurnOptions.Turns _turns, GameObject Selector, GameObject OtherPlayer )
    {
        switch (_turns)
        {
            case TurnOptions.Turns.BlockEnemyDamage:
                // No change in Player Health no matter what attack
                Selector.GetComponent<PlayerManager>().OnNoDamage();
                break;

            case TurnOptions.Turns.IncreasePlayerDefence:
                // Increase the defence of the Player
                Selector.GetComponent<PlayerManager>().OnChangeDefence(10, true);
                break;

            case TurnOptions.Turns.HealPortionHealth:
                // Heal the health
                Selector.GetComponent<PlayerManager>().OnChangeHealth(10, true);
                break;

            case TurnOptions.Turns.HealMaxHealth:
                // Increase Max Health
                break;

            case TurnOptions.Turns.DoubleDamage:
                // Decrease Player Health
                OtherPlayer.GetComponent<PlayerManager>().OnChangeHealth(40, false);
                break;

            case TurnOptions.Turns.NxtRdReduceEnemyDefence:
                // Reduce Enemy Defence Next Round
                break;

            case TurnOptions.Turns.NxtRdReduceEnemyAttack:
                // Reduce Enemy Damage on Player next round
                break;
        }
    }*/
}
