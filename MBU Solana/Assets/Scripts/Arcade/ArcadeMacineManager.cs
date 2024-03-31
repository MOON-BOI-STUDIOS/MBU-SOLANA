using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;
using System;
using TMPro;
using DG.Tweening;
using Solana.Unity.SDK.Example;
using System.Linq;
using System.Threading;
using System.Collections;

public enum ArcadeType
{
    Racing, Shooting, Fishing
}

public class ArcadeMacineManager : MonoBehaviour, ITransferInfo
{
    public static ArcadeMacineManager Inst;
    [Header("arcadeCollisionDetection")]
    [SerializeField] arcadeCollisionDetection[] ACDlist;
    [Header("Buttons")]
    [SerializeField] Button button_shooting;
    [SerializeField] Button button_fishing;
    [SerializeField] Button button_racing;
    [SerializeField] Button button_donate;
    [Header("UI")]
    [SerializeField] GameObject RepareUI;

    [Header("Wallet")]
    public TMP_Text toastMessage;
    public Button walletBackButton;
    public Button walletBGBackButton;
    public GameObject walletHolder;
    public GameObject walletBackground;


    public static Animator CurrentAnimator;
    public static arcadeCollisionDetection currentACD;
    public static bool isUIopen = false;

    [Space] public ulong requiredAmount = 2500000; // Define the required amount for the racing game

    [Header("GameUI")]
    [SerializeField] GameObject RaceGameUI;
    [SerializeField] GameObject FishingGameUI;
    [SerializeField] GameObject BattleGameUI;
    [SerializeField] GameObject ParentGameUI;
    void Awake()
    {
        PlayerPrefs.SetInt("LastLocation", 3);
        Inst = this;
        // Check if racing is active and deactivate the button if true
        if (PlayerPrefs.GetInt("isRaceActive", 0) == 1)
        {
            button_racing.gameObject.SetActive(false);
        }
        // Check if shooting is active and deactivate the button if true
        if (PlayerPrefs.GetInt("isShootingActive", 0) == 1)
        {
            button_shooting.gameObject.SetActive(false);
        }
        // Check if fishing is active and deactivate the button if true
        if (PlayerPrefs.GetInt("isFishingActive", 0) == 1)
        {
            button_fishing.gameObject.SetActive(false);
        }
        CheckButtonsState();
        for (int i = 0; i < ACDlist.Length; i++)
        {
            int arcadeTypeValue = PlayerPrefs.GetInt("arcade" + i.ToString(), -1);
            // Check the type of arcade and call the respective load function
            switch (arcadeTypeValue)
            {
                case 0: // Racing
                    LoadRacing(ACDlist[i]);
                    break;
                case 1: // Shooting
                    LoadShooting(ACDlist[i]);
                    break;
                case 2: // Fishing
                    LoadFishing(ACDlist[i]);
                    break;
            }
        }
    }

    public void openRepairUI()
    {
        isUIopen = true;
        RepareUI.SetActive(true);
        RepareUI.transform.DOScale(1, 0.3f).SetEase(Ease.InCirc);
    }

    public void CloseRepairUI()
    {
        isUIopen = false;
        RepareUI.transform.DOScale(0, 0.3f).SetEase(Ease.InCirc);
    }

    public void TryAndProcessTransactionRacing()
    {
        if (currentACD == null)
            return;
        // Setting The Wallet Holder GameObject as true so that the customer can login. Set the wallet background as true
        walletHolder.SetActive(true);
        walletBackground.SetActive(true);
        // Let the customer login. After logging set the public key and amount according to required amount
        // "50K to Repair"
        PaymentInfo.requiredAmount = (requiredAmount * 0.000000148).ToString(); // PaymentInfo is a static class in Scripts/GeneralScript used only to store required amount
        // Once clicked on the button transfer screen will appear with prefilled public key and amount
        //Setting the event as racing so that it the current event triggers if transaction is successful
        PaymentInfo.queriedEvent = "racing";
        // If trasfer is successful then success function will take over

    }


    public void TryAndProcessTransactionFishing()
    {
        /*if (currentACD == null)
            return;
        
        Debug.Log("In Try and Process Transaction to repair Fishing");
        //Wallet.SetActive(true);
        _buttonText.text = "50 Thousand BONKS";
        _TransferDetails.gameObject.SetActive(true);
        _TransferDetails.text = "Upgrade Fishing Game";
        wallet.SetActive(true);
        Background.SetActive(true);
        _SendButton.gameObject.SetActive(true);

        // Remove all existing listeners from the _SendButton
        _SendButton.onClick.RemoveAllListeners();

        // Add a new listener to the _SendButton to try to process the transaction for repairing the fishing game
        _SendButton.onClick.AddListener(() => _paytoPlay.TryPayToPlay(requiredAmount, RepairFishing, HandleTransactionFailure));*/
    }

    public void TryAndProcessTransactionShooting()
    {
        if (currentACD == null)
            return;

        // Setting The Wallet Holder GameObject as true so that the customer can login. Set the wallet background as true
        walletHolder.SetActive(true);
        walletBackground.SetActive(true);
        // Let the customer login. After logging set the public key and amount according to required amount
        // "50K to Repair"
        PaymentInfo.requiredAmount = (requiredAmount * 0.000000148).ToString(); // PaymentInfo is a static class in Scripts/GeneralScript used only to store required amount
        // Once clicked on the button transfer screen will appear with prefilled public key and amount
        //Setting the event as racing so that it the current event triggers if transaction is successful
        PaymentInfo.queriedEvent = "bonkbattle";
        // If trasfer is successful then success function will take over

    }

    public void RepairRacing()
    {
        //Debug.Log("Repair Racing 1 ");
        if (currentACD == null)
            return;
        
        Debug.Log("Repaired Racing ");
        CloseRepairUI();
        int index = Array.IndexOf(ACDlist, currentACD);
        PlayerPrefs.SetInt("arcade" + index, 0);
        PlayerPrefs.SetInt("isRaceActive", 1);
        button_racing.gameObject.SetActive(false);
        CheckButtonsState();
        LoadRacing(currentACD);
        //Debug.Log("Repair Racing 3 ");
    }

    void LoadRacing(arcadeCollisionDetection ACD)
    {
        ACD._am.enabled = true;
        ACD._am.SetTrigger("isRacing");
        ACD._AT = ArcadeType.Racing;
        ACD.isbroken = false;
    }

    public void RepairShooting()
    {
        if (currentACD == null)
            return;

        Debug.Log("Repaired Shooting");

        CloseRepairUI();
        int index = Array.IndexOf(ACDlist, currentACD);
        PlayerPrefs.SetInt("arcade" + index, 1);
        PlayerPrefs.SetInt("isShootingActive", 1);
        button_shooting.gameObject.SetActive(false);
        CheckButtonsState();
        LoadShooting(currentACD);
    }

    void LoadShooting(arcadeCollisionDetection ACD)
    {
        ACD._am.enabled = true;
        ACD._am.SetTrigger("isBattle");
        ACD._AT = ArcadeType.Shooting;
        ACD.isbroken = false;
    }

    public void RepairFishing()
    {
        if (currentACD == null)
            return;

        Debug.Log("Repaired Fishing");

        CloseRepairUI();
        int index = Array.IndexOf(ACDlist, currentACD);
        PlayerPrefs.SetInt("arcade" + index.ToString(), 2);
        PlayerPrefs.SetInt("isFishingActive", 1);
        button_fishing.gameObject.SetActive(false);
        CheckButtonsState();
        LoadFishing(currentACD);
    }

    void LoadFishing(arcadeCollisionDetection ACD)
    {
        ACD._am.enabled = true;
        ACD._am.SetTrigger("isFishing");
        ACD._AT = ArcadeType.Fishing;
        ACD.isbroken = false;
    }

    public void CheckButtonsState()
    {
        if (!button_shooting.gameObject.activeSelf &&
            !button_fishing.gameObject.activeSelf &&
            !button_racing.gameObject.activeSelf)
        {
            button_donate.gameObject.SetActive(true);
        }
        else
        {
            button_donate.gameObject.SetActive(false);
        }
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKeyDown(KeyCode.R))
        {
            PlayerPrefs.DeleteAll();
            Debug.Log("PlayerPrefs have been reset!");
        }
    }

    public void openPlayButton(ArcadeType at)
    {
        // Deactivate all the UI elements first
        RaceGameUI.SetActive(false);
        FishingGameUI.SetActive(false);
        BattleGameUI.SetActive(false);

        RaceGameUI.transform.localScale=new Vector3(0, 0, 0);
        FishingGameUI.transform.localScale = new Vector3(0, 0, 0);
        BattleGameUI.transform.localScale = new Vector3(0, 0, 0);
        ParentGameUI.transform.localScale = new Vector3(1, 1, 1);
        ParentGameUI.SetActive(true);
        // Activate the selected UI element based on the ArcadeType
        switch (at)
        {
            case ArcadeType.Racing:
                RaceGameUI.SetActive(true);
                RaceGameUI.transform.DOScale(1, 0.3f).SetEase(Ease.InCirc);
                break;
            case ArcadeType.Fishing:
                FishingGameUI.SetActive(true);
                FishingGameUI.transform.DOScale(1, 0.3f).SetEase(Ease.InCirc);
                break;
            case ArcadeType.Shooting:
                BattleGameUI.SetActive(true);
                BattleGameUI.transform.DOScale(1, 0.3f).SetEase(Ease.InCirc);
                break;
            default:
                Debug.LogError("Unknown ArcadeType");
                break;
        }
        isUIopen = true;

    }

    public void ClosePlayButton()
    {
        isUIopen = false;
        ParentGameUI.transform.DOScale(0, 0.3f).SetEase(Ease.InCirc);
    }

    public void TransferSuccessful(string quried)
    {
        // Transaction Successful message and wait for 1 second
        toastMessage.text = "Transfer Successful";
        StartCoroutine(TransferSuccessfulEvent());
        //Disable wallet screens
        switch (quried)
        {
            case "racing":
                Debug.Log(" Racing Transaction is successful, execution in Arcade Manager");
                RepairRacing();
                break;

            case "bonkbattle":
                Debug.Log(" bonk battle Transaction is successful, execution in Arcade Manager");
                RepairShooting();
                break;
        }
    }

    IEnumerator  TransferSuccessfulEvent()
    {
        yield return new WaitForSeconds(5f);
        toastMessage.text = "";
        //walletBackButton.onClick.Invoke();
        //walletBGBackButton.onClick.Invoke();
    }

    public void TransferUnsuccessful()
    {
        toastMessage.text = "Transfer Unsuccessful";
        StartCoroutine(TransferSuccessfulEvent());
    }
}
