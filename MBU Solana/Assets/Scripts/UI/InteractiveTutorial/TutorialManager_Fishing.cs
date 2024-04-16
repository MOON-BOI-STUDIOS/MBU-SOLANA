using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager_Fishing : MonoBehaviour
{
    public GameObject[] popUps;
    private int popUpIndex;
<<<<<<< HEAD

 
=======
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
    
        noTutorial = (PlayerPrefs.GetInt("noTutorialFish") != 0);
    }


    public void Start()
    {
        if(noTutorial == true)
        {
            this.enabled = false;
        }
        else if (noTutorial == false)
        {
            this.enabled = true;
        }
    }

    public void Opinv()
    {
        Openinventory = true;
        //StartCoroutine(wait());
    }
    public void cloinv()
    {
        closeinventory = true;
    }


>>>>>>> Game_Dev
    void Update()
    {
        for (int i = 0; i< popUps.Length; i++)
        {
            if(i == popUpIndex)
            {
<<<<<<< HEAD
                popUps[popUpIndex].SetActive(true);
            }
            else
            {
                popUps[popUpIndex].SetActive(false);
            }
           // player input for tutorial
        }
    }
=======
                popUps[i].SetActive(true);
            }
            else
            {
                popUps[i].SetActive(false);
            }
           
        }
        if(popUpIndex == 0)
        {
            if(Openinventory == true)
            {
                popUpIndex++;
            }
        }
        else if(popUpIndex == 1)
        {
            if (closeinventory == true) 
           {
                popUpIndex++;
           }
           
            
        }
        else if (popUpIndex == 2)
        {
            if (Fishing.buttonPressed == true)
            {
                popUpIndex++;
            }
        }
        else if (popUpIndex == 3)
        {
            if (Fishing.fishingDone == true)
            {
                popUpIndex++;
                noTutorial = true;
                PlayerPrefs.SetInt("noTutorialFish", (noTutorial ? 1 : 0));

            }
        }
       
       
         
    }

    public IEnumerator wait()
    {
        yield return new WaitForSeconds(26f);
    }
  
>>>>>>> Game_Dev
}
