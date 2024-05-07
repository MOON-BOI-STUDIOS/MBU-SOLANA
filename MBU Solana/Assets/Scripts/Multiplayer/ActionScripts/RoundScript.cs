using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoundScript : MonoBehaviour
{
    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;



    // Start is called before the first frame update
    void Start()
    {
        // Add If statement if locally controlled find the Player manager of the Owner and get a referenc of the Script
        playerManagerScript = GameObject.Find("Player");
        //get the Enemy in case of single player and incase of multiplayer get the other player
        enemyManagerScript = GameObject.Find("Enemy");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnRoundStarted()
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
        // Get the option Selected by the player
        OnOptionSelected(playerManagerScript.GetComponent<PlayerManager>().GetSelectedOption(), playerManagerScript, enemyManagerScript);

        //Get the option Selected by the Enemy
        OnOptionSelected(enemyManagerScript.GetComponent<PlayerManager>().GetSelectedOption(), enemyManagerScript, playerManagerScript);
    }

    public void OnOptionSelected(TurnOptions.Turns _turns, GameObject Selector, GameObject OtherPlayer )
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
    }
}
