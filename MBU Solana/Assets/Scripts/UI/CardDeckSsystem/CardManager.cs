using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class CardManager : MonoBehaviour
{
    [Header("cards")]
    public CardVizRPS[] cardVizRPs;
    public CardViz[] cardVizs;
    public CardVizSpecial[] cardVizSpecials;
    [Header("Sub special cards")]
    public CardVizSpecial[] enemyAttacks;
    public CardVizSpecial[] enemyBlocks;
    public CardVizSpecial[] enemyDefends;
    public cardChoice cardchoice;
    public int cardselection;
    public GameObject shufflebutton;





    public void Start()
    {
        Debug.Log("cards are intialised");
        //cardchoice = cardChoice.Default;

        int rn = Random.Range(0, 7);



    }

    public void openRPS()
    {
        Debug.Log("Open RPS");
        cardchoice = cardChoice.RPS;
        cardselection = 1;
    }

    public void OpenNormal()
    {
        cardchoice = cardChoice.Normal;
        cardselection = 2;
    }

    public void OpenSpecial()
    {
        cardchoice = cardChoice.Special;
        cardselection = 3;
        int ra = Random.Range(0, enemyAttacks.Length);
        enemyAttacks[ra].gameObject.SetActive(true);
        int rb = Random.Range(0, enemyBlocks.Length);
        enemyBlocks[rb].gameObject.SetActive(true);
        int rd = Random.Range(0, enemyDefends.Length);
        enemyDefends[rd].gameObject.SetActive(true);
    }

    public void Shuffle()
    {


        if (cardselection == 1)
        {
            Debug.Log("Card are shuffled ahhhh rps");
        }
        else if (cardselection == 2)
        {
            Debug.Log("Card are shuffled ahhhh normal");
        }
        else if (cardselection == 3)
        {
            foreach (CardVizSpecial cs in cardVizSpecials)
            {
                cs.gameObject.SetActive(false);
            }
        }

        Debug.Log("Card are shuffled ahhhh special");
        int ra = Random.Range(0, enemyAttacks.Length);
        enemyAttacks[ra].gameObject.SetActive(true);
        int rb = Random.Range(0, enemyBlocks.Length);
        enemyBlocks[rb].gameObject.SetActive(true);
        int rd = Random.Range(0, enemyDefends.Length);
        enemyDefends[rd].gameObject.SetActive(true);
    }



    
    

    public void Update()
    {
        switch (cardchoice)
        {
            case cardChoice.Normal:
                foreach (CardViz cv in cardVizs)
                {
                    cv.gameObject.SetActive(true);
                }
                //Debug.Log("Open cards");
                foreach (CardVizRPS c in cardVizRPs)
                {
                    c.gameObject.SetActive(false);
                }
                foreach (CardVizSpecial cs in cardVizSpecials)
                {
                    cs.gameObject.SetActive(false);
                }
                //Debug.Log("other cards are closed");
                shufflebutton.SetActive(false);
                break;
            case cardChoice.RPS:
                //Debug.Log("Open cards");
                foreach (CardVizRPS c in cardVizRPs)
                {
                    c.gameObject.SetActive(true);
                }
                foreach (CardViz cv in cardVizs)
                {
                    cv.gameObject.SetActive(false);
                }
                foreach (CardVizSpecial cs in cardVizSpecials)
                {
                    cs.gameObject.SetActive(false);
                }
                //Debug.Log("other cards are closed");
                shufflebutton.SetActive(false);
                break;
            case cardChoice.Special:
                foreach (CardViz cv in cardVizs)
                {
                    cv.gameObject.SetActive(false);
                }
                foreach (CardVizRPS c in cardVizRPs)
                {
                    c.gameObject.SetActive(false);
                }
                //Debug.Log("other cards are closed");
                shufflebutton.SetActive(true);
                break;
            case cardChoice.Default:
                shufflebutton.SetActive(false);
                break;
        }

        
        
    }
}

public enum cardChoice
{
    Default,
    Normal,
    RPS,
    Special
}
