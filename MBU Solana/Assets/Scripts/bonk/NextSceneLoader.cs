using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextSceneLoader : MonoBehaviour
{
    bool isCalled = false;
    [SerializeField] int nextSceneNumber;
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            if(!isCalled)
            {
                GameManager.Inst.nextScene(nextSceneNumber);
                //collision.gameObject.GetComponent<PlayerController>().enabled = false;
                isCalled = true;
            }

        }
    }
}
