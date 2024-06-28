using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(menuName =  "CardList/BaseAction")]
public class CardObject : ScriptableObject
{
    public string cardName;
    public Image art;
    public int damage;
    public int ID_BasicAction;
    public CardType cardType;
   
}
 