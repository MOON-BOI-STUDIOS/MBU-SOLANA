using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData 
{
    public List<ItemData> savedData;

    public GameData()
    {
        savedData = new List<ItemData>();
    }

}

[System.Serializable]
public struct ItemData
{
    public int itemListIndex;
    public int depletivebait;

    public ItemData(int index = 0, int bait = 0)
    {
        this.itemListIndex = index;
        this.depletivebait = bait;
    }
}
