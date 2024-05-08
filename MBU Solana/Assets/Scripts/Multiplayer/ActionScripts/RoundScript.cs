using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class RoundScript : MonoBehaviour
{
    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;

  

    public ITurnOptionsMethods turnOptionsMethods;

    PhaseSpecialAbilityOptions phase;



    // Start is called before the first frame update
    void Start()
    {
        // Add If statement if locally controlled find the Player manager of the Owner and get a referenc of the Script
        playerManagerScript = GameObject.FindGameObjectWithTag("Player");
        //get the Enemy in case of single player and incase of multiplayer get the other player
        enemyManagerScript = GameObject.FindGameObjectWithTag("Enemy");
        //To Get Iterface for Rock Paper Scissor logic
        turnOptionsMethods = GetComponent<ITurnOptionsMethods>();
        // For Phase Logic
        phase = GetComponent<PhaseSpecialAbilityOptions>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

  

    public PlayerManager GetPlayerScript()
    {
        return playerManagerScript.GetComponent<PlayerManager>();
    }

    public PlayerManager GetEnemyScript()
    {
        return enemyManagerScript.GetComponent<PlayerManager>();
    }

    public void OnCalculationOfResult()
    {
        // Calculation of Phase1
        int PlayerNumber = turnOptionsMethods.OnPhase1Options(playerManagerScript, enemyManagerScript);
        // 0 -> Host player/ 1st player win , 1-> client Player/ Enemy win , 2-> tie
        if (PlayerNumber == 2)
        {
            // For Phase 2 and 3 Attacks of player
            phase.PhaseOptions(playerManagerScript, enemyManagerScript, true);// Check the Definition of PhaseOptions
            // For Phase 2 and 3 Attacks of Enemy
            phase.PhaseOptions(enemyManagerScript, playerManagerScript, true);// true is used to call both the phases
        }
        else if (PlayerNumber == 0)
        {
            // For Phase 2 and 3 Attacks of player
            phase.PhaseOptions(playerManagerScript, enemyManagerScript, true);
            // For only Phase 2 Attack
            phase.PhaseOptions(enemyManagerScript, playerManagerScript, false);
        }
        else if(PlayerNumber == 1)
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
