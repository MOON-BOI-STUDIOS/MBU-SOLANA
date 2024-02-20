using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = " Roditem", menuName = "Items/Roditem")]
public class RodItemObj : Items
{
    [Range(0, 100)] public float luck;
    [Range(0, 100)] public float Minrarity;
    [Range(0, 100)] public float Maxrarity;
    [Range(0,10)] public int MinTaps;
    [Range(0,10)] public int MaxTaps;
    public bool isPurchased;

    public override void Use()
    {
        base.Use();
        //AddInventoryItemScript.instance.OnItemUse(this);
        //ItemInventory.instance.RemoveItem(this);
    }
}
