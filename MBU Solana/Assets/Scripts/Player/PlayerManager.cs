using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class PlayerManager : MonoBehaviour, IAddToInventory
{
    // Start is called before the first frame update
    public PlayerController _controller;
    public PlayerAnimator _animator;
    public PlayerCombat _combat;
    public float maxHealth;
    public float health = 500;
    
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    bool isDead;
    bool isDeadRevive;

    public int Revive;
    public GameObject fadeOut;
    public AudioClip coinSound1, coinSound2;
    public GameObject attackButton;
    public GameObject enterButton, fishButton;

    public Transform[] startLocation;

    public bool isPoweredUp = false;

    string curSceneName;
    
    //Inventory Additions Array
    private Dictionary<int, Inventory> inv = new Dictionary<int, Inventory>();

    private IPaymentHandler _paymentHandler;
    public GameObject _walletParent;

    public GameObject ReviveDialogBox;

    public TextMeshProUGUI revive;
    private void Awake()
    {
        curSceneName = SceneManager.GetActiveScene().name;
        //PlayerPrefs.SetInt("MaxHealth", 500);
        _paymentHandler = GetComponent<IPaymentHandler>();
    }

    // Update is called once per frame
    void Update()
    {

        //max health taked from PlayerPrefs
        maxHealth = PlayerPrefs.GetInt("MaxHealth");
        
        //regenerates health slowly
        if (health <= maxHealth)
        {
            health += 10 * Time.deltaTime;
        }

        //triggers death sequence, death animation
        if(health<= 0)
        {
            if(curSceneName == "SolanaSpeedRunScene" && !isDeadRevive)
            {
                if(!ReviveDialogBox.activeSelf)
                {
                    ReviveDialogBox.SetActive(true);
                }
            }
            else if(!isDead && curSceneName != "SolanaSpeedRunScene")
            {
                isDead = true;
                _animator._heroAnimator.SetLayerWeight(2, 1);
                _animator._heroAnimator.SetBool("isDead", true);
                StartCoroutine(deathSequence());
            }
        }


        if (curSceneName == "BonkArcade")
            return;

            //updates the health bar according to current health
            healthIndicator.localScale = new Vector3(health / maxHealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
            // displays current health in a numerical form
            healthNumber.text = "Health: " + (int)health + " / " + maxHealth;

            //displays number of coins the player has
            if (PlayerPrefs.GetInt("Coins") < 10) coinsText.text = "Coins: " + "0" + PlayerPrefs.GetInt("Coins").ToString();
            if (PlayerPrefs.GetInt("Coins") >= 10) coinsText.text = "Coins: " + PlayerPrefs.GetInt("Coins").ToString();
        
    }

    public void CharacterDeath()
    {
        Debug.Log("CharacterDeath");
        ReviveDialogBox.SetActive(false);
        isDead = true;
        _animator._heroAnimator.SetLayerWeight(2, 1);
        _animator._heroAnimator.SetBool("isDead", true);
        StartCoroutine(deathSequence());
    }

    public void DeathAndRevive()
    {
        _animator._heroAnimator.SetLayerWeight(2, 1);
        _animator._heroAnimator.SetBool("isDead", true);
        StartCoroutine(reviveSequence());
    }
    IEnumerator reviveSequence()
    {
        yield return new WaitForSeconds(1);
        if(!_walletParent.activeSelf)
        {
            Debug.Log("Inside Death and Revive");
            ReviveDialogBox.SetActive(false);
            _walletParent.SetActive(true);
            _paymentHandler.TryAndProcessTransaction();
        }
    }

    public void TransactionSuccessful()
    {
        Revive += 1;
        revive.text = "Lives: "+ Revive;
        isDeadRevive = true;
        _animator._heroAnimator.SetLayerWeight(5,1);
        _animator._heroAnimator.SetBool("isDeadAndRevive",true);
        StartCoroutine(deathAndRevive());
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        //takes damage from the normal void 
        if (other.tag == "enemyAttackZone" && isPoweredUp == false)
        {
            StartCoroutine(_animator.CameraShake(0.3f));
            
            health -= 20;
        }

        //takes damage from the green void projectile
        if (other.tag == "greenVoidProjectile" && isPoweredUp == false)
        {
            Destroy(other.transform.parent.gameObject);
            StartCoroutine(_animator.CameraShake(0.3f));
         
          
            health -= 40;
            StartCoroutine(_animator.greenVoidDamage());
        }

        //takes damage from the red void projectile
        if (other.tag == "redVoidProjectile" && isPoweredUp == false)
        {
            Destroy(other.transform.parent.gameObject);
            StartCoroutine(_animator.CameraShake(0.3f));
            health -= 40;
            StartCoroutine(_animator.redVoidDamage());
        }

        //triggers the poweup through the animator
        if(other.tag == "PowerUp")
        {
            Destroy(other.gameObject);
            StartCoroutine(_animator.powerUp());
        }

        // collects coin. inccreases in playerprefs, plays a random coin pickup sound, destroys coin
        if (other.tag == "salanaCoin")
        {
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 1);
            
            int randomCoinSound = Random.Range(1, 3);
            if (randomCoinSound == 2)
            {
                GetComponent<AudioSource>().PlayOneShot(coinSound2);
            }
            else
            {
                GetComponent<AudioSource>().PlayOneShot(coinSound1);
            }

            Destroy(other.gameObject);
        }
        if(other.tag == "PowerDown")
        {
            health = -20;
        }

        
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        //enables fishing entrance and arena entrance buttons when not in the interaction area
        if (collision.tag == "ArenaZone")
        {
            if(collision.name == "FishingAreaTrigger")
            {
                fishButton.SetActive(true);
            }
            if(collision.name == "ArenaEntranceTrigger")
            {
                enterButton.SetActive(true);
            }
            
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        //disables fishing entrance and arena entrance buttons when not in the interaction area
        if (collision.name == "FishingAreaTrigger")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "ArenaEntranceTrigger")
        {
            enterButton.SetActive(false);
        }
    }
  
    //death sequence
    IEnumerator  deathSequence()
    {
        _controller.enabled = false;
        _combat.enabled = false;
        if(fadeOut != null)
            fadeOut.SetActive(true);
        yield return new WaitForSeconds(1);
        //SceneManager.LoadScene(0);
    }

    //death and Revive Sequence
    IEnumerator deathAndRevive()
    {
        Debug.Log("Execurion1");
        _controller.enabled = false;
        _combat.enabled = false;
        yield return new WaitForSeconds(2);
        Debug.Log("Execution after yield return");
        _controller.enabled = true;
        _combat.enabled = true;
        isDeadRevive = false;
        health = 400;
        PlayerPrefs.SetInt("Health",400);
        _animator._heroAnimator.SetBool("isDeadAndRevive",false);
        _animator._heroAnimator.SetLayerWeight(0,1);
    }
    
    // Adding to Inventory
    public void AdditionToInventory(String invGameObject, int invItemNumber)
    {
        // Adding to Inventory
        if (inv.ContainsKey(invItemNumber))
        {
            Inventory inventoryItem = inv[invItemNumber];
            Debug.Log("Amount: " + inventoryItem.GetAmount());
            inventoryItem.IncreaseAmount(inventoryItem.GetAmount() + 1);
            inv[invItemNumber] = inventoryItem;
            inventoryItem.DisplayInventoryItem();
        }
        else
        {
            Debug.Log("Added");
            Inventory newItem = new Inventory(invGameObject,invItemNumber);
            inv.Add(invItemNumber,newItem);
            inv[invItemNumber].DisplayInventoryItem();
        }
        
    }

}
