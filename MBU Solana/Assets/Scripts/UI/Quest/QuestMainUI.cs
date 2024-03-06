using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class QuestMainUI : MonoBehaviour
{
    public static QuestMainUI instance;

    public int questObjective;

    public Animator txtFlash;
    public Color color;

    public TextMeshProUGUI qusttxt;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        Qbjective1main = (PlayerPrefs.GetInt("Qbjective1main") != 0);

    }


    public QuestManinScene[] fishQuests;
    public bool Qbjective1main;
    public Button quest1;
    public Button questBtn;
    public TextMeshProUGUI complted;
    public GameObject txt;

    public void Start()
    {
        //questBtn.GetComponent<Image>().color = Color.green;
        txtFlash.enabled = true;
        questObjective = PlayerPrefs.GetInt("questCompletemain");
        
    }

    public void pressed()
    {
        //questBtn.GetComponent<Image>().color = Color.white;
        txtFlash.enabled = false;
        qusttxt.color = color;
    }

    public void Update()
    {
        Qbjective1main = fishQuests[0].QuestCompleted;
       
        PlayerPrefs.SetInt("Qbjective1main", (Qbjective1main ? 1 : 0));
       
        if(Qbjective1main == true)
        {
            quest1.gameObject.SetActive(false);
            complted.gameObject.SetActive(true);
            complted.text = "Quest Completed!".ToString();
            questBtn.interactable = false;
            questBtn.GetComponent<Image>().color = Color.red;
            txt.SetActive(false);
        }

        //Debug.Log(questObjective);
       
    }
}
