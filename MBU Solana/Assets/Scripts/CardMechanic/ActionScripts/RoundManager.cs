using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Unity.VisualScripting;
using System.IO;
using System;

public class RoundManager : MonoBehaviourPunCallbacks
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

    [Header("Bool")]
    public bool isCoolDown = false;

    public bool infoisShown = false;
    
    public bool timerIsRunning = false;

    private bool PhaseStart = false;

 
    private int NumberOfPhases = 0;
    private RoundScript RoundScript;

  

    [Header("Floats")]
    public float timeRemaining = 10;
    
    private float gameDuration = 10f; // Duration of the game in seconds

    private float startTime;


    

    private Dictionary<int, PlayerUIManager> playerCanvases = new Dictionary<int, PlayerUIManager>();

    private CardManager CardManagersObject;


    public TextMeshProUGUI time;

    [Header("Game Object")]

    public GameObject screen, nextRoundBTN;

     public GameObject TimerObject;
     public GameObject cardManagerPrefab;

    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;




    private int playersSkipped = 0;

    

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
                EndGame();
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
            Debug.Log("Registered with player ID: " + playerId);
            playerCanvases.Add(playerId, playerUI);
            RoundScript.FindPlayers(playerId, playerManager);
        }
    }

    public void OnRoundStart()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("InstantiateCardManager", RpcTarget.All); // Instantiates cards
            photonView.RPC("RoundProgressor", RpcTarget.All); // Progresses the round
            
        }
    }

    [PunRPC]
    void RoundProgressor()
    {
        
        NumberOfPhases += 1;

        Debug.Log("NUMBER OF PHASES:" + NumberOfPhases);
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("OpenForPlayerChoice", RpcTarget.All);
        }
        PhaseStart = true;
        gameDuration = 10f;
        time.color = Color.green;
        isCoolDown = false;


        // Start Time
        float masterStartTime = (float)PhotonNetwork.Time;
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
        EndGame();
    }

    private void EndGame()
    {
        if (NumberOfPhases >= 3 && PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("StartRoundResultCalculation", RpcTarget.AllBufferedViaServer);
        }
        else if (PhaseStart && PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("CloseForPlayerChoice", RpcTarget.All);
        }
        else if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("RoundProgressor", RpcTarget.All);
        }
    }

    [PunRPC]
    void OpenForPlayerChoice()
    {  
        playerCanvases[PhotonNetwork.LocalPlayer.ActorNumber].EnableSkipButton();

        // Enable UI input with Buttons
        if (NumberOfPhases == 1)
        {
            Debug.Log("CHOOSE OF PHASE 1");

            CardManagersObject.openRPS();
        }
        else if (NumberOfPhases == 2)
        {
            Debug.Log("CHOOSE OF PHASE 2");

            CardManagersObject.OpenNormal();
        }
        else
        {
            Debug.Log("CHOOSE OF PHASE 3");

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

            //Activating Skip Buttons for each player
            playerCanvases[playerId].ActivateSkipButton();
        }

        if (cardManager != null)
        {
            CardManagersObject = cardManager.GetComponent<CardManager>();
            cardManagerPrefab = cardManager;
        }
        else
        {
            Debug.Log("cardManager is Null");
        }

        // Turning on the Gameobject for timer as true. Doing it here as this function is only triggered once
        TimerObject.SetActive(true);
    }

    [PunRPC]
    void CloseForPlayerChoice()
    {
        Debug.Log("STOP CHOOSING");
        // Disable UI input with Buttons
        PhaseStart = false;
        gameDuration = 10f;
        time.color = Color.red;
        isCoolDown = true;

        // Start Time
        float masterStartTime = (float)PhotonNetwork.Time;
        StartGameTimer(masterStartTime);
    }

    [PunRPC]
    void StartRoundResultCalculation()
    {
        Debug.Log("Round End");
        TimerObject.SetActive(false);
        if(PhotonNetwork.IsMasterClient)
        {
            nextRoundBTN.SetActive(true);
            //UpdateUI();
            //PhotonNetwork.Destroy(cardManagerPrefab);
        }
        PhotonNetwork.Destroy(cardManagerPrefab);
        infoisShown = true;
        RoundScript.OnCalculationOfResult();
    }


    //Called when a player presses the skip button
    public void OnPlayerSkipPressed()
    {
            photonView.RPC("PlayerSkipPressedRPC", RpcTarget.MasterClient);
    }

    [PunRPC]
    void PlayerSkipPressedRPC()
    {
        playersSkipped +=1;
        Debug.Log("PLAYER PRESSED SKIP FOR " + playersSkipped + " TIMES");
        if (playersSkipped >= PhotonNetwork.PlayerList.Length) // All players have pressed the skip button
        {
            if (PhotonNetwork.IsMasterClient)
            {
                photonView.RPC("SkipRemainingTime", RpcTarget.All);
            }
            playersSkipped = 0; // Reset for the next round
        }
    }

    [PunRPC]
    void SkipRemainingTime()
    {
        StopAllCoroutines();
        timerIsRunning = false;

        if (PhaseStart && PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("CloseForPlayerChoice", RpcTarget.All);
        }
        Debug.Log("CARD TIMER SKIPPED");
    }
}
