using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontdestroyonLoad : MonoBehaviour
{
    public static DontdestroyonLoad instance;

    [SerializeField] public static bool itutorialOver;
    [SerializeField] public static bool canshop;
    [SerializeField] public static bool isQuestion;
    [SerializeField] public static bool nextQuest;
    [SerializeField] public static bool nextQuest2;
    [SerializeField] public static bool canfish;

    private void Awake()
    {
        if(instance != null)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        itutorialOver = CollisionType.instance.isTutorialOver;
        canshop = CollisionType.instance.isShop;
        isQuestion = CollisionType.instance.isQuestions;
        nextQuest = QuestManagerFishing.instance.Qbjective1;
        nextQuest2 = QuestManagerFishing.instance.Objective2;
        canfish = CollisionType.instance.canFish;


    }
    public void Update()
    {

        //itutorialOver = CollisionType.instance.isTutorialOver;
        //canshop = CollisionType.instance.isShop;
        //isQuestion = CollisionType.instance.isQuestions;
        //nextQuest = QuestManagerFishing.instance.Qbjective1;
        //nextQuest2 = QuestManagerFishing.instance.Objective2;
        //canshop = CollisionType.instance.canFish;
        //Debug.Log(nextQuest);
        //Debug.Log(nextQuest2);
        //Debug.Log(canshop);
 


    }


}
