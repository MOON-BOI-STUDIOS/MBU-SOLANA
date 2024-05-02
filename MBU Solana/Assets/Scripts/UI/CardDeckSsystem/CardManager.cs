using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardManager : MonoBehaviour
{
    public CardVizRPS[] cardVizRPs;
 



    public void Start()
    {
        
    
        foreach(CardVizRPS c in cardVizRPs)
        {
            c.gameObject.SetActive(true);
        }
     
    }
}
