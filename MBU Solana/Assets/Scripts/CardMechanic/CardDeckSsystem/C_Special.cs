using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class C_Special : MonoBehaviour
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public Image art;
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
        title.text = co.cardName;
        description.text = co.description;
        art = co.art;
        cost = co.cost;
    }
    public float getDamage()
    {
        return cardObject.damage;
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
