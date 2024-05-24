using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

public class CostManager : MonoBehaviour
{

    public static CostManager Instance;

    public int Total;

    public bool canBUY;


    public void Awake()
    {
        if (CostManager.Instance == null)
        {
            CostManager.Instance = this;
        }
    }

    public void Start()
    {


        Total = 100;
        Debug.Log("Has Brought");
        canBUY = true;

    }

 

    public void BuyItem(C_Special special)
    {
        Total = Total - special.cost;
        Debug.Log("Has Brought");

        if (special.cost < Total)
        {
            this.enabled = false;
            canBUY = false;
            Debug.Log("Not Enough cost");
        }
        else
        {
            this.enabled = true;
            canBUY = true;
        }
    }

    public void shuffle(int amount)
    {
        Total = Total - amount;
        Debug.Log("Has Brought");
        if (amount < Total)
        {
            this.enabled = false;
            canBUY = false;
            Debug.Log("Not Enough cost");
        }
        else
        {
            this.enabled = true;
            canBUY = true;
        }
    }
}

