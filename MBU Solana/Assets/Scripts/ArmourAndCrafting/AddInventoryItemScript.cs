using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;

public class AddInventoryItemScript : MonoBehaviour
{
    
    public List<Items> itemList = new List<Items>();

    public List<Items> CraftingReceipes = new List<Items>();
    
    public Transform canvas;
    public GameObject itemInfoPrefab;
    private GameObject currentItemInfo = null;

    public Transform InventorymainCanvas;
    public Transform HotbarTransform;
    public Transform inventoryTransform;
    public bool IsSelling;

    #region Singleton


    public static AddInventoryItemScript instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    #endregion
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.X))
        {
            Items newItem = itemList[Random.Range(0,itemList.Count)];
            ItemInventory.instance.AddItem(Instantiate(newItem));
        }
    }

    public void AddToInventory(Items newItem)
    {
        if(newItem != null)
        {
            Debug.Log("Reached here");
            ItemInventory.instance.AddItem(Instantiate(newItem));
        }
        /*if(numberToAdd > 0 && numberToAdd < itemList.Count)
        {
            //Items newItem = itemList[numberToAdd];
            ItemInventory.instance.AddItem(Instantiate(newItem));
        }
        else{
            Debug.Log("Added wrong number to add");
        }*/
    }

    public void OnItemUse(Items item)
    {
        //Debug.Log("Consuming: " + _itemType + "Add amount: " + amount);
        // Sell item to the fisherman
        if(IsSelling)
        {
            //Add the amount of gold coins to the player from item.GetItemValue()
            
            // Delete item from inventory
            ItemInventory.instance.RemoveItem(item);
        }

    }
    
    public void DisplayItemInfo(string itemName, string itemDescription,int itemValue,int NumOfItems,Vector2 buttonPos)
    {
        if(currentItemInfo != null)
        {
            Destroy(currentItemInfo.gameObject);
        }

        buttonPos.x -= 400;
        buttonPos.y += 100;

        currentItemInfo = Instantiate(itemInfoPrefab, buttonPos, Quaternion.identity, canvas);
        currentItemInfo.GetComponent<Itemdesc>().Setup(itemName, itemDescription, itemValue, NumOfItems);
    }

    public void DestroyItemInfo()
    {
        if(currentItemInfo != null)
        {
            Destroy(currentItemInfo.gameObject);
        }
    }

    public void InitialAward()
    {
        int[] itemListIndex = {0,0,5,5};
        // 2x Basic rod and 2x plastic worm bait
        for(int i = 0;i < itemListIndex.Length;i++)
        {
            Items awardItem = itemList[itemListIndex[i]];
            AddToInventory(awardItem);
        }
    }

}
