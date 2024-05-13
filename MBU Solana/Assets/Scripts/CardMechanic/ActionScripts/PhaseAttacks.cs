using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhaseAttacks : MonoBehaviour
{
    public virtual void PhaseOptions(GameObject Selector, GameObject OtherPlayer, bool bothPhases)
    {
        TurnOptions.PhaseAttackTurns PhaseAttackTurns = Selector.GetComponent<PlayerManager>().Phase2Options;
        switch (PhaseAttackTurns)
        {
            case TurnOptions.PhaseAttackTurns.Attack:
                OtherPlayer.GetComponent<PlayerManager>().OnChangeHealth(10, false);
                break;

            case TurnOptions.PhaseAttackTurns.LightAttack:
                OtherPlayer.GetComponent<PlayerManager>().OnChangeHealth(30, false);
                break;

            case TurnOptions.PhaseAttackTurns.HeavyAttack:
                OtherPlayer.GetComponent<PlayerManager>().OnChangeHealth(40, false);
                break;

        }
    }
}
