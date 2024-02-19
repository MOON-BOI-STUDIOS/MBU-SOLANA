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
    public GameObject Mecha;
    public GameObject panel;
    public GameObject HUD1;
    public GameObject HUD2;

    public Animator transitions;
    public GameObject tutorial;
    public GameObject fishingMec;
  

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
            StartCoroutine(FishTransitionw());
            Fishing.SetActive(false);
            Joystick.SetActive(true);
            Walking.SetActive(true);
            Mecha.SetActive(false);
            jolt.SetActive(false);
            HUD1.SetActive(false);
            HUD2.SetActive(false);

        }
    }

    public void IsFishingActive()
    {
        // Check if there are equippable items in Hotbar 
        //and there is one rod and a bait to fish with
        //Change of Sprite from walking to Fishing
        if(!IsFishing && ItemInventory.instance.Checkcanfish())
        {
            // Equipping rods and bait
            IsFishing = true;
            // Add Code for transition in coroutine
            StartCoroutine(FishTransitionf());
            //Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            Fishing.SetActive(true);
            jolt.SetActive(true);
            fishingMec.SetActive(true);
            HUD1.SetActive(false);
            HUD2.SetActive(false);


            //Fishing.transform.position = fisingPosition.position;
        }
    }


    public void IsFishingBeforeTutorial()
    {
        //Change of Sprite from walking to Fishing
        if (!IsFishing)
        {
            IsFishing = true;
            // Add Code for transition in coroutine
            StartCoroutine(FishTransitionfo());
            Joystick.SetActive(false);
            
            jolt.SetActive(true);
            fishingMec.SetActive(true);
            HUD1.SetActive(false);
            HUD2.SetActive(false);
            tutorial.SetActive(true);

            //Fishing.transform.position = fisingPosition.position;
        }
    }

    

    public IEnumerator FishTransitionf()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        Walking.SetActive(false);
        yield return new WaitForSeconds(2f);
        Fishing.SetActive(true);
        Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
        panel.SetActive(false);
    }


    public IEnumerator FishTransitionfo()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        Walking.SetActive(false);
        yield return new WaitForSeconds(1f);
        Fishing.SetActive(true);
        panel.SetActive(false);
        Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
       
       
    }

    public IEnumerator FishTransitionw()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        yield return new WaitForSeconds(1f);
        Joystick.SetActive(false);
        Walking.SetActive(false);
        Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
        panel.SetActive(false);
    }

    public void TurnonTutorial()
    {
        tutorial.SetActive(true);
        jolt.SetActive(true);
       

    }



}
