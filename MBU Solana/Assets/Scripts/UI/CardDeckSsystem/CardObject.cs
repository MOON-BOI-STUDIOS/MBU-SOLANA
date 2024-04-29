using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(menuName =  "Card")]
public class CardObject : ScriptableObject
{
    public string cardName;
    public Sprite art;
    public string description;
    public int cost;
    public int damage;
}
