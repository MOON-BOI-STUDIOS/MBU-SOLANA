using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RoundManager : MonoBehaviour
{
    private bool PhaseStart = false;
    private int NumberOfPhases = 0;
    private RoundScript RoundScript;


    public CardManager CardManager;


    // Start is called before the first frame update
    void Start()
    {
        RoundScript = GetComponent<RoundScript>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnRoundStart()
    {
        StartCoroutine(CountDownTimer());
        OpenForPlayerChoice();
        PhaseStart = true;
        NumberOfPhases += 1;
    }

    IEnumerator CountDownTimer()
    {
        yield return new WaitForSeconds(5.0f);
        if (NumberOfPhases <= 3)
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
            // Open Rock Paper Scissor
            CardManager.openRPS();
        }
        else if (NumberOfPhases == 2)
        {
            //Open Normal Card Selection with choice of Light Attack Heavy Attack and Attack
            CardManager.OpenNormal();
        }
        else
        {
            // Open Choice for Double Attack, Block Attack and Other Special Attack
            CardManager.OpenSpecial();
        }
    }

    void CloseForPlayerChoice()
    {
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
