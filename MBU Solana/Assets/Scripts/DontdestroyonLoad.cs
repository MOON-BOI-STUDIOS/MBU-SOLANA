using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontdestroyonLoad : MonoBehaviour
{
    public static DontdestroyonLoad instance;

    [SerializeField] public static bool itutorialOver;
    [SerializeField] public static bool canshop;
    [SerializeField] public static bool isQuestion;
    [SerializeField] public static bool noTutorial;
    [SerializeField] public static bool noTutorial2;
    [SerializeField] public static bool nextQuest;
    [SerializeField] public static bool nextQuest2;

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
        noTutorial = TutorialManager_Fishing.instance.noTutorial;
        noTutorial2 = TutorialManager.instance.noTutorial;
    }
    public void Update()
    {

        itutorialOver = CollisionType.instance.isTutorialOver;
        itutorialOver = CollisionType.instance.isTutorialOver;
        canshop = CollisionType.instance.isShop;
        isQuestion = CollisionType.instance.isQuestions;
        noTutorial = TutorialManager_Fishing.instance.noTutorial;
        noTutorial2 = TutorialManager.instance.noTutorial;
        nextQuest = QuestManagerFishing.instance.Qbjective1;
        nextQuest2 = QuestManagerFishing.instance.Objective2;

    }


}
