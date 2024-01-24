using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;

public class DummyItemScript : MonoBehaviour
{
    public List<Items> itemList = new List<Items>();

    public List<Items> CraftingReceipes = new List<Items>();
    
    public Transform canvas;
    public GameObject itemInfoPrefab;
    private GameObject currentItemInfo = null;

    public float movex;
    public float movey;

    #region Singleton

    public static DummyItemScript instance;
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

    public void OnStatItemUse(StatItemType _itemType, int amount)
    {
        Debug.Log("Consuming: " + _itemType + "Add amount: " + amount);
    }
    
    public void DisplayItemInfo(string itemName, string itemDescription, Vector2 buttonPos)
    {
        if(currentItemInfo != null)
        {
            Destroy(currentItemInfo.gameObject);
        }

        buttonPos.x -= 400;
        buttonPos.y += 100;

        currentItemInfo = Instantiate(itemInfoPrefab, buttonPos, Quaternion.identity, canvas);
        currentItemInfo.GetComponent<Itemdesc>().Setup(itemName, itemDescription);
    }

    public void DestroyItemInfo()
    {
        if(currentItemInfo != null)
        {
            Destroy(currentItemInfo.gameObject);
        }
    }

}
