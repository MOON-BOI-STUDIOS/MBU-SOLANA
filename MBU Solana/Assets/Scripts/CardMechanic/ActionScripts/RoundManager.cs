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

    private List<CardManager> CardManagersArray = new List<CardManager>();


    // Start is called before the first frame update
    void Start()
    {
        RoundScript = GetComponent<RoundScript>();

        // Player choice of Phase1, 
        //RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase1Options.ToString();
        //RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase2Options.ToString();
        //RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase3Options.ToString();

        // Enemy choice of Phase1
        //RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Phase1Options.ToString();
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
            InstantiateCardManager();
            RoundProgressor();   
        }
    }

    [PunRPC]
    void RoundProgressor()
    {
        StartCoroutine(CountDownTimer());
        NumberOfPhases += 1;
        OpenForPlayerChoice();
        PhaseStart = true;

        // Setting the timer
        timeRemaining = 10;
        timerIsRunning = true;
        time.color = Color.green;
    }

    IEnumerator CountDownTimer()
    {
        timerIsRunning = true;
        yield return new WaitForSeconds(10.0f);

        if (NumberOfPhases >= 3)
        {
            photonView.RPC("StartRoundResultCalculation", RpcTarget.All);
            //StartRoundResultCalculation();
        }
        else if (PhaseStart)
        {
            photonView.RPC("CloseForPlayerChoice", RpcTarget.All);
            //CloseForPlayerChoice();
        }
        else
        {
            photonView.RPC("RoundProgressor", RpcTarget.All);
            //OnRoundStart();
        }
       
    }

    [PunRPC]
    void OpenForPlayerChoice()
    {
        // Enable UI input with Buttons
        if (NumberOfPhases == 1)
        {
            Debug.Log("Choose for Phase 1");
            for (int i = 0; i < CardManagersArray.Count; i++)
            {
                CardManagersArray[i].openRPS();
            }
            // Instantiate the CardManager on each client
            // Open Rock Paper Scissor
            //CardManager.openRPS();
            //Saving Choices of NPC
            //int choice = RoundScript.GetEnemyScript().GetComponent<NPCScript>().ChoiceForPhase1();
            //RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Phase1Options = (TurnOptions.Phase1Turns)choice;
            //Debug.Log("Enemy Choice:" + (TurnOptions.Phase1Turns)choice);
        }
        else if (NumberOfPhases == 2)
        {
            Debug.Log("Choose for Phase 2");
            for (int i = 0; i < CardManagersArray.Count; i++)
            {
                CardManagersArray[i].OpenNormal();
            }
            //Open Normal Card Selection with choice of Light Attack Heavy Attack and Attack
            //CardManager.OpenNormal();
            //Saving Choices of NPC
            //int choice = RoundScript.GetEnemyScript().GetComponent<NPCScript>().ChoiceForPhase2();
            //RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Phase2Options = (TurnOptions.PhaseAttackTurns)choice;
            //Debug.Log("Enemy Choice:" + (TurnOptions.PhaseAttackTurns)choice);
        }
        else
        {
            Debug.Log("Choose for Phase 3");
            for (int i = 0; i < CardManagersArray.Count; i++)
            {
                CardManagersArray[i].OpenSpecial();
            }
            // Open Choice for Double Attack, Block Attack and Other Special Attack
            //CardManager.OpenSpecial();
            //Saving Choices of NPC
            //int choice = RoundScript.GetEnemyScript().GetComponent<NPCScript>().ChoiceForPhase3();
            //RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Phase3Options = (TurnOptions.PhaseDefenceTurns)choice;
            //Debug.Log("Enemy Choice:" + (TurnOptions.PhaseDefenceTurns)choice);
        }
    }

    [PunRPC]
    private void InstantiateCardManager()
    {
        Debug.Log(playerCanvases.Count);
        // Instantiate the CardManager prefab for each Player
        foreach (var canvas in playerCanvases.Values)
        {
            GameObject cardManager = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "Card prefabs"), Vector3.zero, Quaternion.identity); //Instantiate(cardManagerPrefab);
            cardManager.transform.SetParent(canvas.transform, false);

            if (cardManager != null)
            {
                CardManagersArray.Add(cardManager.GetComponent<CardManager>());
            }
            else
            {
                Debug.Log("cardManager is Null");
            }
      
            //canvas.SetParentforCards(cardManager);
        }
    }

    [PunRPC]
    void CloseForPlayerChoice()
    {
        Debug.Log("Stop Choosing");
        // Disable Ui input with Buttons
        PhaseStart = false;
        StartCoroutine(CountDownTimer());
        // Timers
        timeRemaining = 10;
        timerIsRunning = true;
        time.color = Color.red;
    }

    [PunRPC]
    void StartRoundResultCalculation()
    {
        // Shift COntrol to RoundScript for Choice Calculation and Consequences
        RoundScript.OnCalculationOfResult();
        //Debug.Log("Player Health: "+ RoundScript.GetPlayerScript().GetComponent<PlayerManager>().health);
        //Debug.Log("Enemy Health:" + RoundScript.GetEnemyScript().GetComponent<PlayerManager>().health);
        //Debug.Log("Player Defence:" +RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Defence);
        //Debug.Log("Enemy Defence:" + RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Defence);

    }
}
