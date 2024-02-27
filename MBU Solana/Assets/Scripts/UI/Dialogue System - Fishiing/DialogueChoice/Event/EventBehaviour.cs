using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="New Event", menuName ="event")]
public class EventBehaviour : ScriptableObject
{
   

    public void turnoff()
    {
        DialogueManagerFishing.instance.dialogueBox.SetActive(false);
    }

    public void test()
    {
        Debug.Log("Test");
    }

    public void Optionsoff()
    {
        DialogueManagerFishing.instance.CloseOptions();
    }

    public void Swap()
    {
        WalkingandFishing.instance.IsFishingBeforeTutorial();
    }

    public void OtherSwap()
    {
        WalkingandFishing.instance.IsFishingActive();
    }


    public void OpenShop()
    {
        DialogueManagerFishing.instance.OPenShop();
        DialogueManagerFishing.instance.CloseOptions();

    }

    public void closeTutoial ()
    {
        WalkingandFishing.instance.TurnoffTutorial();
    }

    public void startDialogue(DialoguebaseFishing db)
    {
        DialogueManagerFishing.instance.EnqueueDialogue(db);
    }

    public void questionDialogue()
    {
        CollisionType.instance.isQuestions = true;
        PlayerPrefs.SetInt("isQuestions", (CollisionType.instance.isQuestions ? 1 : 0));
    }

    public void startrTutorial()
    {
        CollisionType.instance.isTutorialOver = true;
        CollisionType.instance.isQuestions = false;
        CollisionType.instance.isShop = true;
        PlayerPrefs.SetInt("isQuestions", (CollisionType.instance.isQuestions ? 1 : 0));
        PlayerPrefs.SetInt("isTutorialOver", (CollisionType.instance.isTutorialOver ? 1 : 0));
        PlayerPrefs.SetInt("isShop", (CollisionType.instance.isShop ? 1 : 0));

    }

    public void OffTutoral()
    {
        CollisionType.instance.isTutorialOver = false;
        CollisionType.instance.isShop = true;
        CollisionType.instance.canFish = true;
        WalkingandFishing.instance.IsWalkingActive();


    }
    public void awardRodsandBait()
    {
        AddInventoryItemScript.instance.InitialAward();
    }
    public void SellFish()
    {
        ButtonScript.instance.SwitchParent();
        ButtonScript.instance.SetSellingItems(true);
    }

    public void TurnonQuest()
    {
        uestShop.instance.pressed();
    }

}
