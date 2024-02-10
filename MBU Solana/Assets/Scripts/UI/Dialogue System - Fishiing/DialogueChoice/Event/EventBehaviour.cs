using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="New Event", menuName ="event")]
public class EventBehaviour : ScriptableObject
{
    public GameObject OBJECT;
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

    //public void Swap()
    //{
    //    WalkingandFishing.instance.IsFishingActive();
    //}

    public void OpenShop()
    {
        DialogueManagerFishing.instance.OPenShop();
        DialogueManagerFishing.instance.CloseOptions();

    }
}
