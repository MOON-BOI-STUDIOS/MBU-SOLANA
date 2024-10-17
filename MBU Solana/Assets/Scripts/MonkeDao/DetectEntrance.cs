using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectEntrance : MonoBehaviour
{
    [SerializeField] GameObject exitButton;
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.tag == "Player")
            exitButton.SetActive(true);
    }

    private void OnTriggerExit2D(Collider2D other) {
        if(other.tag == "Player")
            exitButton.SetActive(false);
    }
}
