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

public class PlayerManager : MonoBehaviour, IPunObservable //IAddToInventory
{
    #region Public Fields
    public PlayerController _controller;
    public PlayerAnimator _animator;
    public PlayerCombat _combat;

    public const float MAXHealth = 500.0f;
    public float health;
    public float Defence;

    public GameObject fadeOut;

    [SerializeField]
    public OptionSelected Option = OptionSelected.Default;

    //Photon View Filed
    public PhotonView photonView;

    [Tooltip("The Player's UI GameObject Prefab")]
    [SerializeField]
    public GameObject PlayerUiPrefab;

    public enum OptionSelected
    {
        NoDamage,
        Default
    };

    public static GameObject LocalPlayerInstance;
    #endregion

    #region Private Fields Region
    private const float MAX_DEFENCE = 100.0f;

    private PlayerUIManager PlayerUI;

    bool isDead;

    [SerializeField]
    private TurnOptions.Phase1Turns Phase1Turns;
    [SerializeField]
    private TurnOptions.PhaseAttackTurns Phase2Turns;
    [SerializeField]
    private TurnOptions.PhaseDefenceTurns Phase3Turns;

    Rigidbody2D rb;
    #endregion

    #region Delegates and Events
    public delegate void HealthChangedDelegate(float newHealth, float MaxHealth);
    public event HealthChangedDelegate OnHealthChanged;

    public delegate void DefenceChangedDelegate(float newDefence, float MaxDefence);
    public event HealthChangedDelegate OnDefenceChanged;
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


    }

    private void Start()
    {
        health = MAXHealth;
        Defence = MAX_DEFENCE;

        // Health Prefab
        if (PlayerUiPrefab != null)
        {
            GameObject _uiGo = Instantiate(PlayerUiPrefab);
            _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
        }
        else
        {
            Debug.LogWarning("<Color=Red><a>Missing</a></Color> PlayerUiPrefab reference on player Prefab.", this);
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

    [PunRPC]
    void UpdateHealth(float newHealth)
    {
        health = newHealth;
        // Put the Helath UI here for now for testing
        //OnHealthChanged?.Invoke(health, MAXHealth);

        PlayerUI.UpdateHealth(health, MAXHealth);
    }

    [PunRPC]
    void UpdateDefence(float newDefence)
    {
        Defence = newDefence;
        //Put the Defence UI here for now for testing
        //OnDefenceChanged?.Invoke(Defence, MAX_DEFENCE);

        PlayerUI.UpdateDefence(Defence, MAX_DEFENCE);
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

    public TurnOptions.PhaseDefenceTurns Phase3Options
    {
        get { return Phase3Turns; }
        set
        {
            Phase3Turns = value;
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
            //photonView.RPC("UpdateHealth", RpcTarget.All, health);
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
            //photonView.RPC("UpdateDefence", RpcTarget.All, Defence);
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
            stream.SendNext(Defence);
        }
        else
        {
            Phase1Turns = (TurnOptions.Phase1Turns)stream.ReceiveNext();
            Phase2Turns = (TurnOptions.PhaseAttackTurns)stream.ReceiveNext();
            Phase3Turns = (TurnOptions.PhaseDefenceTurns)stream.ReceiveNext();
            this.health = (float)stream.ReceiveNext();
            this.Defence = (float)stream.ReceiveNext();
        }
    }
}
