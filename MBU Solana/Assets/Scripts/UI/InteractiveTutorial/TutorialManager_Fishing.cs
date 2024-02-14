using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager_Fishing : MonoBehaviour
{
    public GameObject[] popUps;
    private int popUpIndex;
    public Fishing Fishing;

 
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
        if (popUpIndex == 0)
        {
            if (Fishing.buttonPressed == true)
            {
                popUpIndex++;
            }
        }
        else if(popUpIndex == 1)
        {
            if(Fishing.fishingDone == true)
            {
                popUpIndex++;
            }
        }
        else if(popUpIndex == 2)
        {
        
            if (Fishing.fishCaughts == true)
            {
                popUpIndex++;
                //Destroy(this);
            }
           
        }
         
    }

  
}
