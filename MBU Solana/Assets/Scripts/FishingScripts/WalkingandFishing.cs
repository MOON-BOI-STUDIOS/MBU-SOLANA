using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WalkingandFishing : MonoBehaviour
{
    #region Singleton
    public static WalkingandFishing instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    #endregion
    // Make this Script an Instance so that it can call the Fishing and Walking
    // Start is called before the first frame update
    public GameObject Walking;
    public GameObject Fishing;
    public GameObject Joystick;
    private bool IsFishing = false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
     
    public void IsWalkingActive()
    {
        // Change of Sprite from Fishing to walking
        if(IsFishing)
        {
            IsFishing = false;
            // Add Code for transition in coroutine
            Fishing.SetActive(false);
            Joystick.SetActive(true);
            Walking.SetActive(true);
        }
    }

    public void IsFishingActive(Transform fisingPosition)
    {
        //Change of Sprite from walking to Fishing
        if(!IsFishing)
        {
            IsFishing = true;
            // Add Code for transition in coroutine
            Joystick.SetActive(false);
            Walking.SetActive(false);
            Fishing.SetActive(true);
            Fishing.transform.position = fisingPosition.position;
        }
    }
}
