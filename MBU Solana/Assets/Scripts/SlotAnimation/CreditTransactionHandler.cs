using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using Solana.Unity.Rpc.Types;
using Solana.Unity.SDK;
using Solana.Unity.SDK.Example;
using Solana.Unity.Wallet;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class CreditTransactionHandler: MonoBehaviour, ICreditBalance
{
    [Header("Wallet")]
    //public GameObject WalletReceiveScreen;
    public ReceiveScreen WalletReceiveScript;
    public GameObject Background;
    public GameObject walletHolder;

    public void TryCreditBalance()
    {
        if (!walletHolder.activeSelf)
        {
            walletHolder.SetActive(true);
            Background.SetActive(true);
        }
        else
        {
            WalletReceiveScript.ShowScreen();
            //GetToken();
            //WalletReceiveScript.
            //WalletTransferScript.amountTxt.text = "50000";
            //WalletTransferScript.amountTxt.interactable = false;
            //WalletTransferScript.transferBtn.onClick.Invoke();
            Debug.Log("Press the Transfer now button");
        }
    }

    private async void GetToken()
    {
        var tokenAccounts = await Web3.Wallet.GetTokenAccounts(Commitment.Confirmed);
        var bonkTokenAccount = tokenAccounts.FirstOrDefault(t => t.PublicKey != String.Empty  );
        if (bonkTokenAccount != null)
        {
            Debug.Log("No public Key");
            return;
        }
        Debug.Log("No public Key");
    }
}
