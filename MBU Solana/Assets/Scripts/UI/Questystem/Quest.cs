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

    
   public bool buttonisPressed = false;
    public bool Pressed = false;


    private void Start()
    {
        allQuests = FindObjectsOfType<Quest>();
        currentColor = questItem.color;
    }
    public void FinishQuest()
    {
        questItem.GetComponent<Button>().interactable = false;
        currentColor = completedColor;
        questItem.color = activeColor;
        arrow.gameObject.SetActive(false);
       
   
    }

    public void ButtonPressed()
    {
        buttonisPressed = true;
    }

    public void PressedButton()
    {
        Pressed = true;
    }

 
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Player")
        {
            QuestCompleted = true;
            FinishQuest();
            //Destroy(gameObject);
            //this.gameObject.SetActive(false);
            collider2D.enabled = false;
        }
    }

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

}
