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
    public TextMeshProUGUI damage;
    public TextMeshProUGUI cost;

    public RPS cardObject;


    private void Start()
    {
        LoadCard(cardObject);
    }
    public void LoadCard(RPS co) 
    {
        cardObject = co;
        title.text = co.cardName;
        description.text = co.description;
        art = co.art;
        cost.text = co.cost.ToString();

    }

}
