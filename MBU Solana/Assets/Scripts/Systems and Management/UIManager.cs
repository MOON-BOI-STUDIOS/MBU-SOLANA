using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem.HID;
using UnityEngine.Rendering;
using UnityEngine.UIElements;

public class UIManager : MonoBehaviour
{
    public Transform player;
    public TextMeshProUGUI coins, swordLevel, specialLevel, maxHealth, fishesUI, roundIndicator;
    // Start is called before the first frame update
    
    // Inventory Button
    public GameObject panel;
    private bool isPanelOpen = false;
    // Debugger
    public bool debugger = false;
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        //Adjusts UI to current values
        coins.text = "Coins: "+ PlayerPrefs.GetInt("Coins").ToString();
        swordLevel.text = "Sword Level : " + (PlayerPrefs.GetInt("SwordPower") / 7).ToString();
        specialLevel.text = "Special Level : " + (PlayerPrefs.GetInt("SpecialPower") / 20).ToString();
        maxHealth.text = "Max Health : " + PlayerPrefs.GetInt("MaxHealth").ToString();
        fishesUI.text = "x" + PlayerPrefs.GetInt("Fishes").ToString();
        //Check If roundIndicator is null or not
        if (roundIndicator != null)
        {
            roundIndicator.text = "ROUND: " + PlayerPrefs.GetInt("Round").ToString();
        }

        //PC Controls
        if(Input.GetButtonDown("Interact"))
        {
            eatFish();
        }
    }


    //Buy Sword Strength Upgrade
    public void upgradeSword()
    {
        if(PlayerPrefs.GetInt("Coins") >= 15)
        {
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 15);
            PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 7);
        }
        if (panel != null)
        {
            openPanel();
        }
    }

    //Buy Special Strength Upgrade
    public void upgradeSpecial()
    {
        if (PlayerPrefs.GetInt("Coins") >= 15)
        {
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 15);
            PlayerPrefs.SetInt("SpecialPower", PlayerPrefs.GetInt("SpecialPower") + 20);
        }
        if (panel != null)
        {
            openPanel();
        }
    }


    public void eatFish()
    {
        if(PlayerPrefs.GetInt("Fishes") > 0)
        {
            if (player.GetComponent<PlayerManager>().health > 0 && player.GetComponent<PlayerManager>().health <= player.GetComponent<PlayerManager>().maxHealth - 80)
            {
                player.GetComponent<PlayerManager>().health += 75;
                PlayerPrefs.SetInt("Fishes", PlayerPrefs.GetInt("Fishes") - 1);
            }
        }
        if (panel != null)
        {
            openPanel();
        }
    }

    //Buy Max Health Upgrade
    public void upgradeHealth()
    {
        if (PlayerPrefs.GetInt("Coins") >= 50)
        {
            PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") + 100);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 50);
        }

        if (panel != null)
        {
            openPanel();
        }
    }

    // Add in inventory
    public void upgradeCoins()
    {
        if (debugger)
        {
            Debug.Log("Buy Coins");
        }
        if (panel != null)
        {
            openPanel();
        }
    }

    public void openPanel()
    {
        /*if (panel != null && !isPanelOpen)
        {
            panel.SetActive(true);
            isPanelOpen = true;
        }
        else if(panel != null && isPanelOpen)
        {
            panel.SetActive(false);
            isPanelOpen = false;
        }*/
    }
}
