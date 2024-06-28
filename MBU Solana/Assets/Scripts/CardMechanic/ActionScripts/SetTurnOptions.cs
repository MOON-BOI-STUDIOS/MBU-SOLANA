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

    private CardManager cardManager;

    private void Start()
    {
        roundScript = GameObject.FindGameObjectWithTag("Multiplayer_manager").GetComponent<RoundScript>();
        pv = GetComponent<PhotonView>();
        cardManager = GetComponent<CardManager>();
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
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.Attack;
            roundScript.GetLocalPlayer().Phase2CardDamage = cardManager.cardVizs[0].getDamage();
            Debug.Log("On Chosen Attack with Damage" + cardManager.cardVizs[0].getDamage());
        }
    }

    public void OnChosenLightAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.LightAttack;
            roundScript.GetLocalPlayer().Phase2CardDamage = cardManager.cardVizs[2].getDamage();
            Debug.Log("On Chosen Light Attack" + cardManager.cardVizs[2].getDamage());
        }
    }

    public void OnChosenHeavyAttack()
    {
        if (pv.IsMine && roundScript != null)
        {
            roundScript.GetLocalPlayer().Phase2Options = TurnOptions.PhaseAttackTurns.HeavyAttack;
            roundScript.GetLocalPlayer().Phase2CardDamage = cardManager.cardVizs[1].getDamage();
            Debug.Log("On Chosen Heavy Attack" + cardManager.cardVizs[1].getDamage());
        }
    }

    public void OnChosenDoubleAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.DoubleAttack;
            roundScript.GetLocalPlayer().Phase3OptionAttackPower = (int)cardManager.cardVizSpecials[0].getDamage();
            roundScript.GetLocalPlayer().SetOptionSelected(3);
            Debug.Log("On Chosen Double Attack" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenBlockAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.BlockAttack;
            roundScript.GetLocalPlayer().SetOptionSelected(0); // block
            Debug.Log("On Chosen Block Attack" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenPlayerIncreaseDamage()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage;
            roundScript.GetLocalPlayer().Phase3OptionhealthEffector = (int)cardManager.cardVizSpecials[1].getIncreaseDamagePercent();
            roundScript.GetLocalPlayer().Phase3OptionAttackPower = (int)cardManager.cardVizSpecials[1].getDamage();
            roundScript.GetLocalPlayer().SetOptionSelected(3);
            Debug.Log("On Chosen ncrease Damage" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenDecreaseEnemyAttack()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack;
            roundScript.GetLocalPlayer().SetOptionSelected(1); // Decrease Enemy Attack
            roundScript.GetLocalPlayer().Phase3OptionhealthEffector = (int)cardManager.cardVizSpecials[2].getDecreaseDamagePercent();
            Debug.Log("On Chosen Enemy Attack" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenHealPortionOfHealth()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.HealPortionOfHealth;
            roundScript.GetLocalPlayer().SetOptionSelected(2); // Heal
            roundScript.GetLocalPlayer().Phase3OptionhealthEffector = (int)cardManager.cardVizSpecials[5].getHealingPower();
            Debug.Log("On Chosen Portion of Health" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenHealMaxHealth()
    {
        if (pv.IsMine && roundScript != null )
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.HealMaxHealth;
            Debug.Log("On Chosen Max Health" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }

    public void OnChosenEnemyDefenceReducedNextRound()
    {
        if (pv.IsMine && roundScript != null)
        {
            roundScript.GetLocalPlayer().Phase3Options = TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound;
            Debug.Log("On Chosen Next Round" + roundScript.GetLocalPlayer().Phase3Options.ToString());
        }
    }
}
