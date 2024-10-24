using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;

public class AddInventoryItemScript : MonoBehaviour, IDataPersistanceScript
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
    private int points;
    [SerializeField] Animator fountainAnimator;
    [SerializeField] AudioSource playerAs;
    [SerializeField] AudioClip itemGiftSound;
    [SerializeField] GameObject radarGuidePanel;

    #region Singleton


    public static AddInventoryItemScript instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    #endregion

    private void Start()
    {
        canvas = GameObject.Find("UI").transform;
    }
    private void Update()
    {

#if UNITY_EDITOR
        if (Input.GetKeyDown(KeyCode.X))
        {
            Items newItem = itemList[Random.Range(0, 15)];
            ItemInventory.instance.AddItem(Instantiate(newItem));
        }
#endif
    }

    public void GiveFountainItem()
    {
        if(!HasItemWithNumber(16) && PlayerPrefs.GetInt("Coins") >= 50)
        {
            ItemInventory.instance.AddItem(Instantiate(itemList[16]));
            radarGuidePanel.SetActive(true);
            PlayerPrefs.SetInt("HasRadar", 1);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 50);
            PlayerPrefs.Save();
            fountainAnimator.SetTrigger("Interact");
            playerAs.PlayOneShot(itemGiftSound);
        }

        else if(HasItemWithNumber(16) && PlayerPrefs.GetInt("Coins") >= 50)
        {
            ItemInventory.instance.AddItem(Instantiate(itemList[Random.Range(0, 15)]));
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 50);
            PlayerPrefs.Save();
            fountainAnimator.SetTrigger("Interact");
            playerAs.PlayOneShot(itemGiftSound);
        }
        else if(PlayerPrefs.GetInt("Coins") < 50)
        {
            Debug.Log("Not enough coins to make a wish");
        }
    }

    public bool HasItemWithNumber(int itemNumber)
{
    // Iterate through the inventory to see if any item has the specified itemNumber.
    foreach (Items item in ItemInventory.instance.inventoryItemList)
    {
        if (item != null && item.itemNumber == itemNumber)
        {
            Debug.LogWarning("ITEM FOUND");
            return true; // Return true if an item with the given itemNumber is found.
        }
    }
    Debug.LogWarning("ITEM NOT FOUND");
    return false; // Return false if no such item is found.
}


    public void AddToInventory(Items newItem)
    {
        if(newItem != null)
        {
            points = PlayerPrefs.GetInt("Points");
            Debug.Log("Reached here");
            // Add PlayerPrefs for points if it is a fish
            if (string.Equals(newItem.classOfItem.ToString(), "fish"))
            {
                StatItems currentItem = (StatItems)newItem;
                int currentPoint = currentItem.GetPoints() + points;
                PlayerPrefs.SetInt("Points", currentPoint);
                PlayerPrefs.Save();
            }
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
        int amount = 0;
        //Debug.Log("Consuming: " + _itemType + "Add amount: " + amount);
        // Sell item to the fisherman
        if(ButtonScript.instance.GetSellingItems() && !item.IsEquippable)
        {
            //Add the amount of gold coins to the player from item.GetItemValue()
            int currentNumOfCoins = PlayerPrefs.GetInt("Coins");
            Debug.Log("Currency is:" + currentNumOfCoins);
            amount = item.GetItemValue();
            currentNumOfCoins = currentNumOfCoins + amount;
            PlayerPrefs.SetInt("Coins",currentNumOfCoins);
            PlayerPrefs.Save();
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
        Debug.Log("Show"); 
        canvas = GameObject.Find("UI").transform;
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
        int[] itemListIndex = {0,5,5};
        // 1x Basic rod and 2x plastic worm bait
        for(int i = 0;i < itemListIndex.Length;i++)
        {
            if(itemList.Count > itemListIndex[i])
            {
                Items awardItem = itemList[itemListIndex[i]];
                AddToInventory(awardItem);
            }
        }
    }

    public void LoadData(GameData data)
    {
        Debug.Log("Number of items in saved game data" + data.savedData.Count);
        for(int i = 0;i < data.savedData.Count;i++)
        {
            if(itemList.Count > data.savedData[i].itemListIndex)
            {
                Items item = itemList[data.savedData[i].itemListIndex];
                if(string.Equals(item.classOfItem.ToString(),"bait"))
                {
                    BaitItemObjj queryitem = (BaitItemObjj)item;
                    queryitem.SetbaitValue(data.savedData[i].depletivebait);
                    AddToInventory(queryitem);
                }
                else{
                    AddToInventory(item);
                }
            }
        }
    }

    public void SaveData(ref GameData data)
    {

    }

}
