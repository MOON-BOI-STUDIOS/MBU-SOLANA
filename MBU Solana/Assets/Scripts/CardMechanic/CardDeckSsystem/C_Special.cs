using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class C_Special : MonoBehaviour
{

    public Image cardart;


    public int cost;

    public static C_Special Instance;

    public SpecialCard cardObject;


    public void Awake()
    {
        if (C_Special.Instance == null)
        {
            C_Special.Instance = this;
        }
    }

    private void Start()
    {
        LoadCard(cardObject);
    }
    public void LoadCard(SpecialCard co) 
    {
        cardObject = co;
        cost = co.cost;
        co.cardImage = cardart;
    }
    public float getDamage()
    {
        return cardObject.Attack;
    }
    public float getDecreaseDamagePercent()
    {
        return cardObject.decreaseDamagePercent;
    }
    public float getIncreaseDamagePercent()
    {
        return cardObject.increaseDamagePercent;
    }
    public float getHealingPower()
    {
        return cardObject.healingPower;
    }

}
