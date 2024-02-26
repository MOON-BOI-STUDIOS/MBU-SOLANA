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

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            button.SetActive(true);
        }
    }
    public void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            button.SetActive(false);
        }
    }

    public void Openchest()
    {
        chest.Play(animation);
        asource.PlayOneShot(chestOpen);
        
    }

    public void CoinGain()
    {
        int currentcoins = PlayerPrefs.GetInt("Coins");
        currentcoins = currentcoins + coin;
        PlayerPrefs.SetInt("Coins",currentcoins);
        this.enabled = false;
    }


}
