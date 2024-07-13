using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Phase1Turns : MonoBehaviour, ITurnOptionsMethods
{

    public int OnPhase1Options(MultiPlayerManager Selector, MultiPlayerManager OtherPlayer) // 0 -> Host player/ 1st player, 1-> client Player/ Enemy, 2-> tie
    {
        if (Selector != null && OtherPlayer != null)
        {
            Debug.Log("Calculating Round Option fro phase 1");
            //Tie Option both the player and enemy selected same Option
            if (Selector.Phase1Options == OtherPlayer.Phase1Options)
            {
                return 2;
            }
            else if (Selector.Phase1Options == TurnOptions.Phase1Turns.Rock &&
                OtherPlayer.Phase1Options == TurnOptions.Phase1Turns.Scissor)
            {
                return 0;
            }
            else if (Selector.Phase1Options == TurnOptions.Phase1Turns.Scissor &&
                OtherPlayer.Phase1Options == TurnOptions.Phase1Turns.Paper)
            {
                return 0;
            }
            else if (Selector.Phase1Options == TurnOptions.Phase1Turns.Paper &&
                OtherPlayer.Phase1Options == TurnOptions.Phase1Turns.Rock)
            {
                return 0;
            }
        }

        return 1;
    }
}
