using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This class is used to implement the collision type Interface
public class CollisionType : MonoBehaviour, ICollisiontype
{
    [Header("ObjectTag")]
    public string NameTag;
    // Reference for UI
    public bool isTutorialOver;
    public bool canFish;
    public bool isShop;
    public bool isQuestions;
    public DialoguebaseFishing db;
    public DialoguebaseFishing dbshop;
    public DialoguebaseFishing dbt;
    public DialoguebaseFishing dqbt;

    public static CollisionType instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        isTutorialOver = DontdestroyonLoad.itutorialOver;
    }

    public Transform GetGameObjectPosition {get { return gameObject.transform; }}


    public string GetTag()
    {
        return NameTag;
    }

    public void Update()
    {
        //Debug.Log(isTutorialOver);
    }

    public void callUIFunctions()
    {
        switch(NameTag)
        {
            case "FishingZone":
                // Call the function to open pop up menu
                if (canFish == true && isTutorialOver == false) 
                {
                    DialogueManagerFishing.instance.EnqueueDialogue(db);
                }
                else if( canFish == false &&isTutorialOver == true)
                {
                    DialogueManagerFishing.instance.EnqueueDialogue(dbt);
                }
   
                break;
            
            case "FishermanSpot":
                // Get the bool for isTutorialOver
                if(!isShop)
                {
                    if (isQuestions)
                    {
                        DialogueManagerFishing.instance.EnqueueDialogue(dqbt);
                    }
                    else
                    {
                        DialogueManagerFishing.instance.EnqueueDialogue(db);
                    }
                    // Call the button here for dialog script
                   
                }
                else
                {
                    //Call fucntion to Shop // open the UI to Shop
                    DialogueManagerFishing.instance.EnqueueDialogue(dbshop);
                }
              
               
                break;  
        }
    }

    public void DestroyFishingChoiceUI()
    {
        //Destroy the Dialog box which asks of whether you want to fish
        
        //Choice 2
    }
}