using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaperActions : MonoBehaviour
{
    public RoundScript roundScript;

    void OnHealPortionHealth()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.HealPortionHealth);
    }

    void OnHealMaxHealth()
    {
        roundScript.GetPlayerScript().SetSelectedOptions(TurnOptions.Turns.HealMaxHealth);
    }
}
