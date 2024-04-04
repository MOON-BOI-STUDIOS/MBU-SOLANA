using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chests : MonoBehaviour
{
    public Animator chest;
    public int coin;
    public GameObject button;
    public string animation;
    public AudioSource asource;
    public AudioClip chestOpen;
    public AudioClip minningSuccess;
    public bool chestOpened;
    public Collider2D Collider;
    public Sprite chesto;
    public Sprite chestc;
    public SpriteRenderer SpriteRenderer;
    public bool isPickingUP;
    public Animator dre;
    public Vector3 postion;
    public PlayerAnimator player;
    public Items ChestItemObj;
  
    public void Start()
    {
        chestOpened = (PlayerPrefs.GetInt("chestOpened") != 0);
        if (chestOpened == true)
        {
            SpriteRenderer.sprite = chesto;
            GetComponent<SpriteRenderer>().sprite = chesto;
            chest.enabled = false;


        }
        else if (chestOpened == false)
        {
            SpriteRenderer.sprite = chestc;
            GetComponent<SpriteRenderer>().sprite = chestc;
            chest.enabled = true;

        }
    }
    public void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            if(chestOpened == false)
            {
                button.SetActive(true);
            }
            else
            {
                button.SetActive(false);
            }
           

        }
    }
    public void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            if (chestOpened == false)
            {
                button.SetActive(false);
            }
            else
            {
                button.SetActive(false);
            }
                
        }
    }

    public void Openchest()
    {
        chest.Play(animation);
        asource.PlayOneShot(chestOpen);
        button.SetActive(false);
        // Add Image To the Inventory
        AddInventoryItemScript.instance.AddToInventory(ChestItemObj);
    }



    public void finishanim()
    {
        isPickingUP = true;
        dre.SetBool("isPickingUP", isPickingUP);
        chestOpened = true;
        PlayerPrefs.SetInt("chestOpened", (chestOpened ? 1 : 0));
    }

    //public void CoinGain()
    //{
    //    int currentcoins = PlayerPrefs.GetInt("Coins");
    //    currentcoins = currentcoins + coin;
    //    PlayerPrefs.SetInt("Coins",currentcoins);
    
    //    chestOpened = true;
    //    PlayerPrefs.SetInt("chestOpened", (chestOpened ? 1 : 0));

    //}

    public void Update()
    {
        chestOpened = (PlayerPrefs.GetInt("chestOpened") != 0);
        if (chestOpened == true)
        {
            SpriteRenderer.sprite = chesto;
            GetComponent<SpriteRenderer>().sprite = chesto;
            chest.enabled = false;

        }
        else if(chestOpened == false)
        {
            SpriteRenderer.sprite = chestc;
            GetComponent<SpriteRenderer>().sprite = chestc;
            chest.enabled = true;

        }

        if (Input.GetKeyDown(KeyCode.I))
        {
            isPickingUP = true;
            dre.SetBool("isPickingUP", isPickingUP);
            postion = player.lastDirection;
        }
    }


    

}
