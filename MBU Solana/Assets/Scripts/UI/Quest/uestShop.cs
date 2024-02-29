using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class uestShop : MonoBehaviour
{
    public Button quxt;
    public static uestShop instance;
    public int objectiveindex;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        objectiveindex = PlayerPrefs.GetInt("questComplete");
    }
    public void Start()
    {
        quxt.GetComponent<Image>().color = Color.white;
        if(objectiveindex > 1)
        {
            quxt.interactable = false;
        }
    }

    public void Update()
    {
        objectiveindex = PlayerPrefs.GetInt("questComplete");
        if (objectiveindex > 1)
        {
            quxt.interactable = false;
        }
    }
    public void pressed()
    {
        quxt.GetComponent<Image>().color = Color.green;
    }
    public void Unpressed()
    {
        quxt.GetComponent<Image>().color = Color.white;
    }

}
