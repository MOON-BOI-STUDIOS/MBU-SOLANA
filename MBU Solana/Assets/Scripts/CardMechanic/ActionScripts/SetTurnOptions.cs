using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetTurnOptions : MonoBehaviour
{
    public RoundScript roundScript;

    public void OnChosenRock()
    {
        roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Rock;
    }

    public void OnChosenPaper()
    {
        roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Paper;
    }

    public void OnChosenScissor()
    {
        roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Scissor;
    }

    public void OnChosenAttack()
    {
        roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
    }

    public void OnChosenLightAttack()
    {
        roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.LightAttack;
    }

    public void OnChosenHeavyAttack()
    {
        roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.HeavyAttack;
    }

    public void OnChosenDoubleAttack()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DoubleAttack;
    }

    public void OnChosenBlockAttack()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.BlockAttack;
    }

    public void OnChosenPlayerIncreaseDamage()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage;
    }

    public void OnChosenDecreaseEnemyAttack()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack;
    }

    public void OnChosenHealPortionOfHealth()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealPortionOfHealth;
    }

    public void OnChosenHealMaxHealth()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealMaxHealth;
    }

    public void OnChosenEnemyDefenceReducedNextRound()
    {
        roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound;
    }
}
