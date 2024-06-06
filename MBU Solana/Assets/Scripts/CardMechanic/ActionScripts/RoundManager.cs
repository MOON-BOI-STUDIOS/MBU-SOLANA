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

    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;

    public TextMeshProUGUI enemyph1, enemyph2, enemyph3, plph1, plph2, plph3;

    public GameObject screen;

    public bool isCoolDown = false;

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
        Debug.Log("Number of Phases:" + NumberOfPhases);
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("OpenForPlayerChoice", RpcTarget.All);
        }
        PhaseStart = true;
        gameDuration = 10f;
        time.color = Color.green;
        isCoolDown = false;


        playerCanvases[1].ResetCardSelected(); //Resetting the card selection on player 1
        playerCanvases[2].ResetCardSelected(); //Resetting the card selection on player 2


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
            photonView.RPC("StartRoundResultCalculation", RpcTarget.All);
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

        // Turning on the Gameobject for timer as true. Doing it here as this function is only triggered once
        TimerObject.SetActive(true);
    }

    [PunRPC]
    void CloseForPlayerChoice()
    {
        Debug.Log("Stop Choosing");
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
        RoundScript.OnCalculationOfResult();
        // Time.timeScale = 0;
        // screen.SetActive(true);
        // if (RoundScript != null && RoundScript.GetPlayerScript() != null && RoundScript.GetEnemyScript() != null)
        // {
        //     Debug.Log("This is called");
        //     plph1.text = RoundScript.GetPlayerScript().Phase1Options.ToString();
        //     plph2.text = RoundScript.GetPlayerScript().Phase2Options.ToString();
        //     plph3.text = RoundScript.GetPlayerScript().Phase3Options.ToString();
        //     enemyph1.text = RoundScript.GetEnemyScript().Phase1Options.ToString();
        //     enemyph2.text = RoundScript.GetEnemyScript().Phase2Options.ToString();
        //     enemyph3.text = RoundScript.GetEnemyScript().Phase3Options.ToString();
        // }
    }

    // Called when a player presses the skip button
    public void OnPlayerSkipPressed()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("PlayerSkipPressedRPC", RpcTarget.MasterClient, PhotonNetwork.LocalPlayer.ActorNumber);
        }
    }

    [PunRPC]
    void PlayerSkipPressedRPC(int playerId)
    {
        playersSkipped++;
        if (playersSkipped >= 2) // Both players have pressed the skip button
        {
            photonView.RPC("SkipRemainingTime", RpcTarget.All);
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
    }
}