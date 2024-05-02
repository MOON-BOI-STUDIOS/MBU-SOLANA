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
    public CardType cardType;
    public int Rarity;
}
