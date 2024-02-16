using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishiingShacktransitions : MonoBehaviour
{
    public GameManager gameManager;
    public int index;

    public void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            gameManager.nextScene(index);
        }
    }

}
