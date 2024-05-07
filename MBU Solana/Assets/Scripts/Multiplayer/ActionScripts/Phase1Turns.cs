using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Phase1Turns : MonoBehaviour, ITurnOptionsMethods
{

    public RoundScript roundScript;

    public int OnPhase1Options(GameObject Selector, GameObject OtherPlayer) // 0 -> Host player/ 1st player, 1-> client Player/ Enemy, 2-> tie
    {
        //Tie Option both the player and enemy selected same Option
        if (Selector.GetComponent<PlayerManager>().Phase1Options == OtherPlayer.GetComponent<PlayerManager>().Phase1Options)
        {
            return 2;
        }
        else if (Selector.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Rock &&
            OtherPlayer.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Scissor)
        {
            return 0;
        }
        else if (Selector.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Scissor &&
            OtherPlayer.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Paper)
        {
            return 0;
        }
        else if (Selector.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Paper &&
            OtherPlayer.GetComponent<PlayerManager>().Phase1Options == TurnOptions.Phase1Turns.Rock)
        {
            return 0;
        }

        return 1;
    }
}
