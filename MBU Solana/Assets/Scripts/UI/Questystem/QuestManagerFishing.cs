using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class QuestManagerFishing : MonoBehaviour
{


    public static QuestManagerFishing instance;

    public int questObjective;
    public TextMeshProUGUI complted;
    public GameObject txt;
    public Button questbtn;
    public bool turnon;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        Qbjective1 = (PlayerPrefs.GetInt("Qbjective1") != 0);
        Objective2 = (PlayerPrefs.GetInt("Objective2") != 0);
        questObjective = PlayerPrefs.GetInt("questCompletefish");


    }
    public void pressed()
    {
        questbtn.GetComponent<Image>().color = Color.white;
    }

    public void Start()
    {
        quest1.gameObject.SetActive(true);
        quest2.gameObject.SetActive(false);
        fishQuests[0].collider2D.enabled = true;
        fishQuests[1].collider2D.enabled = false;
        questbtn.GetComponent<Image>().color = Color.green;

        if (questObjective == 2)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[0].collider2D.enabled = false;
            fishQuests[1].collider2D.enabled = true;
        }
        else if( questObjective == 3)
        {
            complted.text = "Quest Completed!".ToString();
            questbtn.interactable = false;
            questbtn.GetComponent<Image>().color = Color.white;
            txt.SetActive(false);
            complted.gameObject.SetActive(true);
        }
        else if (questObjective == 1)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[0].collider2D.enabled = false;
            fishQuests[1].collider2D.enabled = true;
        }
        else if ( questObjective > 3)
        {
            questbtn.interactable = false;
            questbtn.GetComponent<Image>().color = Color.white;
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
    public void Update()
    {
        Qbjective1 = fishQuests[0].QuestCompleted;
        Objective2 = fishQuests[1].QuestCompleted;
        PlayerPrefs.SetInt("Qbjective1", (Qbjective1 ? 1 : 0));
        PlayerPrefs.SetInt("Objective2", (Objective2 ? 1 : 0));
        questObjective = PlayerPrefs.GetInt("questCompletefish");

        if (questObjective == 2)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[0].collider2D.enabled = false;
            fishQuests[1].collider2D.enabled = true;
        }
        else if (questObjective == 3)
        {
            complted.text = "Quest Completed!".ToString();
            questbtn.interactable = false;
            questbtn.GetComponent<Image>().color = Color.red;
            txt.SetActive(false);
            complted.gameObject.SetActive(true);
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(false);
        }
        else if(questObjective == 1)
        {
            quest1.gameObject.SetActive(false);
            quest2.gameObject.SetActive(true);
            fishQuests[0].collider2D.enabled = false;
            fishQuests[1].collider2D.enabled = true;
        }
        else if (questObjective > 3)
        {
            questbtn.interactable = false;
        }

    }



}

