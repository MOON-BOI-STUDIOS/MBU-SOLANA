using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class C_RPS : MonoBehaviour
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public Image art;
   


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


    }

}
