using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontdestroyonLoad : MonoBehaviour
{
    public static DontdestroyonLoad instance;
    [SerializeField]
    public static bool itutorialOver;
    public static bool canshop;
    public static bool isQuestion;

    public static bool nextQuest;

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

    }
    public void Update()
    {

        itutorialOver = CollisionType.instance.isTutorialOver;
        itutorialOver = CollisionType.instance.isTutorialOver;
        canshop = CollisionType.instance.isShop;
        isQuestion = CollisionType.instance.isQuestions;

    }


}
