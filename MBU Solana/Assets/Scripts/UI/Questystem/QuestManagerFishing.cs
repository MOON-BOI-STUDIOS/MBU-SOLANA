using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManagerFishing : MonoBehaviour
{

    public Quest[] fishQuests;

    public GameObject panel;

    public bool Qbjective1;
    public bool Objective2;
    
    public enum fishingQuests
    {
        None,
        TheLegendaryCatch
    }

    public void Update()
    {
   
        Qbjective1 = fishQuests[0].QuestCompleted;
 
    }
}
