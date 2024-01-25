using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct Inventory
{
    public String inventoryGameObjectName;
    public int inventoryamount;
    public int inventoryItemNumber;
    
    public Inventory(string gameObjectName, int itemNumber)
    {
        inventoryGameObjectName = gameObjectName;
        inventoryamount = 1; // Initialize to 1
        inventoryItemNumber = itemNumber;
    }

    public void IncreaseAmount(int invAmount)
    {
        inventoryamount = invAmount;
    }

    public int GetAmount()
    {
        return inventoryamount;
    }

    public void DisplayInventoryItem()
    {
        Debug.Log("Name of Object: " + inventoryGameObjectName + "Inventory Item Number: " + inventoryItemNumber
        + "Number of Items of this type" + inventoryamount);
    }
}
