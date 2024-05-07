using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RoundManager : MonoBehaviour
{
    private bool PhaseStart = false;
    private int NumberOfPhases = 0;
    private RoundScript RoundScript;
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
