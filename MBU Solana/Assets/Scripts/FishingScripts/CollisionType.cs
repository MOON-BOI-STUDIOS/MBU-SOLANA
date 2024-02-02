using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This class is used to implement the collision type Interface
public class CollisionType : MonoBehaviour, ICollisiontype
{
    [Header("ObjectTag")]
    public string NameTag;
    // Reference for UI
    private bool isTutorialOver = false;

    public string GetTag()
    {
        return NameTag;
    }

    public void callUIFunctions()
    {
        switch(NameTag)
        {
            case "FishingZone":
                // Call the function to open pop up menu
                break;
            
            case "FishermanSpot":
                // Get the bool for isTutorialOver
                if(!isTutorialOver)
                {
                    // Call the button here for dialog script
                }
                else
                {
                    //Call fucntion to Shop // open the UI to Shop
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