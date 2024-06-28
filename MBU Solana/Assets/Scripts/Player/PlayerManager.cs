using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;
using Photon.Pun;
using Photon.Pun.Demo.PunBasics;
using static UnityEngine.Rendering.DebugUI;

public class PlayerManager : MonoBehaviour, IPunObservable //IAddToInventory
{
    #region Public Fields
    public PlayerController _controller;
    public PlayerAnimator _animator;
    public PlayerCombat _combat;

    public const float MAXHealth = 500.0f;
    public float health;

    public GameObject fadeOut;

    //Photon View Filed
    public PhotonView photonView;

    [Tooltip("The Player's UI GameObject Prefab")]
    [SerializeField]
    public GameObject PlayerUiPrefab;

    public enum OptionSelected
    {
        NoDamage,               //0
        DecreaseDamage,         //1
        Heal,                   //2
        Damage,                 //3
        Default                 //4
    };

    public static GameObject LocalPlayerInstance;
    public static GameObject OtherPlayerInstance;
    #endregion

    #region Private Fields Region

    private PlayerUIManager PlayerUI;

    bool isDead;

    //For Phase 1 options
    private TurnOptions.Phase1Turns Phase1Turns = TurnOptions.Phase1Turns.None;

    //For Phase2 options
    private TurnOptions.PhaseAttackTurns Phase2Turns = TurnOptions.PhaseAttackTurns.None;
    private int carddamage = 0;

    //For Phase3 options
    private SpecialCard specialcardData;
    private TurnOptions.PhaseDefenceTurns Phase3Turns = TurnOptions.PhaseDefenceTurns.None;
    private SpecialCardData _specialCardData;
    private OptionSelected Option = OptionSelected.Default;
    private int healtheffector = 0;
    private int attackPower = 0;

    Rigidbody2D rb;
    #endregion

    #region Delegates and Events
    public delegate void HealthChangedDelegate(float newHealth, float MaxHealth);
    public event HealthChangedDelegate OnHealthChanged;
    #endregion

    private void Awake()
    {
        //curSceneName = SceneManager.GetActiveScene().name;
        PlayerPrefs.SetInt("MaxHealth", 500);
        photonView = GetComponent<PhotonView>();
        rb = GetComponent<Rigidbody2D>();
        PlayerUI = GetComponent<PlayerUIManager>();

        if (photonView.IsMine)
        {
            LocalPlayerInstance = this.gameObject;
        }
        else
        {
            OtherPlayerInstance = this.gameObject;
        }
    }

    private void Start()
    {
        health = MAXHealth;

        // Health Prefab
        if (PlayerUiPrefab != null)
        {
            GameObject _uiGo = Instantiate(PlayerUiPrefab);
            _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
        }
        else
        {
            Debug.LogWarning("PlayerUiPrefab reference on player Prefab.", this);
        }
        //End of Health Prefab

        if (photonView.IsMine)
        {
            RegisterPlayer();
        }
        else
        {
            Destroy(rb);
            PlayerUI.DestroyUICanvas();
        }
    }

    public void RegisterPlayer()
    {
        int playerId = photonView.OwnerActorNr;
        RoundManager.InstRoundManager.RegisterPlayerCanvas(playerId, PlayerUI, this);
        if (!PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("NotifyMasterClientOfRegistration", RpcTarget.MasterClient, playerId);
        }
    }

    [PunRPC]
    void NotifyMasterClientOfRegistration(int playerId)
    {
        RoundManager.InstRoundManager.RegisterPlayerCanvas(photonView.OwnerActorNr, PlayerUI, this);
    }

    public bool IsLocalPlayer()
    {
        return photonView.IsMine;
    }

    // Update is called once per frame
    void Update()
    {

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

    public float GetMaxHealth()
    {
        return MAXHealth; 
    }

    public TurnOptions.Phase1Turns Phase1Options
    {
        get { return Phase1Turns; }
        set
        {
            Phase1Turns = value;
        }
    }

    public TurnOptions.PhaseAttackTurns Phase2Options
    {
        get { return Phase2Turns; }
        set
        {
            Phase2Turns = value;
        }
    }

    public int Phase2CardDamage
    {
        get { return carddamage; }
        set
        {
            carddamage = value;
        }
    }

    public TurnOptions.PhaseDefenceTurns Phase3Options
    {
        get { return Phase3Turns; }
        set
        {
            Phase3Turns = value;
        }
    }

    public OptionSelected GetOptionSelected()
    {
        return Option;
    }

    public void SetOptionSelected(int value)
    {
        Option = (OptionSelected)value;
    }

    public int Phase3OptionhealthEffector
    {
        get { return healtheffector; }
        set
        {
            healtheffector = value;
        }
    }

    public int Phase3OptionAttackPower
    {
        get { return attackPower; }
        set
        {
            attackPower = value;
        }
    }

    public void OnChangeHealth(int num = 0, int attack = 0)
    {
        //-----------Only for Phase 2----------------
        if (attack == 1)
        {
            health -= num;
            if (health <= 0.0f)
            {
                health = 0.0f;
                Die();
            }
            return;
        }
        //----------------- For Phase 3 ------------
        else if (Option == OptionSelected.NoDamage)
        {
            // Nothing will happen to the health
            Debug.Log("Option selected is No Damage" + health);
        }
        else if (Option == OptionSelected.DecreaseDamage)
        {
            int damage = attack - (int)(attack * (float)healtheffector/100);
            health -= damage;
            Debug.Log("Inside OnChangeHealth with attack:" + attack);
            Debug.Log("Option selected is Decrease Damage" + health);
        }
        else if (Option == OptionSelected.Heal)
        {
            health -= attack;
            health += healtheffector;
            Debug.Log("Inside OnChangeHealth with attack:" + attack);
            Debug.Log("Option selected is Heal" + health);
        }
        else if (Option == OptionSelected.Damage)
        {
            health -= attack;
            Debug.Log("Inside OnChangeHealth with attack:" + attack);
            Debug.Log("Option selected is Damage:" + health);
        }

        //-----------------------------------//
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
        //photonView.RPC("UpdateHealth", RpcTarget.All, health);
    }


    public SpecialCard SpecialCardData
    {
        get { return specialcardData; }
        set
        {
            specialcardData = value;
        }
    }

    public SpecialCardData CardData
    {
        get { return _specialCardData; }
        set
        {
            _specialCardData = value;
        }
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext((int)Phase1Turns);
            stream.SendNext((int)Phase2Turns);
            stream.SendNext((int)Phase3Turns);
            stream.SendNext(health);
            stream.SendNext(carddamage);
            stream.SendNext(Option);
            stream.SendNext(healtheffector);
            stream.SendNext(attackPower);
        }
        else
        {
            Phase1Turns = (TurnOptions.Phase1Turns)stream.ReceiveNext();
            Phase2Turns = (TurnOptions.PhaseAttackTurns)stream.ReceiveNext();
            Phase3Turns = (TurnOptions.PhaseDefenceTurns)stream.ReceiveNext();
            this.health = (float)stream.ReceiveNext();
            this.carddamage = (int)stream.ReceiveNext();
            this.Option = (OptionSelected)stream.ReceiveNext();
            this.healtheffector = (int)stream.ReceiveNext();
            this.attackPower = (int)stream.ReceiveNext();
        }
    }
}
