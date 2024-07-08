using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;
using Photon.Pun;

public class PlayerUIManager : MonoBehaviour
{
    private RoundManager _roundManager;
    public bool cardSelected = false;

    //-----------------Local Player ---------------------//
    public Transform DefenceIndicator;
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    public GameObject IndicatorUI;
    public TextMeshProUGUI costText;

    public Button skipButton;

    // ---------------- Remote Player ------------------//
    public Transform rmtDefenceIndicator;
    public TextMeshProUGUI rmtcoinsText;
    public Transform rmthealthIndicator;
    public TextMeshProUGUI rmthealthNumber;
    public GameObject rmtIndicatorUI;
    public TextMeshProUGUI rmtcostText;


    private PhotonView pv;

    

    public void Start()
    {
        pv = GetComponent<PhotonView>();
        _roundManager = GameObject.FindGameObjectWithTag("Multiplayer_manager").GetComponent<RoundManager>();
    }

    private void Update()
    {
        //displays number of coins the player has
        //if (PlayerPrefs.GetInt("Coins") < 10) coinsText.text = "Coins: " + "0" + PlayerPrefs.GetInt("Coins").ToString();
        //if (PlayerPrefs.GetInt("Coins") >= 10) coinsText.text = "Coins: " + PlayerPrefs.GetInt("Coins").ToString();
        if (CostManager.Instance != null)
        {
            costText.text = "Cost:" + CostManager.Instance.Total.ToString();
        }
        if(RoundManager.InstRoundManager.infoisShown == true)
        {
            skipButton.gameObject.SetActive(false);
        }
       
    }

    public void DestroyUICanvas()
    {
        Destroy(IndicatorUI);
    }

    public void UpdateHealth(float health, float MAXhealth)
    {
        if (pv.IsMine)
        {
            //updates the health bar according to current health
            healthIndicator.localScale = new Vector3(health / MAXhealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
            // displays current health in a numerical form
            healthNumber.text = "Health: " + (int)health + " / " + MAXhealth;
        }
        else
        {
            //updates the health bar according to current health
            rmthealthIndicator.localScale = new Vector3(health / MAXhealth, rmthealthIndicator.localScale.y, rmthealthIndicator.localScale.z);
            // displays current health in a numerical form
            rmthealthNumber.text = "Health: " + (int)health + " / " + MAXhealth;
        }
    }

    public void UpdateDefence(float Defence, float MAX_DEFENCE)
    {
        //updates the health bar according to current health
        DefenceIndicator.localScale = new Vector3(Defence / MAX_DEFENCE, DefenceIndicator.localScale.y, DefenceIndicator.localScale.z);
    }

    public void PlayerHasCardSelected()
    {
        if (pv.IsMine)
        {
            // Notify RoundManager that this player has selected a card and pressed skip
            //_roundManager.OnPlayerSkipPressed();
        }
        _roundManager.OnPlayerSkipPressed();
    }

    public void ActivateSkipButton()
    {
        skipButton.gameObject.SetActive(true);
    }



    public void DisableSkipButton()
    {
        skipButton.interactable = false;
    }

    public void EnableSkipButton()
    {
        skipButton.interactable = true;
    }
}