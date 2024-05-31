using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhaseAttacks : MonoBehaviour
{
    private PhotonView pv;
    private void Start()
    {
        pv = GetComponent<PhotonView>();
    }
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
