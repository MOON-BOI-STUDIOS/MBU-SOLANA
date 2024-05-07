using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(menuName = "CardList/RPS")]
public class RPS : ScriptableObject
{
    public string cardName;
    public Image art;
    [TextArea(0, 100)]
    public string description;
    public int cost;
    public int ID_RPS;
    public CardType cardType;
}
