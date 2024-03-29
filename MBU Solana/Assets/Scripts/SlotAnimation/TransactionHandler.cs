using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using Solana.Unity.Rpc.Types;
using Solana.Unity.SDK;
using Solana.Unity.SDK.Example;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using UnityEngine.SceneManagement;

public class TransactionHandler : MonoBehaviour,IPaymentHandler
{
    [Header("Wallet")] 
    public GameObject walletHolder;
    public TMP_Text _buttonText;
    public TMP_Text _TransferDetails;
    public Button _SendButton;
    public GameObject wallet;
    public GameObject Background;
    public PayToPlay _paytoPlay;
    string curSceneName;
    
    private ulong requiredAmount = 2500000;

    //When using this interface for another script change the type of script underneath
    public SlotManager _SlotManager;

    public BuyCoinsScript bcScript;

    //public PlayerManager _playerManager;

    void Start()
    {
        curSceneName = SceneManager.GetActiveScene().name;
    }
    public void TryAndProcessTransaction(ulong amount, string amountText, string transactionText)
    {
        Debug.Log("In Try and Process Transaction");
        requiredAmount = amount;
        _buttonText.text = amountText;
        _TransferDetails.text = transactionText;
        
        _TransferDetails.gameObject.SetActive(true);
        //wallet.SetActive(true);
        Background.SetActive(true);
        _SendButton.gameObject.SetActive(true);

        // Remove all existing listeners from the _SendButton
        _SendButton.onClick.RemoveAllListeners();

        // Add a new listener to the _SendButton to try to process the transaction for repairing the shooting game
        _SendButton.onClick.AddListener(() =>
            _paytoPlay.TryPayToPlay(requiredAmount, TransactionSuccessful, HandleTransactionFailure));
    }

    private void TransactionSuccessful()
    {
        Debug.Log("Transaction Successful in Transaction Handler");
        if(_SlotManager != null)
        {
            _SlotManager.limit += 1;
            //_SlotManager.Spin();
            _SlotManager.ResetSlot();
        }
        else if(bcScript != null)
        {
            //bcScript.SuccessfulTransactionReward();
        }
    }

    private void HandleTransactionFailure(string reason)
    {
        if(_SlotManager != null)
        {
            _SlotManager.ResetSlot();
        }
        else if(bcScript != null)
        {
            //bcScript.ResetTransaction();
        }
        Debug.Log($"Failed to transfer tokens. Reason: {reason}");
    }
}