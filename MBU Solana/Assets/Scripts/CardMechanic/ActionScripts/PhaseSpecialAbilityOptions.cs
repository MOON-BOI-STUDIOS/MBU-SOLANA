using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhaseSpecialAbilityOptions : PhaseAttacks
{
    public override void PhaseOptions(PlayerManager Selector, PlayerManager OtherPlayer, bool bothOptions)
    {
        base.PhaseOptions(Selector, OtherPlayer, bothOptions);

        if (bothOptions)
        {

            TurnOptions.PhaseDefenceTurns PhaseAttackTurns = Selector.Phase3Options;
            switch (PhaseAttackTurns)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    Debug.Log("Doube Attack");
                    OtherPlayer.OnChangeHealth(50, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.BlockAttack:
                    Debug.Log("Block Attack");
                    Selector.OnNoDamage();
                    break;

                case TurnOptions.PhaseDefenceTurns.PlayerIncreseDamage:
                    // Randomize the number of Health Change when calling OnChangeHealth
                    Debug.Log("Player Increase Damage");
                    OtherPlayer.OnChangeHealth(40, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.DecreaseEnemyAttack:
                    Debug.Log("Decrease Enemy Attack");
                    // Action Required
                    Selector.OnChangeHealth(5, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.HealPortionOfHealth:
                    Debug.Log("Heal Portion of Health");
                    Selector.OnChangeHealth(10, true);
                    break;

                case TurnOptions.PhaseDefenceTurns.HealMaxHealth:
                    Debug.Log("Heal Max Health");
                    Selector.OnChangeHealth(500, true);
                    break;

                case TurnOptions.PhaseDefenceTurns.EnemyDefenceReducedOnNextRound:
                    Debug.Log("Enemy Defence Reduced On Next Round");
                    //Action Required
                    break;
            }
        }

    }
}
