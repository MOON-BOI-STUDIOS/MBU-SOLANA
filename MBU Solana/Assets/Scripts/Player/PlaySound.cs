using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaySound : MonoBehaviour
{
    [SerializeField] AudioSource audioSource;
    [SerializeField] AudioClip teleportSound;

public void PlayTeleportSound()
    {
        audioSource.PlayOneShot(teleportSound);
    }
}
