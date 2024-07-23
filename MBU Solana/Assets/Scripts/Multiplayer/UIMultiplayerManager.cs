using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem.HID;
using UnityEngine.Rendering;
using UnityEngine.UIElements;
using Photon.Pun;

public class UIMultiplayerManager : MonoBehaviour
{
    public GameObject StartGameButton;

    private void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            StartGameButton.SetActive(true);
        }
        else
        {
            Destroy(StartGameButton);
        }
    }
    /*
    //public Transform player;
    public TextMeshProUGUI coins, swordLevel, specialLevel, maxHealth, fishesUI, roundIndicator;

    public Transform DefenceIndicator;
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    // Start is called before the first frame update

    // Inventory Button
    public GameObject panel;
    private bool isPanelOpen = false;
    // Debugger
    public bool debugger = false;

    public RoundScript RoundScript;

    // Getting the Local Player's Player Manager
    private PlayerManager _player;

    private void Awake()
    {
         _player =  RoundScript.GetPlayerScript();
        Debug.Log(_player);
    }


    void Start()
    {
        coins.text = "Coins: " + PlayerPrefs.GetInt("Coins").ToString();
        swordLevel.text = "Sword Level : " + (PlayerPrefs.GetInt("SwordPower") / 7).ToString();
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

    private void OnEnable()
    {
        Debug.Log("This is called in OnEnable function");
        // On Health Changes of the local Player
        _player.OnHealthChanged += HandleHealthChanged;

        // On Defence Changes of the local Player
        _player.OnDefenceChanged += HandleDefenceChanged;
    }

    private void OnDisable()
    {
        // On Health Changes of the local Player 
        _player.OnHealthChanged -= HandleHealthChanged;

        // On Defence Changes of the local Player
        _player.OnDefenceChanged -= HandleDefenceChanged;

    }

    private void HandleHealthChanged(float newHealth, float MaxHealth)
    {
        // Update UI or other game elements with the new health value
        Debug.Log("Player health updated: " + newHealth);
        //updates the health bar according to current health
        healthIndicator.localScale = new Vector3(newHealth / MaxHealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
        // displays current health in a numerical form
        healthNumber.text = "Health: " + (int)newHealth + " / " + MaxHealth;
    }

    private void HandleDefenceChanged(float newDefence, float MaxDefence)
    {
        // Update UI or other game elements with the new health value
        Debug.Log("Player health updated: " + newDefence);

        DefenceIndicator.localScale = new Vector3( newDefence/ MaxDefence, DefenceIndicator.localScale.y, DefenceIndicator.localScale.z);
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
        /*if(PlayerPrefs.GetInt("Fishes") > 0)
        {
            if (player.GetComponent<PlayerManager>().health > 0 && player.GetComponent<PlayerManager>().health <= player.GetComponent<PlayerManager>().MAXHealth - 80)
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
        }
    }*/
}
