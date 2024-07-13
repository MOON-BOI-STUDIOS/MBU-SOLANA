using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CardViz : MonoBehaviour
{

    public Image art;
   


    public CardObject cardObject;


    private void Start()
    {
        LoadCard(cardObject);
    }
    public void LoadCard(CardObject co) 
    {
        cardObject = co;
    
       co.art = art;
    }

    public int getDamage()
    {
        return cardObject.damage;
    }

    public string getCardName()
    {
        return cardObject.cardName;
    }

}
