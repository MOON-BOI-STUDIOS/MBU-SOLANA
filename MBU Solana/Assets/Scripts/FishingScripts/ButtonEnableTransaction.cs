using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonEnableTransaction : MonoBehaviour
{
    public BuyCoinsScript buyCoins;
    public int transactionNumber;
    public ulong amount;
    public string amountText;
    public string transactionText;

    public void enableWebTransaction()
    {
        buyCoins.OpenWeb3Transaction(transactionNumber,amount,amountText,transactionText);
    }
}
