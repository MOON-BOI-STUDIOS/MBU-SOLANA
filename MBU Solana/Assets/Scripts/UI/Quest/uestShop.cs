using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class uestShop : MonoBehaviour
{
    public Button quxt;
    public static uestShop instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
       
    }
    public void Start()
    {
        quxt.GetComponent<Image>().color = Color.white;
    }

    public void pressed()
    {
        quxt.GetComponent<Image>().color = Color.green;
    }
}
