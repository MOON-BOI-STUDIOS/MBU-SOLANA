using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(menuName = "CardList/SpecialCard")]
public class SpecialCard : ScriptableObject
{
    public string cardName;

    public Image cardImage;

    public int cost;
    public float Attack;
    public float decreaseDamagePercent;
    public float increaseDamagePercent;
    public float healingPower;
    public float Block;
    public int ID_SpecialAction;
    public CardType cardType;
   

}
