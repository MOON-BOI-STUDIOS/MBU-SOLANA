using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Statitem", menuName = "Items/Statitem")]
public class StatItems : Items
{
    public StatItemType itemType;

<<<<<<< HEAD
    public int amount;
=======
    public int points;
>>>>>>> Game_Dev

    public override void Use()
    {
        base.Use();
<<<<<<< HEAD
        DummyItemScript.instance.OnStatItemUse(itemType,amount);
        ItemInventory.instance.RemoveItem(this);
=======
        //AddInventoryItemScript.instance.OnItemUse(this);
        //ItemInventory.instance.RemoveItem(this);
>>>>>>> Game_Dev
    }
    public int GetPoints()
    {
        return points;
    }
}

public enum StatItemType
{
<<<<<<< HEAD
    FishItem
=======
    Lumpsucker,
    Tuna,
    Wonderpus,
    Bonk,
    RoyalGramma,
    Dragon
>>>>>>> Game_Dev
}
