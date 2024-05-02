using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CardViz : MonoBehaviour
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public Image art;
    public TextMeshProUGUI damage;
    public TextMeshProUGUI cost;

    public CardObject cardObject;


    private void Start()
    {
        LoadCard(cardObject);
    }
    public void LoadCard(CardObject co) 
    {
        cardObject = co;
        title.text = co.cardName;
        description.text = co.description;
        art = co.art;
        damage.text = co.damage.ToString();
        cost.text = co.cost.ToString();

    }

}
