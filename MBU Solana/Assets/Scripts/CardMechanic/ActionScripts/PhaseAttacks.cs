using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhaseAttacks : MonoBehaviour
{
    public virtual void PhaseOptions(PlayerManager Selector, PlayerManager OtherPlayer, bool bothPhases)
    {
        TurnOptions.PhaseAttackTurns PhaseAttackTurns = Selector.Phase2Options;
        switch (PhaseAttackTurns)
        {
            case TurnOptions.PhaseAttackTurns.Attack:
                OtherPlayer.OnChangeHealth(10, false);
                break;

            case TurnOptions.PhaseAttackTurns.LightAttack:
                OtherPlayer.OnChangeHealth(30, false);
                break;

            case TurnOptions.PhaseAttackTurns.HeavyAttack:
                OtherPlayer.OnChangeHealth(40, false);
                break;

        }
    }
}
