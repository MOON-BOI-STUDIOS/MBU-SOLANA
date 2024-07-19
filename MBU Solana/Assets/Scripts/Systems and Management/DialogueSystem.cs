using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogueSystem : MonoBehaviour
{
    public float proximity;
    public string[] dialogues;
    private Transform player;
    public GameObject interactButton;
    bool isClose;
    public Dialoguebase dialogue;
    public bool dialoguebegan;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        CheckProximity();
        UpdateInteractButton();
    }

    // Checks if the player is close to the NPC
    void CheckProximity()
    {
        isClose = Vector2.Distance(player.position, transform.position) <= proximity + 1f;
    }

    // Updates the interact button based on proximity and dialogue state
    void UpdateInteractButton()
    {
        if (isClose)
        {
            if (Vector2.Distance(player.position, transform.position) <= proximity)
            {
                if (dialoguebegan)
                {
                    interactButton.SetActive(false);
                }
                else
                {
                    interactButton.SetActive(true);
                }
            }
            else
            {
                interactButton.SetActive(false);
                dialoguebegan = false;
            }
        }
        else
        {
            interactButton.SetActive(false);
        }
    }

    // Ends the dialogue
    public void EndDialogue()
    {
        dialoguebegan = false;
    }

    // Triggers the dialogue
    public void TriggerDialogue()
    {
        dialoguebegan = true;
        DialogueManager.instance.EnqueueDialogue(dialogue);
    }

    // Handles collision exit
    public void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            DialogueManager.instance.endOfDialogue();
            EndDialogue(); // Ensure to reset dialogue state
        }
    }
}
