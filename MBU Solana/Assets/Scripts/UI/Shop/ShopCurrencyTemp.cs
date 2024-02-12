using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopCurrencyTemp : MonoBehaviour
{
    public int TempCurrency;



  

    private void Start()
    {
        TempCurrency = 50;
        Debug.Log(TempCurrency);
    } 

    public void LooseCurrncy(int amount)
    {
        TempCurrency -= amount;
        Debug.Log("Currency is:" + TempCurrency);
        // Write code to Add item to the inventory here
    }
}
