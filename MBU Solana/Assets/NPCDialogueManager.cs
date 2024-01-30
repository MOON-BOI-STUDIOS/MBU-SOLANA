using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class NPCDialogueManager : MonoBehaviour
{
    public AudioClip cursorSound;
    private AudioSource aSource;
    
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
      
        
        //for (int i = 0; i < transform.childCount; i++)
        //{
        //    transform.GetChild(i).GetComponent<DialogueSystem>().TriggerDialogue();
            
        //}
    }
    public void sound()
    {
        aSource.PlayOneShot(cursorSound);
    }
}
