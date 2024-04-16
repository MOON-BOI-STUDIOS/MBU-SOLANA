using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class NPCDialogueManager : MonoBehaviour
{
    public AudioClip cursorSound;
<<<<<<< HEAD:MBU Solana/Assets/NPCDialogueManager.cs
    private AudioSource aSource;
    public bool Interact;
=======
    public AudioSource aSource;
    
>>>>>>> Game_Dev:MBU Solana/Assets/Scripts/NPCDialogueManager.cs
    // Start is called before the first frame update
    void Start()
    {
        aSource = GetComponent<AudioSource>();
    }

    private void Update()
    {
        //PC Controls
        if(Input.GetButtonDown("Interact"))
        {
            interact();
        }
    }
    public void interact()
    {
<<<<<<< HEAD:MBU Solana/Assets/NPCDialogueManager.cs
        Interact = true;
        aSource.PlayOneShot(cursorSound);
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).GetComponent<DialogueSystem>().TriggerDialogue();
=======
      
        
        //for (int i = 0; i < transform.childCount; i++)
        //{
        //    transform.GetChild(i).GetComponent<DialogueSystem>().TriggerDialogue();
>>>>>>> Game_Dev:MBU Solana/Assets/Scripts/NPCDialogueManager.cs
            
        //}
    }
    public void sound()
    {
        aSource.PlayOneShot(cursorSound);
    }
}
