using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhaseSpecialAbilityOptions : MonoBehaviour
{
    public void SpecialPhaseResult(MultiPlayerManager LocalPlayer, MultiPlayerManager OtherPlayer)
    {
        TurnOptions.PhaseDefenceTurns cardName = OtherPlayer.Phase3Options;
        switch (cardName)
        {
            case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                LocalPlayer.OnChangeHealth(0, OtherPlayer.Phase3OptionAttackPower * 2);
                break;

            case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                LocalPlayer.OnChangeHealth(0, OtherPlayer.Phase3OptionAttackPower + (OtherPlayer.Phase3OptionAttackPower * OtherPlayer.Phase3OptionhealthEffector));
                break;
            /*case TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack: //Deal Double Damage

                LocalPlayer.OnChangeHealth(LocalPlayer.Phase3OptionhealthEffector, OtherPlayer.Phase3OptionAttackPower);

                damage = Selector.SpecialCardData.Attack;
                if (OtherPlayer.SpecialCardData.ID_SpecialAction == 203) // Check if enemy chose Dcrease Enemy Damage
                {
                    //Decreasing the attack by enemy
                    damage = damage * OtherPlayer.SpecialCardData.decreaseDamagePercent;
                }
                Debug.Log("Double Attack");
                OtherPlayer.OnChangeHealth(damage, false);
                break;

            case TurnOptions.PhaseDefenceTurns.BlockAttack: //Player block Attack
                damage = Selector.SpecialCardData.Attack;
                if(OtherPlayer.SpecialCardData.ID_SpecialAction == 203) // Check if enemy chose Dcrease Enemy Damage
                {
                    //Decreasing the attack by enemy
                    damage = damage * OtherPlayer.SpecialCardData.decreaseDamagePercent;
                }

                Debug.Log("Double Attack");
                OtherPlayer.OnChangeHealth(damage, false);
                break;

            case TurnOptions.PhaseDefenceTurns.HealPortionOfHealth: // Heal Portion of health
                LocalPlayer.OnChangeHealth(LocalPlayer.Phase3OptionhealthEffector, 0);// 
                if (OtherPlayer.SpecialCardData.ID_SpecialAction == 206
|| OtherPlayer.SpecialCardData.ID_SpecialAction == 202)
                {
                    //Attack on Other player from Selector
                    damage = Selector.SpecialCardData.Attack;
                    //Decreasing the attack by enemy
                    damage = damage * Selector.SpecialCardData.decreaseDamagePercent;
                }

                Debug.Log("Decrease enemy attack");
                Selector.OnChangeHealth(damage, false);

                break;

            case 201: //Block Enemy Damage
                // if either player chooses this nothing will happen as the attack will be blocked
                break;

            case 204: // Enemy Defence Reuces for next round
                Debug.Log("Enemy Defence Reduced On Next Round");
                break;

            case 205: // Heal a portion of Health
                Debug.Log("Heal Portion of Health");
                Selector.OnChangeHealth(Selector.SpecialCardData.healingPower, true);
                break;

            case 207: // Heal Max Health
                Debug.Log("Heal Portion of Health");
                LocalPlayer.OnChangeHealth(LocalPlayer.)
                //Selector.OnChangeHealth(Selector.SpecialCardData.healingPower, true);
                break;*/
        }

    }
}
