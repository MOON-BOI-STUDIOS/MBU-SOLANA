using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CoinUI : MonoBehaviour
{
    public int coins;
    public TextMeshProUGUI cointxt;

    // Start is called before the first frame update
    void Start()
    {
        coins = PlayerPrefs.GetInt("Coins");
    }

    // Update is called once per frame
    void Update()
    {
        coins = PlayerPrefs.GetInt("Coins");
        cointxt.text = "Coins:" + coins.ToString();
    }
}
