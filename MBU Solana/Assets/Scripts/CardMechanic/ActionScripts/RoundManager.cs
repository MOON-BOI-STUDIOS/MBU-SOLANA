using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Unity.VisualScripting;
using System.IO;

public class RoundManager : MonoBehaviourPun
{
    #region Singleton

    public static RoundManager InstRoundManager;

    private void Awake()
    {
        if (InstRoundManager == null)
        {
            InstRoundManager = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    #endregion

    private bool PhaseStart = false;
    private int NumberOfPhases = 0;
    private RoundScript RoundScript;

    public TextMeshProUGUI time;
    public float timeRemaining = 10;
    public bool timerIsRunning = false;

    public GameObject cardManagerPrefab;

    private Dictionary<int, PlayerUIManager> playerCanvases = new Dictionary<int, PlayerUIManager>();

    private CardManager CardManagersObject;

    private float gameDuration = 10f; // Duration of the game in seconds
    private float startTime;

    public GameObject TimerObject;


    // Start is called before the first frame update
    void Start()
    {
        RoundScript = GetComponent<RoundScript>();
    }

    // Update is called once per frame
    void Update()
    {
        if (timerIsRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                DisplayTime(timeRemaining);
            }
            else
            {
                Debug.Log("Time has run out!");
                timeRemaining = 0;
                timerIsRunning = false;
            }
        }
    }


  

    public void DisplayTime(float timeToDisplay)
    {
        timeToDisplay += 1;
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);

        time.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    public void RegisterPlayerCanvas(int playerId, PlayerUIManager playerUI, PlayerManager playerManager)
    {
        if (!playerCanvases.ContainsKey(playerId))
        {
            Debug.Log("Registered");
            playerCanvases.Add(playerId, playerUI);
            RoundScript.FindPlayers(playerManager);
        }
    }


    public void OnRoundStart()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("InstantiateCardManager", RpcTarget.All);// Instantiates cards 
            photonView.RPC("RoundProgressor", RpcTarget.All); // Progresses the round
        }
    }

    [PunRPC]
    void RoundProgressor()
    {
        NumberOfPhases += 1;
        Debug.Log("Number pf Phases:" + NumberOfPhases);
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("OpenForPlayerChoice", RpcTarget.All);
        }
        PhaseStart = true;
        gameDuration = 10f;
        time.color = Color.green;

        //Start Time
        float masterStartTime = (float)PhotonNetwork.Time;
        //photonView.RPC("StartGameTimer", RpcTarget.All, masterStartTime);
        StartGameTimer(masterStartTime);
    }

    public void StartGameTimer(float masterStartTime)
    {
        startTime = masterStartTime;
        StartCoroutine(CountDownTimer());
    }

    IEnumerator CountDownTimer()
    {
        float elapsedTime = 0f;

        while (elapsedTime < gameDuration)
        {
            elapsedTime = (float)(PhotonNetwork.Time - startTime);
            float remainingTime = Mathf.Max(gameDuration - elapsedTime, 0);
            DisplayTime(remainingTime);
            yield return null;
        }

        // Timer finished, notify all clients
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("EndGame", RpcTarget.All);
        }
    }

    [PunRPC]
    private void EndGame()
    {
        if (NumberOfPhases >= 3 && PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("StartRoundResultCalculation", RpcTarget.All);
        }
        else if (PhaseStart && PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("CloseForPlayerChoice", RpcTarget.All);
        }
        else if(PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("RoundProgressor", RpcTarget.All);
        }
    }

    [PunRPC]
    void OpenForPlayerChoice()
    {
        // Enable UI input with Buttons
        if (NumberOfPhases == 1)
        {
            Debug.Log("Choose for Phase 1");

            CardManagersObject.openRPS();
        }
        else if (NumberOfPhases == 2)
        {
            Debug.Log("Choose for Phase 2");

            CardManagersObject.OpenNormal();
        }
        else
        {
            Debug.Log("Choose for Phase 3");
            CardManagersObject.OpenSpecial();
        }
    }

    [PunRPC]
    private void InstantiateCardManager()
    {
        Debug.Log(playerCanvases.Count);

        GameObject cardManager = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "Card prefabs"), Vector3.zero, Quaternion.identity); //Instantiate(cardManagerPrefab);
        int playerId = PhotonNetwork.LocalPlayer.ActorNumber;
        if (playerCanvases.ContainsKey(playerId))
        {
            cardManager.transform.SetParent(playerCanvases[playerId].transform, false);
        }
        
        if (cardManager != null)
        {
            CardManagersObject = cardManager.GetComponent<CardManager>();
        }
        else
        {
            Debug.Log("cardManager is Null");
        }

        //Turning on the Gameobject for timer as true. Doing it here as this function is only triggered once
        TimerObject.SetActive(true);
    }

    [PunRPC]
    void CloseForPlayerChoice()
    {
        Debug.Log("Stop Choosing");
        // Disable Ui input with Buttons
        PhaseStart = false;
        gameDuration = 10f;
        time.color = Color.red;

        //Start Time
        float masterStartTime = (float)PhotonNetwork.Time;
        //photonView.RPC("StartGameTimer", RpcTarget.All, masterStartTime);
        StartGameTimer(masterStartTime);
    }

    [PunRPC]
    void StartRoundResultCalculation()
    {
        // Shift COntrol to RoundScript for Choice Calculation and Consequences
        if (PhotonNetwork.IsMasterClient)
        {
            RoundScript.OnCalculationOfResult();
            photonView.RPC("updatedUI", RpcTarget.All);
        }
        //photonView.RPC("updatedUI",RpcTarget.All);

    }
}
