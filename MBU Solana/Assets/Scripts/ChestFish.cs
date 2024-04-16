using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChestFish : MonoBehaviour
{
    public Animator chest;
    public int coin;
    public GameObject button;
    public string animation;
    public AudioSource asource;
    public AudioClip chestOpen;
    public bool chestOpened;
    public Collider2D Collider;
    public Sprite chesto;
    public Sprite chestc;
    public SpriteRenderer SpriteRenderer;
    public int versions;


    private void Awake()
    {
        chestOpened = (PlayerPrefs.GetInt("ChestopenFish") != 0);
        versions = PlayerPrefs.GetInt("versions");
    }

    public void Start()
    {
        if (chestOpened == true || versions == 1)
        {
            SpriteRenderer.sprite = chesto;
            GetComponent<SpriteRenderer>().sprite = chesto;
            chest.enabled = false;


        }
        else if (chestOpened == false || versions == 0)
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
            if(chestOpened == false )
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
            if (chestOpened == false )
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
        PlayerPrefs.SetInt("ChestopenFish", (chestOpened ? 1 : 0));
        chestOpened = true;
        versions++;
        PlayerPrefs.GetInt("versions",versions);


    }

    public void CoinGain()
    {
        int currentcoins = PlayerPrefs.GetInt("Coins");
        currentcoins = currentcoins + coin;
        PlayerPrefs.SetInt("Coins",currentcoins);
        PlayerPrefs.SetInt("ChestopenFish", (chestOpened ? 1 : 0));
        chestOpened = true;

    }

    public void Update()
    {
        PlayerPrefs.SetInt("ChestopenFish", (chestOpened ? 1 : 0));
        PlayerPrefs.SetInt("versions", versions);
        if (chestOpened == true || versions == 1)
        {
            SpriteRenderer.sprite = chesto;
            GetComponent<SpriteRenderer>().sprite = chesto;
            chest.enabled = false;


        }
        else if (chestOpened == false || versions == 0)
        {
            SpriteRenderer.sprite = chestc;
            GetComponent<SpriteRenderer>().sprite = chestc;
            chest.enabled = true;

        }
    }


}
