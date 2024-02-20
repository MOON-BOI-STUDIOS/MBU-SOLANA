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
    public GameObject FishingObj;
    public GameObject Joystick;
    private bool IsFishing = false;
    public Transform[] FishingPositions;
    public GameObject jolt;
    public GameObject Mecha;
    public GameObject panel;
    public GameObject ArcMecha;


    public Animator transitions;
    public GameObject tutorial;
    public GameObject fishingMec;
    public Fishing fishing;
    public DialoguebaseFishing DB;
    public GameObject HUD1;
    public GameObject HUD2;

    public Transform tutorialPos;
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
            FishingObj.SetActive(false);
            Joystick.SetActive(true);
            Walking.SetActive(true);
            Mecha.SetActive(false);
            jolt.SetActive(false);
            
        }
    }

    public void IsFishingActive()
    {
        // Check if there are equippable items in Hotbar
        Items[] equippedItems = ItemInventory.instance.Checkcanfish(); 
        //and there is one rod and a bait to fish with
        //Change of Sprite from walking to Fishing
        if(!IsFishing && equippedItems[0] != null && equippedItems[1] != null)
        {
            // Equipping rods and bait
            IsFishing = true;
            // Sending the items over to the Fishing Script
            fishing.GetequippedItems(equippedItems);
            //Choose Sprite for wide variety of Sprites with different rods
            // Add Code for transition in coroutine
            StartCoroutine(FishTransitionf());
            //Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            FishingObj.SetActive(true);
            jolt.SetActive(true);
            fishingMec.SetActive(true);
            HUD1.SetActive(false);
            HUD2.SetActive(false);
            Mecha.SetActive(true);
          
            //Fishing.transform.position = fisingPosition.position;
        }
        else
        {
            Debug.Log("Cannot fish as one of the equipped items is null");
        }
    }


    public void IsFishingBeforeTutorial()
    {
        //Change of Sprite from walking to Fishing
        if (!IsFishing)
        {
            IsFishing = true;
            // Add Code for transition in coroutine
            StartCoroutine(FishTransitionf());
            Joystick.SetActive(false);
            jolt.SetActive(true);
            fishingMec.SetActive(true);
            tutorial.SetActive(true);
            Mecha.SetActive(true);
            ArcMecha.SetActive(false);
            Walking.SetActive(false);
            FishingObj.SetActive(true);
            DialogueManagerFishing.instance.CloseOptions();
            //FishingObj.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            FishingObj.transform.position = tutorialPos.position;
            //Fishing.transform.position = fisingPosition.position;
        }
    }


    

    public IEnumerator FishTransitionf()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        yield return new WaitForSeconds(1.5f);
        panel.SetActive(false);
    }


    public IEnumerator FishTransitionfo()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        Walking.SetActive(false);
        yield return new WaitForSeconds(1f);
        FishingObj.SetActive(true);
        FishingObj.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
        
        panel.SetActive(false);
    }

    public IEnumerator FishTransitionw()
    {
        panel.SetActive(true);
        transitions.Play("fishingAnimations");
        yield return new WaitForSeconds(1.5f);
        Joystick.SetActive(true);
        Walking.SetActive(true);
        FishingObj.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
        panel.SetActive(false);
    }

    public void TurnoffTutorial()
    {
        
        jolt.SetActive(true);
        jolt.SetActive(true);
       

    }



}
