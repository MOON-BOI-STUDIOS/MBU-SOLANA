using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonClick : MonoBehaviour
{

    public static ButtonClick instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        Pressed = (PlayerPrefs.GetInt("noTutorialFish") != 0);

    }
    public bool Pressed;

    public void Update()
    {
        if(TutorialManager_Fishing.instance.Openinventory == true)
        {
            this.enabled = true;
        }
        if(Pressed == true)
        {
            this.enabled = false;
        }

    }

    public void Next()
    {
        Pressed = true;
        PlayerPrefs.SetInt("Pressed", (Pressed ? 1 : 0));
    }
}
