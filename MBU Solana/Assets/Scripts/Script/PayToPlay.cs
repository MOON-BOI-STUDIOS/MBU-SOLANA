using Solana.Unity.Rpc.Core.Http;
using Solana.Unity.Rpc.Models;
using Solana.Unity.Wallet;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Solana.Unity.Rpc.Types;
using System.Linq;
using System;


// ReSharper disable once CheckNamespace

namespace Solana.Unity.SDK.Example
{
    public class PayToPlay : MonoBehaviour
    {
        public Button payToPlayBtn;
        public GameObject MessageBox;
        public TMP_Text _TextMessage;
        private string[] bonkMintAddress = {"DezXAZ8z7PnrnRJjz3wXBoRgixCa6xjnB7YaB1pPB263",
        "EPjFWdd5AufqSSqeM2qN1xzybapC8G4wEGGkZwyTDt1v",
        "So11111111111111111111111111111111111111112"}; // BONK, sol value, USDC value

        private string MintAddress = "DezXAZ8z7PnrnRJjz3wXBoRgixCa6xjnB7YaB1pPB263";
        private string destinationAddress = "B2Vh4JS8Q5eQawJZUq7JbmNdnyDRvBmDsFHas7havGxu";
        private ulong requiredAmount = 20000;
        // Check decimal limitations of BONK, SOL, USDC

        private void Start()
        {
           // payToPlayBtn.onClick.AddListener(TryPayToPlay);
        }

        public void SelectMintAddress(int val)
        {
            if(val == 0)
            {
                MintAddress = bonkMintAddress[0];
            }
            else if(val == 1)
            {
                MintAddress = bonkMintAddress[1];
            }
            else{
                MintAddress = bonkMintAddress[2];
            }
        }

        public string getMintAddress()
        {
            return MintAddress;
        }

        public async void TryPayToPlay(ulong requiredAmount, Action onSuccess, Action<string> onFailure, string actionType = "")
        {
            Debug.Log(requiredAmount);
            // Get the user's BONK token account
            var tokenAccounts = await Web3.Wallet.GetTokenAccounts(Commitment.Confirmed);
            Debug.Log("Got Token Account in Trypaytoplay");
            Debug.Log("The mint address is: " + MintAddress);
            if (tokenAccounts == null)
            {
                Debug.Log("The token account is null");
            }
            // USDC or BonkAddress , Sol  Do a dropdown// The error is in the line 62
            var bonkTokenAccount = tokenAccounts.FirstOrDefault(t => t.Account.Data.Parsed.Info.Mint == MintAddress);
            Debug.Log("Got bonkTokenAccount in Trypaytoplay");
            if (bonkTokenAccount == null)
            {
                MessageBox.SetActive(true);
                _TextMessage.text = "You do not own any BONK tokens.";
                Debug.Log("You do not own any BONK tokens.");
                onFailure?.Invoke("You do not own any BONK tokens.");
                return;
            }

            // Check if the user has enough BONK tokens
            var userBonkAmount = bonkTokenAccount.Account.Data.Parsed.Info.TokenAmount.AmountUlong;
            Debug.Log("Got UserBonkAmount in Trypaytoplay");
            if (userBonkAmount < requiredAmount)
            {
                MessageBox.SetActive(true);
                _TextMessage.text = $"You do not have enough BONK tokens. You have {userBonkAmount}, but need {requiredAmount} to play.";
                Debug.Log($"You do not have enough BONK tokens. You have {userBonkAmount}, but need {requiredAmount} to play.");
                onFailure?.Invoke($"You do not have enough BONK tokens. You have {userBonkAmount}, but need {requiredAmount} to play.");

                return;
            }

            Debug.Log("Request to transfer in Trypaytoplay");
            // Transfer the BONK tokens
            RequestResult<string> result = await Web3.Instance.WalletBase.Transfer(
                new PublicKey(destinationAddress),
                new PublicKey(MintAddress),
                requiredAmount);
            if (result.Result != null)
            {
                MessageBox.SetActive(true);
                _TextMessage.text = "Successfully transferred BONK tokens. You can now play the game.";
                if (actionType == "donated")
                {
                    _TextMessage.text = "Thank you for your contribution";
                }

                Debug.Log("Successfully transferred BONK tokens. You can now play the game.");
                onSuccess?.Invoke();
            }
            else
            {
                MessageBox.SetActive(true);
                _TextMessage.text = $"Failed to transfer BONK tokens. Reason: {result.Reason}";
                Debug.Log($"Failed to transfer BONK tokens. Reason: {result.Reason}");
                onFailure?.Invoke(result.Reason);
            }
        }

    }
}