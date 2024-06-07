using System;
using System.Collections.Generic;
using System.Linq;
using Solana.Unity.Rpc.Core.Http;
using Solana.Unity.Rpc.Models;
using Solana.Unity.Wallet;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.UI;

// ReSharper disable once CheckNamespace

namespace Solana.Unity.SDK.Example
{
    public class TransferScreen : SimpleScreen
    {
        public TextMeshProUGUI ownedAmountTxt;
        public TextMeshProUGUI nftTitleTxt;
        public TextMeshProUGUI errorTxt;
        public TMP_InputField toPublicTxt;
        public TMP_InputField amountTxt;
        public Button transferBtn;
        public RawImage nftImage;
        public Button closeBtn;

        private TokenAccount _transferTokenAccount;
        private Nft.Nft _nft;
        private double _ownedSolAmount;
        
        private const long SolLamports = 1000000000;
        private const long bonkLamports = 100000;
        private List<ITransferInfo> transferInfosImplementedScripts;

        private void Start()
        {
            // Get all the Scripts which implemented transferInfo in that scene
            this.transferInfosImplementedScripts = FindAllTransferInfoImplementedScript();
            //Get Payment information from static fields from the PlaymentInfo Static class
            //Disabling interactibility of the input fields so that it cannot be changed
            //toPublicTxt.text = PaymentInfo.publicKey;
            //toPublicTxt.interactable = false;
            //amountTxt.text = PaymentInfo.requiredAmount.ToString();
            //amountTxt.interactable = false;

            transferBtn.onClick.AddListener(TryTransfer);

            closeBtn.onClick.AddListener(() =>
            {
                manager.ShowScreen(this, "wallet_screen");
            });
        }
        public void OnEnable()
        {
            toPublicTxt.text = PaymentInfo.publicKey;
            toPublicTxt.interactable = false;
            amountTxt.text = PaymentInfo.requiredAmount.ToString();
            amountTxt.interactable = false;

        }
        private void TryTransfer()
        {
            Debug.Log(_transferTokenAccount);
            if (_nft != null)
            {
                TransferNft();
            }
            else if (_transferTokenAccount == null)
            {
                if (CheckInput())
                    TransferSol();
            }
            else
            {
                if (CheckInput())
                    TransferToken();
            }
        }

        private async void TransferSol()
        {
            RequestResult<string> result = await Web3.Instance.WalletBase.Transfer(
                new PublicKey(toPublicTxt.text),
                Convert.ToUInt64(float.Parse(amountTxt.text)*SolLamports));
            HandleResponse(result);
        }

        private async void TransferNft()
        {
            RequestResult<string> result = await Web3.Instance.WalletBase.Transfer(
                new PublicKey(toPublicTxt.text),
                new PublicKey(_nft.metaplexData.data.mint),
                1);
            HandleResponse(result);
        }

        bool CheckInput()
        {
            if (string.IsNullOrEmpty(amountTxt.text))
            {
                errorTxt.text = "Please input transfer amount";
                return false;
            }

            if (string.IsNullOrEmpty(toPublicTxt.text))
            {
                errorTxt.text = "Please enter receiver public key";
                return false;
            }

            if (_transferTokenAccount == null)
            {
                Debug.Log("Owned Amount:" + ownedAmountTxt.text);
                Debug.Log("Amount shown:" + amountTxt.text);
                Debug.Log("Transaction in Sol" + _transferTokenAccount);
                if (float.Parse(amountTxt.text) > _ownedSolAmount)
                {
                    errorTxt.text = "Not enough funds for transaction.";
                    return false;
                }
            }
            else
            {
                Debug.Log("Owned Amount:" + long.Parse(ownedAmountTxt.text));
                Debug.Log("Amount shown" + long.Parse(amountTxt.text));
                Debug.Log("Transaction in a kind of Token");
                if (long.Parse(amountTxt.text) > long.Parse(ownedAmountTxt.text))
                {
                    errorTxt.text = "Not enough funds for transaction for Bonk transaction.";
                    return false;
                }
            }
            errorTxt.text = "";
            return true;
        }

        private async void TransferToken()
        {
            Debug.Log("Execution is in TransferToken");
            RequestResult<string> result = await Web3.Instance.WalletBase.Transfer(
                new PublicKey(toPublicTxt.text),
                new PublicKey(_transferTokenAccount.Account.Data.Parsed.Info.Mint),
                Convert.ToUInt64(float.Parse(amountTxt.text) * bonkLamports));//ulong.Parse((amountTxt.text) * bonkLamports));
            HandleResponse(result);
        }

        private void HandleResponse(RequestResult<string> result)
        {
            errorTxt.text = result.Result == null ? result.Reason : "";
            if (result.Result != null)
            {
                Debug.Log(result.WasSuccessful.ToString());
                Debug.Log("In Handle Response() function");
                manager.ShowScreen(this, "wallet_screen", Tuple.Create("Successful",result.Result));

                //Calling if transaction is successful
                Debug.Log("Transaction is successful");
                foreach (ITransferInfo transferInfo in transferInfosImplementedScripts)
                {
                    transferInfo.TransferSuccessful(PaymentInfo.queriedEvent);
                }
            }
            else
            {
                Debug.Log("Transaction is unsuccessful");
                foreach (ITransferInfo transferInfo in transferInfosImplementedScripts)
                {
                    transferInfo.TransferUnsuccessful();
                }
            }
        }

        public override async void ShowScreen(object data = null)
        {
            base.ShowScreen();

            ResetInputFields();
            await PopulateInfoFields(data);
            gameObject.SetActive(true);
            OnEnable();
        }
        
        public void OnClose()
        {
            var wallet = GameObject.Find("wallet");
            wallet.SetActive(false);
        }

        private async System.Threading.Tasks.Task PopulateInfoFields(object data)
        {
            
            nftImage.gameObject.SetActive(false);
            nftTitleTxt.gameObject.SetActive(false);
            ownedAmountTxt.gameObject.SetActive(false);
            if (data != null && data.GetType() == typeof(Tuple<TokenAccount, string, Texture2D>))
            {
                Debug.Log("data is not null");
                var (tokenAccount, tokenDef, texture) = (Tuple<TokenAccount, string, Texture2D>)data;
                _transferTokenAccount = tokenAccount;
                ownedAmountTxt.text = $"{_transferTokenAccount.Account.Data.Parsed.Info.TokenAmount.Amount}";
                nftTitleTxt.gameObject.SetActive(true);
                nftImage.gameObject.SetActive(true);
                nftTitleTxt.text = $"{tokenDef}";
                nftImage.texture = texture;
                nftImage.color = Color.white;
            }
            else if (data != null && data.GetType() == typeof(Nft.Nft))
            {
                nftTitleTxt.gameObject.SetActive(true);
                nftImage.gameObject.SetActive(true);
                _nft = (Nft.Nft)data;
                nftTitleTxt.text = $"{_nft.metaplexData.data.offchainData?.name}";
                nftImage.texture = _nft.metaplexData?.nftImage?.file;
                nftImage.color = Color.white;
                amountTxt.text = "1";
                amountTxt.interactable = false;
            }
            else
            {
                Debug.Log("Data is null Token is not set");
                _ownedSolAmount = await Web3.Instance.WalletBase.GetBalance();
                ownedAmountTxt.text = $"{_ownedSolAmount}";
            }
        }

        private void ResetInputFields()
        {
            errorTxt.text = "";
            amountTxt.text = "";
            toPublicTxt.text = "";
            amountTxt.interactable = true;
        }

        public override void HideScreen()
        {
            base.HideScreen();
            _transferTokenAccount = null;
            gameObject.SetActive(false);
        }

        private List<ITransferInfo> FindAllTransferInfoImplementedScript()
        {
            IEnumerable<ITransferInfo> transferInfoImplementedObjects = FindObjectsOfType<MonoBehaviour>()
            .OfType<ITransferInfo>();

            return new List<ITransferInfo>(transferInfoImplementedObjects);
        }
    }

}