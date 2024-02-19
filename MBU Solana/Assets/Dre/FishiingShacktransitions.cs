using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishiingShacktransitions : MonoBehaviour
{
   public static FishiingShacktransitions instance;
    public CollisionType[] collision;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void Update()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    public void StartBool()
    {
        for (int i = 0; i > collision.Length; i++) 
        {

            collision[i].isTutorialOver = true;

        }
    }



}
