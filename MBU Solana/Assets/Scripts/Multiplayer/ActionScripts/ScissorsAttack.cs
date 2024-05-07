using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScissorsAttack : MonoBehaviour
{
    public RoundScript roundScript;

    void OnDoubleDamage()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.DoubleDamage);
    }

    // These will be implemented next round 
    void OnDecreaseEnemyAttack()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.NxtRdReduceEnemyAttack);
    }
}
