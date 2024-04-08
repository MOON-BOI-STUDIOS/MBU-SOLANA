using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Quest : MonoBehaviour
{
    public Image questItem;
    public Color completedColor;
    public Color activeColor;
    public Color currentColor;

    public QuestArrow arrow;
    public Quest[] allQuests;

    public bool QuestCompleted;

    public BoxCollider2D collider2D;

    public int questComplete;

    
   public bool buttonisPressed = false;
    public bool Pressed = false;

    public static Quest instance;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }


        //QuestCompleted = (PlayerPrefs.GetInt("QuestCompleted") != 0);

    }

    private void Start()
    {
        //if(QuestCompleted == true)
        //{
        //    questComplete++;
            
        //}
        allQuests = FindObjectsOfType<Quest>();
        currentColor = questItem.color;
        questComplete = PlayerPrefs.GetInt("questCompletefish");
    }
    public void FinishQuest()
    {
        questItem.GetComponent<Button>().interactable = false;
        currentColor = completedColor;
        questItem.color = activeColor;
        arrow.gameObject.SetActive(false);
        questComplete++;
        PlayerPrefs.SetInt("questCompletefish", questComplete);
       
   
    }



 
    //public void OnTriggerEnter2D(Collider2D collision)
    //{
    //    if(collision.tag == "Player" )
    //    {
    //        if(QuestCompleted == true)
    //        {
    //            FinishQuest();
    //            //Destroy(gameObject);
    //            //this.gameObject.SetActive(false);
    //            collider2D.enabled = false;
    //            PlayerPrefs.SetInt("QuestCompleted", (QuestCompleted ? 1 : 0));

    //        }

    //    }
    //}

    public void OnQuestClick() 
    {
        arrow.gameObject.SetActive(true);
        arrow.target = this.transform;
        foreach(Quest quest in allQuests)
        {
            quest.questItem.color = quest.currentColor;
        }
        questItem.color = activeColor;
    }

    public void QuestComplete()
    {
        QuestCompleted = true;
        collider2D.enabled = false;
        FinishQuest();
    }

}
