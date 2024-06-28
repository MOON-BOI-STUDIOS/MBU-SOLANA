using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhaseAttacks : MonoBehaviour
{
    private PhotonView pv;

    public RoundScript rs;

    private void Start()
    {
        pv = GetComponent<PhotonView>();
        rs = GetComponent<RoundScript>();
    }


    public virtual void PhaseOptions(PlayerManager Selector, PlayerManager OtherPlayer, bool bothPhases)
    {
        pv.RPC("InflictDamage", RpcTarget.MasterClient, OtherPlayer, rs.GetLocalPlayer().Phase2CardDamage);
        Debug.Log("Inflicting Damage on the other player");
    }

    [PunRPC]
    public void InflictDamage(PlayerManager OtherPlayer, int damage)
    {
        
    }
}
