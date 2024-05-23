using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

public class CostManager : MonoBehaviour
{

    public static CostManager Instance;

    public int playersroom;

    public TextMeshProUGUI[] playerScoreText;

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

