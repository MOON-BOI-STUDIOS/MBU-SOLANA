using UnityEngine;
using System.Collections;
using TMPro;
using Photon.Pun;

public class PlayerUIManager : MonoBehaviour
{
    //-----------------Local Player ---------------------//
    public Transform DefenceIndicator;
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    public GameObject IndicatorUI;
    public TextMeshProUGUI costText;

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

}

