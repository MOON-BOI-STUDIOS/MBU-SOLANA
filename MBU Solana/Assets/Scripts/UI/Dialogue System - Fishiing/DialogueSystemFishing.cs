using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogueSystemFishing : MonoBehaviour
{
    public float proximity;
    public string[] dialogues;
    private Transform player;
    public GameObject interactButton;
    bool isClose;
    public DialogueOptions dialogue;



    
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        //DialogueManagerFishing.instance.EnqueueDialogue(dialogue);

    }

    // Update is called once per frame
    void Update()
    {
        //checks if the player is close to the NPC
        if (Vector2.Distance(player.position, transform.position) <= proximity + 1f)
        {
            isClose = true;
        }
        else
        {
            isClose = false;
        }

        if (isClose)
        {
            if (Vector2.Distance(player.position, transform.position) <= proximity)
            {
                interactButton.SetActive(true);
            }
            else
            {

                interactButton.SetActive(false);
            }
        }




        //    if (Vector2.Distance(player.position, transform.position) > proximity)
        //{
        //    currentDialogue = -1;
        //}
    }

    
        
    //triggers the current dialogue, depending on the current dialogue integer, which increases with every button press
    public void TriggerDialogue()
    {

        DialogueManagerFishing.instance.EnqueueDialogue(dialogue);
        //if (Vector2.Distance(player.position, transform.position) <= proximity)
        //{
            
        //    currentDialogue++;

        //    if (currentDialogue> dialogues.Length - 1)
        //    {
        //        text.text = "";
        //        dialogueBox.SetActive(false);
        //    }
        //    else
        //    {
        //        dialogueBox.SetActive(true);
        //        triggeredDialogue = true;
        //        text.text = dialogues[currentDialogue];
                
        //    }
        //}
        
    }
}
