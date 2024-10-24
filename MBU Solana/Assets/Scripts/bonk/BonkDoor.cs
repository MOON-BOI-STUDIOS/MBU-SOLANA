using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonkDoor : MonoBehaviour
{
    [SerializeField] Animator _animator;
    [SerializeField] Collider2D bonkEntranceCollider;

    private void OnTriggerEnter2D(Collider2D other)
    {
        // Assuming the object that triggers the event has a tag "Player"
        if (other.gameObject.CompareTag("Player"))
        {
            _animator.SetBool("openDoor", true); // Set "isOpen" to its opposite state
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _animator.SetBool("openDoor", false); // Set "isOpen" to its opposite state
        }
    }

    public void EnableDoorCollider()
    {
        bonkEntranceCollider.enabled = true;
    }

    public void DisableDoorCollider()
    {
        bonkEntranceCollider.enabled = false;
    }
}
