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
            quest1.interactable = false;
            quest2.interactable = true;
        }
        else
        {
            quest2.interactable = false;
            quest1.interactable = true;
        }
    }

    public void Update()
    {
   
        Qbjective1 = fishQuests[0].QuestCompleted;
        Objective2 = fishQuests[1].QuestCompleted;


        if (Qbjective1 == true)
        {
            quest1.interactable = false;
            quest2.interactable = true;
        }
        else
        {
            quest2.interactable = false;
            quest1.interactable = true;
        }
    }

}

