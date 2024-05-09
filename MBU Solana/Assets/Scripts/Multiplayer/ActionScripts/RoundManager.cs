using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class RoundManager : MonoBehaviour
{
    private bool PhaseStart = false;
    private int NumberOfPhases = 0;
    private RoundScript RoundScript;

    public TextMeshProUGUI time;
    public float timeRemaining = 10;
    public bool timerIsRunning = false;

    public CardManager CardManager;


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


    public void OnRoundStart()
    {
        StartCoroutine(CountDownTimer());
        NumberOfPhases += 1;
        OpenForPlayerChoice();
        PhaseStart = true;
       
    }

    IEnumerator CountDownTimer()
    {
        timerIsRunning = true;
        yield return new WaitForSeconds(10.0f);

        if (NumberOfPhases >= 3)
        {
            StartRoundResultCalculation();
        }
        else if (PhaseStart)
        {
            CloseForPlayerChoice();
        }
        else
        {
            OnRoundStart();
        }
       
    }

    void OpenForPlayerChoice()
    {
        // Enable UI input with Buttons
        if (NumberOfPhases == 1)
        {
            Debug.Log("Choose for Phase 1");
            // Open Rock Paper Scissor
            CardManager.openRPS();
        }
        else if (NumberOfPhases == 2)
        {
            Debug.Log("Choose for Phase 2");
            //Open Normal Card Selection with choice of Light Attack Heavy Attack and Attack
            CardManager.OpenNormal();
        }
        else
        {
            Debug.Log("Choose for Phase 3");
            // Open Choice for Double Attack, Block Attack and Other Special Attack
            CardManager.OpenSpecial();
        }
    }

    void CloseForPlayerChoice()
    {
        Debug.Log("Stop Choosing");
        // Disable Ui input with Buttons
        PhaseStart = false;
        StartCoroutine(CountDownTimer());
    }

    void StartRoundResultCalculation()
    {
        // Shift COntrol to RoundScript for Choice Calculation and Consequences
        RoundScript.OnCalculationOfResult();
    }
}