using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// script by Oliver
// sid 1901981
// https://www.youtube.com/watch?v=Yri0C-E7xG4&list=PL32dY9P_7YSpifhyXmDgi_Zn1fuuNKZ8V - by Bev!Bird - link is to whole playlist
// script not in use
// for testing purposes
public class Test : MonoBehaviour
{
    [Header("References")]
    public Dialoguebase dialoguebase;

    /// <summary>
    /// starts dialogue
    /// </summary>
    public void TriggerDialogue()
    {
        DialogueManager.instance.EnqueueDialogue(dialoguebase);
    }

    private void Start()
    {
        TriggerDialogue(); // will start on game start
    }

 
}
