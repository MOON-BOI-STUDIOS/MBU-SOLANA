using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject[] popUps;
    public int popUpIndex;
    public PlayerController controller;
    public NPCDialogueManager nPC;
    public Quest quest;
    public GameObject[] PCpopUps;

    void Update()
    {

#if UNITY_WEBGL || UNITY_STANDALONE
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
               
            }
 
        }
        else if(popUpIndex == 2)
        {
            if(quest.buttonisPressed == true)
            {
                popUpIndex++;
              
            }
        }
        else if( popUpIndex == 3)
        {
            if(quest.Pressed == true)
            {
                popUpIndex++;
                Debug.Log("test end");
                Destroy(this);
            }
        }


#if UNITY_IOS || UNITY_ANDROID
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
               
            }
 
        }
        else if(popUpIndex == 2)
        {
            if(quest.buttonisPressed == true)
            {
                popUpIndex++;
              
            }
        }
        else if( popUpIndex == 3)
        {
            if(quest.Pressed == true)
            {
                popUpIndex++;
                Debug.Log("test end");
                Destroy(this);
            }
        }
#endif
#endif



    }
}
