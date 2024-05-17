using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetTurnOptions : MonoBehaviour
{
    public RoundScript roundScript;

    public void OnChosenRock()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Rock;
        }
    }

    public void OnChosenPaper()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Paper;
        }
    }

    public void OnChosenScissor()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase1Options = TurnOptions.Phase1Turns.Scissor;
        }
    }

    public void OnChosenAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
        }
    }

    public void OnChosenLightAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.LightAttack;
        }
    }

    public void OnChosenHeavyAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase2Options = TurnOptions.PhaseAttackTurns.HeavyAttack;
        }
    }

    public void OnChosenDoubleAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DoubleAttack;
        }
    }

    public void OnChosenBlockAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.BlockAttack;
        }
    }

    public void OnChosenPlayerIncreaseDamage()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage;
        }
    }

    public void OnChosenDecreaseEnemyAttack()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack;
        }
    }

    public void OnChosenHealPortionOfHealth()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealPortionOfHealth;
        }
    }

    public void OnChosenHealMaxHealth()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.HealMaxHealth;
        }
    }

    public void OnChosenEnemyDefenceReducedNextRound()
    {
        if (roundScript != null && PhotonNetwork.IsMasterClient)
        {
            roundScript.GetPlayerScript().Phase3Options = TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound;
        }
    }
}
