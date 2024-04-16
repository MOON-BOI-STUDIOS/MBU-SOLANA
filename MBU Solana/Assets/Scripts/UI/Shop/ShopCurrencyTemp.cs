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
        int currentNumOfCoins = PlayerPrefs.GetInt("Coins");
        //TempCurrency -= amount;
        if(currentNumOfCoins > amount)
        {
            Debug.Log("Currency is:" + currentNumOfCoins);
            currentNumOfCoins = currentNumOfCoins - amount;
            PlayerPrefs.SetInt("Coins",currentNumOfCoins);
            PlayerPrefs.Save();
        }
        // Write code to Add item to the inventory here
    }
}
