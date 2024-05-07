using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    public RoundScript roundScript;
    
    void OnBlockEnemyDamage()
    {
        // Block Own player
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.BlockEnemyDamage);
    }

    void OnIncreaseDefence()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.IncreasePlayerDefence);
    }

    // These will be implemented next round 
    void EnemyDefenceReduced()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.NxtRdReduceEnemyDefence);
    }
}
