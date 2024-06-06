using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(menuName = "CardList/SpecialCard")]
public class SpecialCard : ScriptableObject
{
    public string cardName;
    public Image art;
    [TextArea(0, 100)]
    public string description;
    public int cost;
    public int Rarity;
    public float damage;
    public float decreaseDamagePercent;
    public float increaseDamagePercent;
    public float healingPower;
    public int ID_SpecialAction;
    public CardType cardType;
   

}
