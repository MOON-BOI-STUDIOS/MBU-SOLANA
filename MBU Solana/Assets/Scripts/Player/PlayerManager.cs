using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;
using Photon.Pun;

public class PlayerManager : MonoBehaviour, IAddToInventory, IPunObservable
{
    // Start is called before the first frame update
    public PlayerController _controller;
    public PlayerAnimator _animator;
    public PlayerCombat _combat;
    public const float MAXHealth = 500.0f;
    public float health;
    public float Defence;
    private const float MAX_DEFENCE = 100.0f;

    //Local Player Indicators
    public Transform DefenceIndicator;
    public TextMeshProUGUI coinsText;
    public Transform healthIndicator;
    public TextMeshProUGUI healthNumber;
    public GameObject IndicatorUI;

    bool isDead;
    bool isDeadRevive;

    public GameObject fadeOut;
    public AudioClip coinSound1, coinSound2;
    public GameObject attackButton;
    public GameObject enterButton, fishButton, ExitButton;

    public Transform[] startLocation;

    public bool isPoweredUp = false;

    string curSceneName;
    public GameObject enemies;
    private GameObject[] childenemies;

    //Inventory Additions Array
    private Dictionary<int, Inventory> inv = new Dictionary<int, Inventory>();


    [SerializeField]
    private TurnOptions.Phase1Turns Phase1Turns;
    [SerializeField]
    private TurnOptions.PhaseAttackTurns Phase2Turns;
    [SerializeField]
    private TurnOptions.PhaseDefenceTurns Phase3Turns;

    public delegate void HealthChangedDelegate(float newHealth,float MaxHealth);
    public event HealthChangedDelegate OnHealthChanged;

    public delegate void DefenceChangedDelegate(float newDefence, float MaxDefence);
    public event HealthChangedDelegate OnDefenceChanged;


    public enum OptionSelected
    {
        NoDamage,
        Default
    };

    [SerializeField]
    public OptionSelected Option = OptionSelected.Default;

    //Photon View Filed
    private PhotonView photonView;

    Rigidbody2D rb;

    private void Awake()
    {
        curSceneName = SceneManager.GetActiveScene().name;
        PlayerPrefs.SetInt("MaxHealth", 500);
        photonView = GetComponent<PhotonView>();
        rb = GetComponent<Rigidbody2D>();

    }

    private void Start()
    {
        if (photonView.IsMine)
        {
            
            health = MAXHealth;
            Defence = MAX_DEFENCE;
        }
        else
        {
            Destroy(GetComponentInChildren<Camera>().gameObject);
            Destroy(rb);
            Destroy(IndicatorUI);
        }
    }

    public bool IsLocalPlayer()
    {
        return photonView.IsMine;
    }

    // Update is called once per frame
    void Update()
    {

        //max health taked from PlayerPrefs
        //maxHealth = PlayerPrefs.GetInt("MaxHealth");
        
        /*regenerates health slowly
        if (health <= MAXHealth && !isDead)
        {
            health += 10 * Time.deltaTime;
        }*/



        if (curSceneName == "BonkArcade" || curSceneName == "FishingArea" || curSceneName == "ShopInterior")
            return;

            //updates the health bar according to current health
            //healthIndicator.localScale = new Vector3(health / MAXHealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
            // displays current health in a numerical form
            //healthNumber.text = "Health: " + (int)health + " / " + MAXHealth;

            //displays number of coins the player has
            //if (PlayerPrefs.GetInt("Coins") < 10) coinsText.text = "Coins: " + "0" + PlayerPrefs.GetInt("Coins").ToString();
            //if (PlayerPrefs.GetInt("Coins") >= 10) coinsText.text = "Coins: " + PlayerPrefs.GetInt("Coins").ToString();

        if (curSceneName == "PVP_BattleArena")
        {
            //updates the health bar according to current health
            //DefenceIndicator.localScale = new Vector3(Defence / MAX_DEFENCE, DefenceIndicator.localScale.y, DefenceIndicator.localScale.z);
        }
    }

    void Die()
    {
        //triggers death sequence, death animation
        if (health <= 0 && !isDead)
        {
            isDead = true;
            _animator._heroAnimator.SetLayerWeight(2, 1);
            _animator._heroAnimator.SetBool("isDead", true);
            StartCoroutine(deathSequence());
        }
    }

    [PunRPC]
    void UpdateHealth(float newHealth)
    {
        health = newHealth;
        // Put the Helath UI here for now for testing
        //OnHealthChanged?.Invoke(health, MAXHealth);

        //updates the health bar according to current health
        healthIndicator.localScale = new Vector3(health / MAXHealth, healthIndicator.localScale.y, healthIndicator.localScale.z);
        // displays current health in a numerical form
        healthNumber.text = "Health: " + (int)health + " / " + MAXHealth;
    }

    [PunRPC]
    void UpdateDefence(float newDefence)
    {
        Defence = newDefence;
        //Put the Defence UI here for now for testing
        //OnDefenceChanged?.Invoke(Defence, MAX_DEFENCE);

        //updates the health bar according to current health
        DefenceIndicator.localScale = new Vector3(Defence / MAX_DEFENCE, DefenceIndicator.localScale.y, DefenceIndicator.localScale.z);
    }

    /*private void OnTriggerEnter2D(Collider2D other)
    {
        //takes damage from the normal void 
        if (other.tag == "enemyAttackZone" && isPoweredUp == false && !isDead)
        {
            StartCoroutine(_animator.CameraShake(0.3f));
            
            health -= 20;
        }

        //takes damage from the green void projectile
        if (other.tag == "greenVoidProjectile" && isPoweredUp == false && !isDead)
        {
            Destroy(other.transform.parent.gameObject);
            StartCoroutine(_animator.CameraShake(0.3f));
         
          
            health -= 40;
            StartCoroutine(_animator.greenVoidDamage());
        }

        //takes damage from the red void projectile
        if (other.tag == "redVoidProjectile" && isPoweredUp == false && !isDead)
        {
            Destroy(other.transform.parent.gameObject);
            StartCoroutine(_animator.CameraShake(0.3f));
            health -= 40;
            StartCoroutine(_animator.redVoidDamage());
        }

        //triggers the poweup through the animator
        if(other.tag == "PowerUp" &&!isDead)
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
    }*/

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

    public TurnOptions.Phase1Turns Phase1Options
    {
        get { return Phase1Turns; }
        set
        {
            if (PhotonNetwork.IsMasterClient)
            {
                Phase1Turns = value;
            }
        }
    }

    public TurnOptions.PhaseAttackTurns Phase2Options
    {
        get { return Phase2Turns; }
        set {
            if (PhotonNetwork.IsMasterClient)
            {
                Phase2Turns = value;
            }
        }
    }

    public TurnOptions.PhaseDefenceTurns Phase3Options
    {
        get { return Phase3Turns; }
        set {
            if (PhotonNetwork.IsMasterClient)
            {
                Phase3Turns = value;
            }
        }
    }

    public void OnNoDamage()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Option = OptionSelected.NoDamage;
        }
    }

    public void OnChangeHealth(float num, bool Isincreased)
    {
        if (photonView.IsMine)
        {
            if (Isincreased)
            {
                health = health + num;

            }
            else if (Option == OptionSelected.NoDamage)
            {
                return;
            }
            else if (Defence != 0.0f)
            {
                OnChangeDefence(40, false);
            }
            else
            {
                health = health - num;
            }

            // Clamp health between min and max limits
            if (health > MAXHealth)
            {
                health = MAXHealth;
            }
            else if (health <= 0.0f)
            {
                health = 0.0f;
                Die();
            }

            // Call the RPC to update health on all clients
            photonView.RPC("UpdateHealth", RpcTarget.All, health);
        }
    }

    public void OnChangeDefence(float num, bool Isincreased)
    {
        if (photonView.IsMine)
        {
            if (Isincreased)
            {
                Defence = Defence + num;
            }
            else
            {
                Defence = Defence - num;
            }

            // Clamp health between min and max limits
            if (Defence > MAX_DEFENCE)
            {
                Defence = MAX_DEFENCE;
            }
            else if (Defence <= 0.0f)
            {
                Defence = 0.0f;
            }
            photonView.RPC("UpdateDefence", RpcTarget.All, Defence);
        }
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext((int)Phase1Turns);
            stream.SendNext((int)Phase2Turns);
            stream.SendNext((int)Phase3Turns);
        }
        else
        {
            Phase1Turns = (TurnOptions.Phase1Turns)stream.ReceiveNext();
            Phase2Turns = (TurnOptions.PhaseAttackTurns)stream.ReceiveNext();
            Phase3Turns = (TurnOptions.PhaseDefenceTurns)stream.ReceiveNext();
        }
    }
}
