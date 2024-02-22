using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject[] popUps;
    public int popUpIndex;
    public int PCpopUpIndex;
    public PlayerController controller;
    public NPCDialogueManager nPC;
    public Quest quest;
    public GameObject[] PCpopUps;
    public GameObject tutorial;
    public bool noTutorial;



    public static TutorialManager instance;

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

    void Update()
    {
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
                noTutorial = true;
                PlayerPrefs.SetInt("noTutorial", (noTutorial ? 1 : 0));

            }
        }
#else
for (int i = 0; i < PCpopUps.Length; i++)
        {
            if (i == PCpopUpIndex)
            {
                PCpopUps[i].SetActive(true);
            }
            else
            {
                PCpopUps[i].SetActive(false);
            }

        }

        if (PCpopUpIndex == 0)
        {
            if (controller.isMoving)
            {
                popUpIndex++;
            }
        }
        else if (PCpopUpIndex == 1)
        {
            if (DialogueManager.instance.Interact == true)
            {
                popUpIndex++;

            }

        }
        else if (PCpopUpIndex == 2)
        {
            if (quest.buttonisPressed == true)
            {
                popUpIndex++;

            }
        }
        else if (PCpopUpIndex == 3)
        {
            if (quest.Pressed == true)
            {
                popUpIndex++;
                Debug.Log("test end");
                noTutorial = true;
                PlayerPrefs.SetInt("noTutorial", (noTutorial ? 1 : 0));
            }
        }

#endif
    }
}
