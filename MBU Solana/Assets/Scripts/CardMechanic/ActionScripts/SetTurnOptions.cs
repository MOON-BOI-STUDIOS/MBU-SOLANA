using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetTurnOptions : MonoBehaviour
{
    private RoundScript roundScript;
    // Local Player
    //public PlayerManager Player;

    private void Start()
    {
        roundScript = GameObject.FindGameObjectWithTag("Multiplayer_manager").GetComponent<RoundScript>();
    }

    public void OnChosenRock()
    {
        // Get the local player who is clicking on the card and save the choice for that player in their Player Manager variable
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Rock;
        }
    }

    public void OnChosenPaper()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Paper;
        }
    }

    public void OnChosenScissor()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Scissor;
        }
    }

    public void OnChosenAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
        }
        //if (Player != null)
          //  Player.Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
    }

    public void OnChosenLightAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.LightAttack;
        }
    }

    public void OnChosenHeavyAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.HeavyAttack;
        }
    }

    public void OnChosenDoubleAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DoubleAttack;
        }
    }

    public void OnChosenBlockAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.BlockAttack;
        }
    }

    public void OnChosenPlayerIncreaseDamage()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage;
        }
    }

    public void OnChosenDecreaseEnemyAttack()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack;
        }
    }

    public void OnChosenHealPortionOfHealth()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealPortionOfHealth;
        }
    }

    public void OnChosenHealMaxHealth()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealMaxHealth;
        }
    }

    public void OnChosenEnemyDefenceReducedNextRound()
    {
        if (roundScript != null && roundScript.GetPlayerScript() != null)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound;
        }
    }
}
