using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Statitem", menuName = "Items/Statitem")]
public class StatItems : Items
{
    public StatItemType itemType;

    public int points;

    public override void Use()
    {
        base.Use();
        //AddInventoryItemScript.instance.OnItemUse(this);
        //ItemInventory.instance.RemoveItem(this);
    }
    public int GetPoints()
    {
        return points;
    }
}

public enum StatItemType
{
    Lumpsucker,
    Tuna,
    Wonderpus,
    Bonk,
    RoyalGramma,
    Dragon
}
