using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CardVizRPS : MonoBehaviour
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public Image art;

    public RPS co;


    private void Start()
    {
        LoadCard();
        Debug.Log("Working");


    }
    public void LoadCard() 
    {
        
        title.text = co.cardName;
        description.text = co.description;
        art.sprite = co.art.sprite;
        Debug.Log(art);

    }

}
