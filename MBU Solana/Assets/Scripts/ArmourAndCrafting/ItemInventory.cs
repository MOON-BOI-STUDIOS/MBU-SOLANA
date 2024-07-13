using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemInventory: MonoBehaviour, IDataPersistanceScript
{
    #region Singleton
    public static ItemInventory instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    #endregion

    public delegate void OnItemChange();
    public OnItemChange onItemChange = delegate {  };
    public List<Items> inventoryItemList = new List<Items>();
    private Dictionary<Items,int> Slotitem = new Dictionary<Items, int>();
    public List<Items> hotbarItemList = new List<Items>();
    public int sameitemNum = 0; // the number of similar items in the inventory
    public HotBarController hotBarController;

    private Queue<CraftingRecipe> craftingQueue = new Queue<CraftingRecipe>();
    private bool isCrafting = false;

    public void SwitchHotInventory(Items item)
    {
        //Inventory to hotbar, CHECK if we have enough space
        foreach(Items i in inventoryItemList)
        {
            if(i == item)
            {
                if(hotbarItemList.Count >= hotBarController.HotBarSlotSize)
                {
                    Debug.Log("No more slots available in hotBar");
                }
                else
                {
                    hotbarItemList.Add(item);
                    inventoryItemList.Remove(item);
                    onItemChange.Invoke();
                }
                return;
            }
        }

        //Hotbar to Inventory
        foreach(Items i in hotbarItemList)
        {
            if(i == item)
            {
                hotbarItemList.Remove(item);
                inventoryItemList.Add(item);
                onItemChange.Invoke();
                return;
            }
        }
    }

    public void AddItem(Items items)
    {
        inventoryItemList.Add(items);
        // Add item to the Dictionary
        AddItemToDict(items);
        //Call On item change to show on screen UI
        onItemChange.Invoke();
    }

    private void AddItemToDict(Items itemtoAdd)
    {
        //check if item is present in dictionary
        if(Slotitem.ContainsKey(itemtoAdd))
        {
            Debug.Log("Added old Item");
            Slotitem.Add(itemtoAdd,Slotitem[itemtoAdd] + 1);
        }
        else
        {
            Debug.Log("Added new item");
            Slotitem.Add(itemtoAdd,1);
        }
    }

    public void RemoveItem(Items _items)
    {
        //Remove items from dictionary
        RemoveItemToDict(_items);
        if(inventoryItemList.Contains(_items))
        {
            inventoryItemList.Remove(_items);
        }
        else if(hotbarItemList.Contains(_items))
        {
            hotbarItemList.Remove(_items);
        }
        onItemChange.Invoke();
    }
    public int NumberOfItems(Items _items) // Getting the number of items in the dictionary
    {
        if(Slotitem.ContainsKey(_items))
        {
            return Slotitem[_items];
        }
        return -1;
    }

    private void RemoveItemToDict(Items itemToRemove)
    {
        if(Slotitem.ContainsKey(itemToRemove))
        {
            Slotitem.Remove(itemToRemove);
        }
    }

    public bool ContainsItems(string itemName, int amount)
    {
        int itemCounter = 0;
        foreach (Items i in inventoryItemList)
        {
            if (i.name == itemName)
            {
                itemCounter++;
            }
        }

        foreach (Items i in hotbarItemList)
        {
            if (i.name == itemName)
            {
                itemCounter++;
            }
        }

        if (itemCounter >= amount)
        {
            return true;
        }

        return false;
    }

    public void RemoveItems(string itemName, int amount)
    {
        for (int i = 0; i < amount; i++)
        {
            RemoveItemType(itemName);
        }
    }

    public void AddCraftingItem(CraftingRecipe newRecipe)
    {
        craftingQueue.Enqueue(newRecipe);
        if (!isCrafting)
        {
            isCrafting = true;
            //Start Crafting
            StartCoroutine(CraftTime());
        }
    }

    private IEnumerator CraftTime()
    {
        //Check if queue is Empty
        if (craftingQueue.Count == 0)
        {
            isCrafting = false;
            yield break;
        }

        CraftingRecipe currentRecipe = craftingQueue.Dequeue();
        
        //Check if the players has enough resources
        if (!currentRecipe.CraftItem())
        {
            craftingQueue.Clear();
            isCrafting = false;
            yield break;
        }

        yield return new WaitForSeconds(currentRecipe.craftingTime * 1.1f);
        
        //Add item to Inventory
        AddItem(currentRecipe.result);
        
        //Check if continue crafting
        if (craftingQueue.Count > 0)
        {
            yield return StartCoroutine(CraftTime());
        }
        else
        {
            isCrafting = false;
        }
    }

    public void RemoveItemType(string itemName)
    {
        foreach (Items i in inventoryItemList)
        {
            if (i.name == itemName)
            {
                inventoryItemList.Remove(i);
                return;
            }
        }

        foreach (Items i in hotbarItemList)
        {
            if (i.name == itemName)
            {
                hotbarItemList.Remove(i);
                return;
            }
        }

    }

    public bool Checkcanfish()
    {
        int rodItem = 0;
        int baitItem = 0;
        foreach(Items i in hotbarItemList)
        {
            if(i.IsEquippable)
            {
                if(string.Equals(i.classOfItem.ToString(),"rod"))
                {
                    rodItem += 1;
                }
                else if(string.Equals(i.classOfItem.ToString(),"bait"))
                {
                    baitItem += 1;
                }
            }
        }
        if(rodItem > 0 && baitItem > 0)
        {
            return true;
        }
        return false;
    }

    public void LoadData(GameData data)
    {

    }

    public void SaveData(ref GameData data)
    {
        Debug.Log("Number of items in ythe inventoryItemList" + inventoryItemList.Count);
        //Check index from the item list in AddInventoryItemList and if it is a rod object then save its index and bait number as -1 
        // if it is a bait object save index and the bait number as well
        for(int i = 0;i < inventoryItemList.Count;i++)
        {
            int idx = inventoryItemList[i].itemNumber;
            int baitValue = -1;
            Debug.Log("Index of the data being saved" + idx);
            if(idx >= 0)
            {
                if(string.Equals(inventoryItemList[i].classOfItem.ToString(),"bait"))
                {
                    BaitItemObjj queryItem = (BaitItemObjj)inventoryItemList[i];
                    baitValue = queryItem.GetbaitValue();
                }
                data.savedData.Add(new ItemData(idx,baitValue));
            }
        }
        // Save hotbar items if any
        for(int i = 0;i < hotbarItemList.Count;i++)
        {
            int idx = hotbarItemList[i].itemNumber;
            int baitValue = -1;
            if(idx >= 0)
            {
                if(string.Equals(hotbarItemList[i].classOfItem.ToString(),"bait"))
                {
                    BaitItemObjj queryItem = (BaitItemObjj)hotbarItemList[i];
                    baitValue = queryItem.GetbaitValue();
                }
                data.savedData.Add(new ItemData(idx,baitValue));
            }
        }
    }
}
