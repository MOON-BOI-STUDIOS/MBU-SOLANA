using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject[] popUps;
    public int popUpIndex;
    public PlayerController controller;
    public NPCDialogueManager nPC;
 
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

        if(popUpIndex == 0)
        {
            if (controller.isMoving)
            {
                popUpIndex++;
            }
        }
        else if(popUpIndex == 1)
        {
            if(DialogueManager.instance.Interact == true)
            {
                popUpIndex++;
                Debug.Log("test end");
            }
 
        }
        
    }
}
