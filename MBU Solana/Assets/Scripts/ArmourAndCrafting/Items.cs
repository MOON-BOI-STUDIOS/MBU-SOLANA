using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Items", menuName = "Items/primary")]
public class Items : ScriptableObject
{
    public string name = "default";
    public Sprite icon = null;
    public string ItemDescription;
    public int ItemValue;

    public bool IsEquippable;

    public ItemClass classOfItem;

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

    public enum ItemClass
    {
        rod,
        bait,
        fish
    }
}
