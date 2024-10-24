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



    public Animator transitions;
    public GameObject tutorial;
    public GameObject fishingMec;
    public Fishing fishing;
    public DialoguebaseFishing DB;
    public GameObject HUD1;
    public GameObject txt;

    public Transform tutorialPos;
    public WarningMessageText warningMessageText;
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
            //Joystick.SetActive(true);
            Walking.SetActive(true);
            Mecha.SetActive(false);
            jolt.SetActive(false);
            HUD1.SetActive(true);
#if UNITY_IOS || UNITY_ANDROID
        Joystick.SetActive(true);
#endif
            CollisionType.instance.isTutorialOver = false;
            PlayerPrefs.SetInt("isTutorialOver", (CollisionType.instance.isTutorialOver ? 1 : 0));
            txt.gameObject.SetActive(false);
            CollisionType.instance.isTutorialOver = false;
            CollisionType.instance.isShop = true;
            CollisionType.instance.canFish = true;
            PlayerPrefs.SetInt("isTutorialOver", (CollisionType.instance.isTutorialOver ? 1 : 0));
            PlayerPrefs.SetInt("isShop", (CollisionType.instance.isShop ? 1 : 0));
            PlayerPrefs.SetInt("canFish", (CollisionType.instance.canFish ? 1 : 0));

        }
    }

    public void IsFishingActive()
    {
        // Check if there are equippable items in Hotbar
        //Items[] equippedItems = ItemInventory.instance.Checkcanfish(); 
        //and there is one rod and a bait to fish with
        //Change of Sprite from walking to Fishing
        if(!IsFishing && ItemInventory.instance.Checkcanfish())
        {
            Walking.SetActive(false);
            // Equipping rods and bait
            IsFishing = true;
            // Sending the items over to the Fishing Script
            //fishing.GetequippedItems(equippedItems);
            //Choose Sprite for wide variety of Sprites with different rods
            // Add Code for transition in coroutine
            StartCoroutine(FishTransitionf());
            //Fishing.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            FishingObj.SetActive(true);
            jolt.SetActive(true);
            //fishingMec.SetActive(true);
            Mecha.SetActive(true);
         #if UNITY_IOS || UNITY_ANDROID
            Joystick.SetActive(false);
#endif
            HUD1.SetActive(false);
            txt.gameObject.SetActive(true);

            //Fishing.transform.position = fisingPosition.position;
        }
        else
        {
            warningMessageText.ShowError("Please equip rod and bait");
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
#if UNITY_IOS || UNITY_ANDROID
            Joystick.SetActive(false);
#endif
            jolt.SetActive(true);
            //fishingMec.SetActive(true);
            tutorial.SetActive(true);
            //Mecha.SetActive(true);
            Walking.SetActive(false);
            FishingObj.SetActive(true);
            DialogueManagerFishing.instance.CloseOptions();
            //FishingObj.transform.position = FishingPositions[Random.Range(0, FishingPositions.Length - 1)].position;
            FishingObj.transform.position = tutorialPos.position;
            //Fishing.transform.position = fisingPosition.position;
            HUD1.SetActive(false);
            txt.gameObject.SetActive(true);
          

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
