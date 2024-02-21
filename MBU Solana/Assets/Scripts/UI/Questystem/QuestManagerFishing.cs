using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuestManagerFishing : MonoBehaviour
{


    public static QuestManagerFishing instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        
    }

    public Quest[] fishQuests;



    public bool Qbjective1;
    public bool Objective2;


    public Button quest1;
    public Button quest2;

    public enum fishingQuests
    {
        None,
        TheLegendaryCatch
    }
    public void Start()
    {
        if (Qbjective1 == true)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[1].collider2D.enabled = true;
            fishQuests[0].collider2D.enabled = false;
        }
        else
        {
            quest1.gameObject.SetActive(true);
            quest2.gameObject.SetActive(false);
            fishQuests[0].collider2D.enabled = true;
            fishQuests[1].collider2D.enabled = false;
        }
    }

    public void Update()
    {
   
        Qbjective1 = fishQuests[0].QuestCompleted;
        Objective2 = fishQuests[1].QuestCompleted;


        if (Qbjective1 == true)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[1].collider2D.enabled = true;
            fishQuests[0].collider2D.enabled = false;
        }
        else
        {
            quest1.gameObject.SetActive(true);
            quest2.gameObject.SetActive(false);
            fishQuests[0].collider2D.enabled = true;
            fishQuests[1].collider2D.enabled = false;
        }
    }

}

