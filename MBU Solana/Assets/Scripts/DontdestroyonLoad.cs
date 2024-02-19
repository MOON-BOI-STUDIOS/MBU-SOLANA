using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontdestroyonLoad : MonoBehaviour
{
    public static DontdestroyonLoad instance;
    [SerializeField]
    public static bool itutorialOver;

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

    }
    public void Update()
    {
        
       
        itutorialOver = CollisionType.instance.isTutorialOver;
        Debug.Log(itutorialOver);
    }


}
