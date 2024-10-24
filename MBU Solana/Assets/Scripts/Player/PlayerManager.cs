using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
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

    public GameObject afterDeathPanel;
    public AudioClip coinSound1, coinSound2;
    public GameObject attackButton;
    public GameObject arenaEnterButton, fishButton, backToMeccaButton, drePowerUpBust, dreBust, desertButton, monkeDaoEnterButton;

    [SerializeField] VideoPlayer videoPlayer;

    public Transform[] startLocation;

    string curSceneName;
    public GameObject enemies;
    GameObject[] childenemies;

    //Inventory Additions Array
    Dictionary<int, Inventory> inv = new Dictionary<int, Inventory>();

    float lastHitDirectionX;
    [SerializeField] SpriteRenderer dreSpriteRenderer;
    [SerializeField] GameObject radarObject;
    [SerializeField] Camera dreCamera;
    [SerializeField] GameObject monkeDaoGuidePanel;

    [SerializeField] Image bustImage;
    [SerializeField] Sprite fullHealthSprite;
    [SerializeField] Sprite mediumHealthSprite;
    [SerializeField] Sprite lowHealthSprite;
    [SerializeField] Sprite zeroHealthSprite;

    void Awake()
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
            _controller.enabled = false;

            //dreSpriteRenderer.flipX = true;

            //_animator._heroAnimator.SetBool("Mirror", lastHitDirectionX < 0);
            _animator._heroAnimator.SetLayerWeight(2, 1);
            _animator._heroAnimator.SetBool("isDead", true);

            _controller.enabled = false;
            _combat.enabled = false;

            //ShowAfterDeathPanel();
        }

        if(curSceneName == "DreBattleArena" && AddInventoryItemScript.instance.HasItemWithNumber(16))
        {
            if(radarObject != null)
                radarObject.SetActive(true);

        }
        else
        {
            if(radarObject != null)
                radarObject.SetActive(false);
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
        
        UpdateHealthSprite();
    }

    public void UpdateHealthSprite()
    {
        int healthStatus = (int)(health / maxHealth * 100);

        switch (healthStatus)
        {
            case int n when (n > 80):
                bustImage.sprite = fullHealthSprite;
                break;

            case int n when (n > 40):
                bustImage.sprite = mediumHealthSprite;
                break;

            case int n when (n > 0):
                bustImage.sprite = lowHealthSprite;
                break;

            default:
                bustImage.sprite = zeroHealthSprite;
                break;
        }
    }

    public void SetMonkeTutorialDone()
    {
        PlayerPrefs.SetInt("MonkeTutorial", 1);
        PlayerPrefs.Save();
    }

    public void EnableController()
    {
        _controller.enabled = true;
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
                lastHitDirectionX = other.transform.parent.position.x - gameObject.transform.position.x;
                Debug.Log("lastHitDirectionX: " + lastHitDirectionX);
            }

            //takes damage from the green void projectile
            if (other.tag == "greenVoidProjectile")
            {
                
                StartCoroutine(_animator.CameraShake(0.3f));


                health -= 40;
                lastHitDirectionX = other.transform.parent.position.x - gameObject.transform.position.x;
                Debug.Log("lastHitDirectionX: " + lastHitDirectionX);

                StartCoroutine(_animator.greenVoidDamage());

                Destroy(other.transform.parent.gameObject);
            }

            //takes damage from the red void projectile
            if (other.tag == "redVoidProjectile")
            {
                
                StartCoroutine(_animator.CameraShake(0.3f));
                health -= 40;
                lastHitDirectionX = other.transform.parent.position.x - gameObject.transform.position.x;
                Debug.Log("lastHitDirectionX: " + lastHitDirectionX);

                StartCoroutine(_animator.redVoidDamage());

                Destroy(other.transform.parent.gameObject);
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

        if(other.tag == "MonkeGuideCollider")
        {
            if(SceneManager.GetActiveScene().buildIndex != 1)
                return;
        
            if (PlayerPrefs.GetInt("MonkeTutorial") == 0)
            {
                monkeDaoGuidePanel.SetActive(true);
                _controller.enabled = false;
            }
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        //It was already like this when I got here :( 

        //enables fishing entrance and arena entrance buttons when in the interaction area
        if (collision.tag == "ArenaZone")
        {
            if(collision.name == "FishingAreaEntrance Trigger")
            {
                fishButton.SetActive(true);
            }
            if(collision.name == "ArenaEntrance Trigger")
            {
                arenaEnterButton.SetActive(true);
            }
            if (collision.name == "ShopEntrance")
            {
                fishButton.SetActive(true);
            }
            if (collision.name == "ShopExit")
            {
                fishButton.SetActive(true);
            }
            if (collision.name == "BackToMecca")
            {
                backToMeccaButton.SetActive(true);
            }
            if (collision.name == "DesertTrigger")
            {
                desertButton.SetActive(true);
            }
            if (collision.name == "MonkeDaoEntrance Trigger")
            {
                monkeDaoEnterButton.SetActive(true);
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        //disables fishing entrance and arena entrance buttons when not in the interaction area
        if (collision.name == "FishingAreaEntrance Trigger")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "ArenaEntrance Trigger")
        {
            arenaEnterButton.SetActive(false);
        }
        if (collision.name == "ShopEntrance")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "ShopExit")
        {
            fishButton.SetActive(false);
        }
        if (collision.name == "BackToMecca")
        {
            backToMeccaButton.SetActive(false);
        }
        if (collision.name == "DesertTrigger")
        {
            desertButton.SetActive(false);
        }
        if (collision.name == "MonkeDaoEntrance Trigger")
        {
            monkeDaoEnterButton.SetActive(false);
        }
    }

    public void ShowAfterDeathPanel()
    {
        Time.timeScale = 0f;
        afterDeathPanel.SetActive(true);
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
