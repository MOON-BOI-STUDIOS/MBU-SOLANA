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

    public void OpenTutorial()
    {
        WalkingandFishing.instance.TurnonTutorial();
    }

    public void startDialogue(DialoguebaseFishing db)
    {
        DialogueManagerFishing.instance.EnqueueDialogue(db);
    }

    public void questionDialogue()
    {
        CollisionType.instance.isQuestions = true;
    }

    public void startrTutorial()
    {
        CollisionType.instance.isTutorialOver = true;
    }

}
