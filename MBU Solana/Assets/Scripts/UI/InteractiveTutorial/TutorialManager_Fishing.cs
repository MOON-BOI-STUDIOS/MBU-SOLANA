using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager_Fishing : MonoBehaviour
{
    public GameObject[] popUps;
    private int popUpIndex;
    public Fishing Fishing;
    public bool noTutorial;
    public bool Openinventory;
    public bool closeinventory;

    public static TutorialManager_Fishing instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    
        noTutorial = (PlayerPrefs.GetInt("noTutorial") != 0);
    }


    public void Start()
    {
        if(noTutorial == true)
        {
            this.enabled = false;
        }
    }

    public void Opinv()
    {
        Openinventory = true;
    }
    public void cloinv()
    {
        closeinventory = true;
    }


    void Update()
    {
        for (int i = 0; i< popUps.Length; i++)
        {
            if(i == popUpIndex)
            {
                popUps[i].SetActive(true);
            }
            else
            {
                popUps[i].SetActive(false);
            }
           
        }
        if(popUpIndex == 1)
        {
            if(Openinventory == true)
            {
                popUpIndex++;
            }
        }
        else if(popUpIndex == 2)
        {
            if(closeinventory == true)
            {
                popUpIndex++;
            }
        }
        else if (popUpIndex == 3)
        {
            if (Fishing.buttonPressed == true)
            {
                popUpIndex++;
            }
        }
        else if (popUpIndex == 4)
        {
            if (Fishing.fishingDone == true)
            {
                popUpIndex++;
                noTutorial = true;
                PlayerPrefs.SetInt("noTutorial", (noTutorial ? 1 : 0));

            }
        }
       
       
         
    }

  
}
