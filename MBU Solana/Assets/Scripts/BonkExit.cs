using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonkExit : MonoBehaviour
{
    public GameObject button;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            button.SetActive(true);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            button.SetActive(false);
        }
    }
}
