using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemInventory: MonoBehaviour
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
    public List<Items> hotbarItemList = new List<Items>();
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
        onItemChange.Invoke();
    }

    public void RemoveItem(Items _items)
    {
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

    public bool ContainsItems(Items _items, int amount)
    {
        int itemCounter = 0;
        foreach (Items i in inventoryItemList)
        {
            if (i == _items)
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

    public void RemoveItems(Items _items, int amount)
    {
        for (int i = 0; i < amount; i++)
        {
            RemoveItem(_items);
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

}
