using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class BuyCoinsScript : MonoBehaviour, ITransferInfo
{
    public RodShopitem[] queriedItems;

    [Header("Wallet")]
    public GameObject walletHolder;
    public GameObject walletBackground;
    public TMP_Text toastMessage;
    public Button walletBackButton;
    public Button walletBGBackButton;

    // 25credz -> buying gold coins 1st bundle
    //350credz -> buing gold coins 2nd bundle,1500credz -> buying gold coins 3rd bundle, 
    //bonkrod -> buying bonk rod, bonkbait -> buying bonk bait
    public void OpenWeb3Transaction(ulong amount,string transferEvent)
    {
        // Setting The Wallet Holder GameObject as true so that the customer can login. Set the wallet background as true
        walletHolder.SetActive(true);
        walletBackground.SetActive(true);

        // Let the customer login. After logging set the amount according to required amount
        PaymentInfo.requiredAmount = (amount * 0.000000148).ToString(); // PaymentInfo is a static class in Scripts/GeneralScript used only to store required amount

        // Once clicked on the button transfer screen will appear with prefilled public key and amount
        //Setting the event so that it the current event triggers and if transaction is successful
        PaymentInfo.queriedEvent = transferEvent;
        //then success function will take over
    }
    public void TransferSuccessful(string quried)
    {
        // Transaction Successful message and wait for 1 second
        toastMessage.text = "Transfer Successful";
        StartCoroutine(TransferSuccessfulEvent());
        //Disable wallet screens
        int currentNumOfCoins = PlayerPrefs.GetInt("Coins");
        switch (quried)
        {
            case "25credz":
                currentNumOfCoins = currentNumOfCoins + 25;
                PlayerPrefs.SetInt("Coins", currentNumOfCoins);
                break;
            case "350credz":
                currentNumOfCoins = currentNumOfCoins + 350;
                PlayerPrefs.SetInt("Coins", currentNumOfCoins);
                break;
            case "1500credz":
                currentNumOfCoins = currentNumOfCoins + 1500;
                PlayerPrefs.SetInt("Coins", currentNumOfCoins);
                break;
            case "bonkrod":
                if (queriedItems[0] != null)
                {
                    queriedItems[0].BonkTransactionSuccessful();
                }
                break;
            case "bonkbait":
                if (queriedItems[1] != null)
                {
                    queriedItems[1].BonkTransactionSuccessful();
                }
                break;
        }
        PlayerPrefs.Save();
    }

    public void TransferUnsuccessful()
    {
        toastMessage.text = "Transfer Unsuccessful";
        //StartCoroutine(TransferSuccessfulEvent());
    }

    IEnumerator TransferSuccessfulEvent()
    {
        yield return new WaitForSeconds(5f);
        toastMessage.text = "";
        //walletBackButton.onClick.Invoke();
        //walletBGBackButton.onClick.Invoke();
    }
}
