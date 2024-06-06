using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhaseAttacks : MonoBehaviour
{
    private PhotonView pv;

    public CardManager cm;

    public RoundScript rs;
    private void Start()
    {
        pv = GetComponent<PhotonView>();
        rs = GetComponent<RoundScript>();
    }

    [PunRPC]
    public void SetCardManager()
    {
        cm = cm.GetComponent<CardManager>();
    }

    public virtual void PhaseOptions(PlayerManager Selector, PlayerManager OtherPlayer, bool bothPhases)
    {
        if(PhotonNetwork.IsMasterClient)
        {
            pv.RPC("SetCardManager", RpcTarget.All);
        }

        TurnOptions.PhaseAttackTurns PhaseAttackTurns = Selector.Phase2Options;
        switch (PhaseAttackTurns)
        {
            case TurnOptions.PhaseAttackTurns.Attack: // CardVizs[0] : Attack Card
                OtherPlayer.OnChangeHealth((float)cm.cardVizs[0].getDamage(), false);
                break;

            case TurnOptions.PhaseAttackTurns.LightAttack:// CardVizs[2] : Attack Card
                OtherPlayer.OnChangeHealth((float)cm.cardVizs[2].getDamage(), false);
                break;

            case TurnOptions.PhaseAttackTurns.HeavyAttack:// // CardVizs[1] : Attack Card
                OtherPlayer.OnChangeHealth((float)cm.cardVizs[1].getDamage(), false);
                break;

        }
    }
}
