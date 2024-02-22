using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = " baititem", menuName = "Items/Baititem")]
public class BaitItemObjj : Items
{
    [Range(0, 100)] public float luck;
    [Range(0, 100)] public float bait;
    public bool isPurchased;

    public override void Use()
    {
        base.Use();
        //AddInventoryItemScript.instance.OnItemUse(this);
        //ItemInventory.instance.RemoveItem(this);
    }
    public virtual int GetbaitValue()
    {
        return (int)bait;
    }

    public virtual void SetbaitValue(int value)
    {
        bait = (float)value;
    }

}
