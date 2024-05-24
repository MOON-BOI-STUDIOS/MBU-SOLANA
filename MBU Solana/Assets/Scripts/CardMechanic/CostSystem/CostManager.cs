using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

public class CostManager : MonoBehaviour
{

    public static CostManager Instance;

    public int Total;


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
      
    }

  
    public void BuyItem(C_Special special)
    {
        Total = Total - special.cost;
    }

    public void shuffle(int amount)
    {
        Total = Total - amount;
    }
}

