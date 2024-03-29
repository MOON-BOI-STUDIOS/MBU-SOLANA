using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class BuyCoinsScript : MonoBehaviour
{
    private IPaymentHandler _paymentHandler;
    private IToggleUI _toggleUI;
    private int NumofCoins;
    public TextMeshProUGUI transactionFailed;
    private int TransactionToChoose; // 0 -> buying gold coins 1st bundle
    //1 -> buing gold coins 2nd bundle,2 -> buying gold coins 3rd bundle, 
    //3 -> buying bonk rod, 4 -> buying bonk bait
    public RodShopitem[] queriedItems;
    public GameObject walletHolder;
    public GameObject walletBackground;
    public TMP_Text toastMessage;
    public Button walletBackButton;
    public Button walletBGBackButton;

    // Start is called before the first frame update
    void Start()
    {
        //_paymentHandler = GetComponent<IPaymentHandler>();
        //_toggleUI = GetComponent<IToggleUI>();
    }
    public void OpenWeb3Transaction(int transactionNumber, ulong amount,
    string amountText, string transferEvent)
    {
        /*TransactionToChoose = transactionNumber;
        _toggleUI.ToggleSlotsMachine(false);
        _toggleUI.ToggleWalletUI(true);
        _paymentHandler.TryAndProcessTransaction(amount,amountText,transactionText);*/

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
    public void ResetTransaction()
    {
        _toggleUI.ToggleWalletUI(false);
        _toggleUI.ToggleSlotsMachine(true);
        // Transaction failed
        transactionFailed.gameObject.SetActive(true);
        transactionFailed.text = "Transaction Failed";
        StartCoroutine(DisableText());
    }
    public void SuccessfulTransactionReward()
    {
        Debug.Log("Transaction Successful");
        transactionFailed.gameObject.SetActive(true);
        transactionFailed.text = "Transaction Successful";
        StartCoroutine(DisableText());
        _toggleUI.ToggleWalletUI(false);
        _toggleUI.ToggleSlotsMachine(true);
        int currentNumOfCoins = PlayerPrefs.GetInt("Coins"); 
        switch(TransactionToChoose)
        {
            case 0:
                currentNumOfCoins = currentNumOfCoins + 25;
                PlayerPrefs.SetInt("Coins",currentNumOfCoins);
                break;
            case 1: 
                currentNumOfCoins = currentNumOfCoins + 350;
                PlayerPrefs.SetInt("Coins",currentNumOfCoins);
                break;
            case 2:
                currentNumOfCoins = currentNumOfCoins + 1500;
                PlayerPrefs.SetInt("Coins",currentNumOfCoins);
                break;
            case 3:
                if(queriedItems[0] != null)
                {
                    queriedItems[0].BonkTransactionSuccessful();
                }
                break;
            case 4:
                if(queriedItems[1] != null)
                {
                    queriedItems[1].BonkTransactionSuccessful();
                }
                break;
        }
        PlayerPrefs.Save();
    }
    public IEnumerator DisableText()
    {
        yield return new WaitForSeconds(3.0f);
        transactionFailed.gameObject.SetActive(false);
    }
}
