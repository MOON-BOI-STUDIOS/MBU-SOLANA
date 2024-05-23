using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CostManager : MonoBehaviour
{

    public static CostManager Instance;

    public int costTotal1;
    public int costTotal2;

    public void Awake()
    {
        if (CostManager.Instance == null)
        {
            CostManager.Instance = this;
        }
    }


    public void BuyItem()
    {

    }
}

