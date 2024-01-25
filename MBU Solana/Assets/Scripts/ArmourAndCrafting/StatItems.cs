using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Statitem", menuName = "Items/Statitem")]
public class StatItems : Items
{
    public StatItemType itemType;

    public int amount;

    public override void Use()
    {
        base.Use();
        DummyItemScript.instance.OnStatItemUse(itemType,amount);
        ItemInventory.instance.RemoveItem(this);
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
    FishItem
}
