using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class UnityEventHandler : MonoBehaviour, IPointerDownHandler
{

    public UnityEvent eventHandler;
    public DialoguebaseFishing dialoguebase;

   public void OnPointerDown(PointerEventData pointerEventData)
   {
        eventHandler.Invoke();
        DialogueManagerFishing.instance.CloseOptions();
        if (dialoguebase != null)
        {
            DialogueManagerFishing.instance.EnqueueDialogue(dialoguebase);
        }
   }
}
