using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;
using UnityEngine.Video;

public class PlayerManager : MonoBehaviour, IAddToInventory
{
    // Start is called before the first frame update
    public PlayerController _controller;
    public PlayerAnimator _animator;
    public PlayerCombat _combat;
    public float maxHealth = 500;
    public float health = 500;
    bool immunity = false;
    
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    bool isDead;
    bool isDeadRevive;

    public GameObject fadeOut;
    public AudioClip coinSound1, coinSound2;
    public GameObject attackButton;
    public GameObject enterButton, fishButton, ExitButton, drePowerUpBust, dreBust, desertButton;

    [SerializeField] VideoPlayer videoPlayer;

    public Transform[] startLocation;

    string curSceneName;
    public GameObject enemies;
    private GameObject[] childenemies;

    //Inventory Additions Array
    private Dictionary<int, Inventory> inv = new Dictionary<int, Inventory>();

    private void Awake()
    {
        curSceneName = SceneManager.GetActiveScene().name;
        PlayerPrefs.SetInt("MaxHealth", 500);
    }

    // Update is called once per frame
    void Update()
    {

        //max health taked from PlayerPrefs
        maxHealth = PlayerPrefs.GetInt("MaxHealth");
        
        //regenerates health slowly
        if (health <= maxHealth && !isDead)
        {
            health += 10 * Time.deltaTime;
        }

        //triggers death sequence, death animation
        if(health <= 0 && !isDead)
        {
            isDead = true;
            _animator._heroAnimator.SetLayerWeight(2, 1);
            _animator._heroAnimator.SetBool("isDead", true);
            StartCoroutine(deathSequence());
        }


        if (curSceneName == "BonkArcade" || curSceneName == "FishingArea" || curSceneName == "ShopInterior")
            return;

            //updates the health bar according to current health
            healthIndicator.localScale = new Vector3(health / maxHealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
            // displays current health in a numerical form
            healthNumber.text = "Health: " + (int)health + " / " + maxHealth;

            //displays number of coins the player has
            if (PlayerPrefs.GetInt("Coins") < 10) coinsText.text = "Coins: " + "0" + PlayerPrefs.GetInt("Coins").ToString();
            if (PlayerPrefs.GetInt("Coins") >= 10) coinsText.text = "Coins: " + PlayerPrefs.GetInt("Coins").ToString();
        
    }

    public void SetImmunityTrue()
    {
        immunity = true;
    }

    public void SetImmunityFalse()
    {
        immunity = false;
    }

    public void PlayDrePowerUpBust()
    {
        drePowerUpBust.SetActive(true);
        dreBust.SetActive(false);
        videoPlayer.Play();
    }

    public void StopDrePowerUpBust()
    {
        dreBust.SetActive(true);
        drePowerUpBust.SetActive(false);
        videoPlayer.Stop();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if(!immunity && !isDead)
        {
            //takes damage from the normal void 
            if (other.tag == "enemyAttackZone")
            {
                StartCoroutine(_animator.CameraShake(0.3f));

                health -= 20;
            }

            //takes damage from the green void projectile
            if (other.tag == "greenVoidProjectile")
            {
                Destroy(other.transform.parent.gameObject);
                StartCoroutine(_animator.CameraShake(0.3f));


                health -= 40;
                StartCoroutine(_animator.greenVoidDamage());
            }

            //takes damage from the red void projectile
            if (other.tag == "redVoidProjectile")
            {
                Destroy(other.transform.parent.gameObject);
                StartCoroutine(_animator.CameraShake(0.3f));
                health -= 40;
                StartCoroutine(_animator.redVoidDamage());
            }
        }
        

        //triggers the poweup through the animator
        if(other.tag == "PowerUp" && !isDead)
        {
            Destroy(other.gameObject);
            StartCoroutine(_animator.powerUp());
        }

        // collects coin. inccreases in playerprefs, plays a random coin pickup sound, destroys coin
        if (other.tag == "salanaCoin" && !isDead)
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
        if(other.TryGetComponent(out ICollisiontype fishSceneCollider))
        {
            fishSceneCollider.callUIFunctions();
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        //It was already like this when I got here :( 

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
            if (collision.name == "ShopEntrance")
            {
                fishButton.SetActive(true);
            }
            if (collision.name == "ShopExit")
            {
                fishButton.SetActive(true);
            }
            if (collision.name == "FishingExit")
            {
                ExitButton.SetActive(true);
            }
            if (collision.name == "DesertTrigger")
            {
                desertButton.SetActive(true);
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
        if (collision.name == "ShopEntrance")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "ShopExit")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "FishingExit")
        {
            ExitButton.SetActive(false);
        }
        if (collision.name == "DesertTrigger")
        {
            desertButton.SetActive(false);
        }
    }
  
    //death sequence
    IEnumerator  deathSequence()
    {
        _controller.enabled = false;
        _combat.enabled = false;
        if (fadeOut != null)
        {
            Time.timeScale = 0f;
            fadeOut.SetActive(true);
        }
        yield return new WaitForSeconds(1);
        //SceneManager.LoadScene(0);
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
