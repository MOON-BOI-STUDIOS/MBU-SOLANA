using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class uestShop : MonoBehaviour
{
    public Button quxt;
    public static uestShop instance;
    public int objectiveindex;
    public Collider2D collider;
    public Animator txtflash;
    public Color color;
    public TextMeshProUGUI qusttxt;

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
        collider.enabled = false;
    }

    public void Update()
    {
        objectiveindex = PlayerPrefs.GetInt("questCompletefish");
        if (objectiveindex > 2)
        {
            quxt.interactable = false;
            quxt.GetComponent<Image>().color = Color.white;
        }
    }
    public void pressed()
    {
        //quxt.GetComponent<Image>().color = Color.green;
        txtflash.enabled = true;
    }
    public void Unpressed()
    {
        //quxt.GetComponent<Image>().color = Color.white;
        txtflash.enabled = false;
        qusttxt.color = color;
    }

}
