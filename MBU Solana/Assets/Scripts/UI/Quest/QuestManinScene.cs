using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class QuestManinScene : MonoBehaviour
{
    public Image questItem;
    public Color completedColor;
    public Color activeColor;
    public Color currentColor;
    public Sprite currentSprite, activeSprite, completedSprite;

    public QuestArrowMain arrow;
    public QuestManinScene[] allQuests;

    public bool QuestCompleted;

    public BoxCollider2D collider2D;

    public int questCompletemain;

    
   public bool buttonisPressed;
    public bool Pressed;


    private void Start()
    {
        allQuests = FindObjectsOfType<QuestManinScene>();
        //currentColor = questItem.color;
        currentSprite = questItem.sprite;
        QuestCompleted =  (PlayerPrefs.GetInt("Qbjective1main") != 0);
    }
    public void FinishQuest()
    {
        questItem.GetComponent<Button>().interactable = false;
        //currentColor = completedColor;
        currentSprite = completedSprite;
        //questItem.color = activeColor;
        questItem.sprite = activeSprite;
        arrow.gameObject.SetActive(false);
        questCompletemain++;
        QuestCompleted = true;
        PlayerPrefs.SetInt("questCompletemain", questCompletemain);
       
   
    }

    public void Buttonpressed()
    {
        buttonisPressed = true;
    }
    public void pressed()
    {
        Pressed = true;
    }

    //public void OnTriggerEnter2D(Collider2D collision)
    //{
    //    if(collision.tag == "Player")
    //    {
    //        if(QuestCompleted == true)
    //        {
    //            FinishQuest();
    //            //Destroy(gameObject);
    //            //this.gameObject.SetActive(false);
    //            collider2D.enabled = false;
    //        }
      
    //    }
    //}

    public void OnQuestClick() 
    {
        arrow.gameObject.SetActive(true);
        arrow.target = this.transform;
        foreach(QuestManinScene quest in allQuests)
        {
            //quest.questItem.color = quest.currentColor;
            quest.questItem.sprite = quest.currentSprite;
        }
        //questItem.color = activeColor;
        questItem.sprite = activeSprite;
    }

    public void QuestComplete()
    {
        QuestCompleted = true;
        FinishQuest();
        //Destroy(gameObject);
        //this.gameObject.SetActive(false);
        collider2D.enabled = false;
    }

}
