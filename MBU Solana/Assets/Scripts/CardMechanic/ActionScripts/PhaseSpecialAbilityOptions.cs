using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhaseSpecialAbilityOptions : PhaseAttacks
{
    public override void PhaseOptions(PlayerManager Selector, PlayerManager OtherPlayer, bool bothOptions)
    {
        base.PhaseOptions(Selector, OtherPlayer, bothOptions);

        if (bothOptions)
        {
            float damage = 0;
            TurnOptions.PhaseDefenceTurns PhaseAttackTurns = Selector.Phase3Options;
            switch (PhaseAttackTurns)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    //Attack on Other player from Selector
                    damage = cm.cardVizSpecials[0].getDamage();
                    if (OtherPlayer.Phase3Options == TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack)
                    {
                        //Decreasing the attack by enemy
                        damage = damage * cm.cardVizSpecials[2].getDecreaseDamagePercent();
                    }

                    Debug.Log("Double Attack");
                    OtherPlayer.OnChangeHealth(damage, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.BlockAttack:
                    // if either player chooses this nothing will happen as the attack will be blocked
                    break;

                case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                    //Attack on Other player from Selector
                    damage = cm.cardVizSpecials[0].getDamage();
                    if (OtherPlayer.Phase3Options == TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack)
                    {
                        //Decreasing the attack by enemy
                        damage = damage * cm.cardVizSpecials[2].getDecreaseDamagePercent();
                    }

                    Debug.Log("Double Attack");
                    OtherPlayer.OnChangeHealth(damage, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack:
                    if (OtherPlayer.Phase3Options == TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage
                        || OtherPlayer.Phase3Options == TurnOptions.PhaseDefenceTurns.DoubleAttack)
                    {
                        //Attack on Other player from Selector
                        damage = cm.cardVizSpecials[0].getDamage();
                        //Decreasing the attack by enemy
                        damage = damage * cm.cardVizSpecials[2].getDecreaseDamagePercent();
                    }

                    Debug.Log("Decrease enemy attack");
                    Selector.OnChangeHealth(damage, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.HealPortionOfHealth:
                    Debug.Log("Heal Portion of Health");
                    Selector.OnChangeHealth(cm.cardVizSpecials[5].getHealingPower(), true);
                    break;

                case TurnOptions.PhaseDefenceTurns.HealMaxHealth:
                    Debug.Log("Heal Portion of Health");
                    Selector.OnChangeHealth(cm.cardVizSpecials[5].getHealingPower(), true);
                    break;

                case TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound:
                    Debug.Log("Enemy Defence Reduced On Next Round");

                    break;
            }
        }

    }
}
