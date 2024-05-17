using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public class RoundScript : MonoBehaviourPunCallbacks
{
    private PlayerManager playerManagerScript;
    private PlayerManager enemyManagerScript;

    public ITurnOptionsMethods turnOptionsMethods;

    PhaseSpecialAbilityOptions phase;



    // Start is called before the first frame update
    void Start()
    {

        FindPlayers();
        // Add If statement if locally controlled find the Player manager of the Owner and get a referenc of the Script
        //playerManagerScript = GameObject.FindGameObjectWithTag("Player");
        //get the Enemy in case of single player and incase of multiplayer get the other player
        //enemyManagerScript = GameObject.FindGameObjectWithTag("Enemy");
        //To Get Iterface for Rock Paper Scissor logic
        turnOptionsMethods = GetComponent<ITurnOptionsMethods>();
        // For Phase Logic
        phase = GetComponent<PhaseSpecialAbilityOptions>();
    }

    private void FindPlayers()
    {
        PlayerManager[] allPlayerManager = FindObjectsOfType<PlayerManager>();
        for (int i = 0; i < allPlayerManager.Length; i++)
        {
            if (allPlayerManager[i].IsLocalPlayer())
            {
                playerManagerScript = allPlayerManager[i];
            }
            else
            {
                enemyManagerScript = allPlayerManager[i];
            }
        }

        if (playerManagerScript == null && enemyManagerScript == null)
        {
            Debug.Log("Failed to find both local Player Manager Script and Enemy's same");
        }
        else {
            Debug.Log("Founf required Scripts");
        }
    }

    public PlayerManager GetPlayerScript()
    {
        return playerManagerScript;
    }

    public PlayerManager GetEnemyScript()
    {
        return enemyManagerScript;
    }

    public void OnCalculationOfResult()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            //Invoke RPC to handle result calculation on all clients
            photonView.RPC("HandleResultCalculation", RpcTarget.AllBuffered);
        }
    }

    [PunRPC]
    void HandleResultCalculation()
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
