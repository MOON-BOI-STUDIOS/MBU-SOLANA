using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCScript : MonoBehaviour
{
    public int ChoiceForPhase1()
    {
        int totalChoices = (int)TurnOptions.Phase1Turns.DefaultMaxPhase1;
        int randchoice = Random.Range(0, totalChoices - 1);
        return randchoice;
    }
    public int ChoiceForPhase2()
    {
        int totalChoices = (int)TurnOptions.PhaseAttackTurns.DefaultMaxPhase2;
        int randchoice = Random.Range(0, totalChoices - 1);
        return randchoice;
    }
    public int ChoiceForPhase3()
    {
        int totalChoices = (int)TurnOptions.PhaseDefenceTurns.DefaultMaxPhase3;
        int randchoice = Random.Range(0, totalChoices - 1);
        return randchoice;
    }
}
