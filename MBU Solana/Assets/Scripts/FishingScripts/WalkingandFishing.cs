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
    public Transform[] FishingPositions;
    public GameObject jolt;
    public GameObject panel;

    public Animator transitions;
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
            StartCoroutine(FishTransition());
            Fishing.SetActive(false);
            Joystick.SetActive(true);
            Walking.SetActive(true);
            
        }
    }

    public void IsFishingActive()
    {
        //Change of Sprite from walking to Fishing
        if(!IsFishing)
        {
            IsFishing = true;
            // Add Code for transition in coroutine
            StartCoroutine(FishTransition());
            Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            Joystick.SetActive(false);
            Walking.SetActive(false);
            Fishing.SetActive(true);
            jolt.SetActive(true);
            panel.SetActive(true);
            //Fishing.transform.position = fisingPosition.position;
        }
    }

    public IEnumerator FishTransition()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        yield return new WaitForSeconds(1);
        panel.SetActive(false);
    }

   
}
