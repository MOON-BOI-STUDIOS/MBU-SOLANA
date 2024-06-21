using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetTurnOptions : MonoBehaviour
{
    private RoundScript roundScript;
    // Local Player
    //public PlayerManager Player;
    private PhotonView pv;

    private void Start()
    {
        roundScript = GameObject.FindGameObjectWithTag("Multiplayer_manager").GetComponent<RoundScript>();
        pv = GetComponent<PhotonView>();
    }

    public void OnChosenRock()
    {
        // Get the local player who is clicking on the card and save the choice for that player in their Player Manager variable
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Rock");
            roundScript.GetLocalPlayer().Phase1Options = TurnOptions.Phase1Turns.Rock;
        }
    }

    public void OnChosenPaper()
    {
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Paper");
            roundScript.GetLocalPlayer().Phase1Options = TurnOptions.Phase1Turns.Paper;
        }
    }

    public void OnChosenScissor()
    {
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Scissor");
            roundScript.GetLocalPlayer().Phase1Options = TurnOptions.Phase1Turns.Scissor;
        }
    }

    public void OnChosenAttack()
    {
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Attack");
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
        }
        //if (Player != null)
        //  Player.Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
    }

    public void OnChosenLightAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Light Attack");
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.LightAttack;
        }
    }

    public void OnChosenHeavyAttack()
    {
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Heavy Attack");
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.HeavyAttack;
        }
    }

    public void OnChosenDoubleAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Double Attack");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.DoubleAttack;
        }
    }

    public void OnChosenBlockAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Block Attack");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.BlockAttack;
        }
    }

    public void OnChosenPlayerIncreaseDamage()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen ncrease Damage");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage;
        }
    }

    public void OnChosenDecreaseEnemyAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Enemy Attack");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack;
        }
    }

    public void OnChosenHealPortionOfHealth()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Portion of Health");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.HealPortionOfHealth;
        }
    }

    public void OnChosenHealMaxHealth()
    {
        if (pv.IsMine && roundScript != null )
        {
            Debug.Log("On Chosen Max Health");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.HealMaxHealth;
        }
    }

    public void OnChosenEnemyDefenceReducedNextRound()
    {
        if (pv.IsMine && roundScript != null)
        {
            Debug.Log("On Chosen Next Round");
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound;
        }
    }
}
