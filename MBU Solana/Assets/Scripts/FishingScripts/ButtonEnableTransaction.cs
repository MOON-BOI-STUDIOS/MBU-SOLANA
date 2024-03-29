using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonEnableTransaction : MonoBehaviour
{
    public BuyCoinsScript buyCoins;
    public ulong amount;
    public string transactionText;

    public void enableWebTransaction()
    {
        buyCoins.OpenWeb3Transaction(amount,transactionText);
    }
}
