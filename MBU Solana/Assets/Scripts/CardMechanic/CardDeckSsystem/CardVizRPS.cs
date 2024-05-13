using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CardVizSpecial : MonoBehaviour
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public Image art;


    public SpecialCard cardObject;


    private void Start()
    {
        LoadCard(cardObject);
    }
    public void LoadCard(SpecialCard co) 
    {
        cardObject = co;
        title.text = co.cardName;
        description.text = co.description;
        art = co.art;


    }

}
