using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct SpecialCardData
{
    private float attack;
    private float decreaseDamagePercent;
    private float increaseDamagePercent;
    private float healingPower;

    public SpecialCardData(float _attack,float _damagePercent, float _increasedamagepercent, float _healingPower)
    {
        attack = _attack;
        decreaseDamagePercent = _damagePercent;
        increaseDamagePercent = _increasedamagepercent;
        healingPower = _healingPower;
    }
}
