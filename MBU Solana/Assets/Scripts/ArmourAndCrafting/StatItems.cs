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

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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
