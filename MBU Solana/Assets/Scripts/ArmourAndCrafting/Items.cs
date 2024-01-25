using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Items", menuName = "Items/primary")]
public class Items : ScriptableObject
{
    new public string name = "default";
    public Sprite icon = null;
    public string ItemDescription;

    public virtual void Use()
    {
        Debug.Log("Using" + name);
    }

    public virtual string GetItemDescription()
    {
        return ItemDescription;
    }
}
