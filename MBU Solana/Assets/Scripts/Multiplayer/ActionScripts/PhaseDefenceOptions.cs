using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhaseDefenceOptions : PhaseAttacks
{
    public override void PhaseOptions(GameObject Selector, GameObject OtherPlayer, bool bothOptions)
    {
        base.PhaseOptions(Selector, OtherPlayer, bothOptions);

        if (bothOptions)
        {

            TurnOptions.PhaseDefenceTurns PhaseAttackTurns = Selector.GetComponent<PlayerManager>().Phase3Options;
            switch (PhaseAttackTurns)
            {
                case TurnOptions.PhaseDefenceTurns.DoubleAttack:
                    OtherPlayer.GetComponent<PlayerManager>().OnChangeHealth(50, false);
                    break;

                case TurnOptions.PhaseDefenceTurns.BlockAttack:
                    Selector.GetComponent<PlayerManager>().OnNoDamage();
                    break;

                case TurnOptions.PhaseDefenceTurns.OtherSpecialCard:
                    //Special Card Attack
                    break;

            }
        }

    }
}
