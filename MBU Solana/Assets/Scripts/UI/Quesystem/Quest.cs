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
    }

 

    public void OntriggerEnter2D(Collision2D collision)
    {
        if (collision.collider.tag == "Player")
        {
            FinishQuest();
            Destroy(gameObject);
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
