using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Items", menuName = "Items/primary")]
public class Items : ScriptableObject
{
    //This item number should be the index of the item in the gameManeger item List
    public int itemNumber; // Item Number is the Index in the ItemList attached to the InventoryBackground GameObject, its is ued to save items
    // in the DataSaver Script
    public string name = "default";
    public Sprite icon = null;
    public string ItemDescription;
    public int ItemValue;

    public bool IsEquippable;

    public ItemClass classOfItem;

    private int InstamceNumber = 0; // Intance Number is used so that each element in the game instance has a unique number;

    public virtual void Use()
    {
        Debug.Log("Using" + name);
        AddInventoryItemScript.instance.OnItemUse(this);
    }

    public virtual string GetItemDescription()
    {
        return ItemDescription;
    }

    public virtual int GetItemValue()
    {
        return ItemValue;
    }

    public int InstanceNum
    {
        get => InstamceNumber;
        set => InstamceNumber = value;
    }

    public enum ItemClass
    {
        rod,
        bait,
        fish,
        collectable
    }
}
