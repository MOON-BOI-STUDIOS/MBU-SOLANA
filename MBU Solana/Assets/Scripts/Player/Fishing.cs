using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Fishing : MonoBehaviour
{
    public Animator dreAnim;
    public Transform hook;
    public GameObject finshingMechanic;

    public int fishMarkerCounter = 0;
    public GameObject[] filledfishUI;
    public GameObject[] unfilledfishUI;
    public Transform greenArea;
    Vector3 greenAreaScale;
    private float[] greenscale = {0.2f, 0.10f, 0.05f, 0.35f, 0.25f, 0.05f, 0.08f, 0.15f};
    private int numOfTaps;

    public GameObject joltButton, fishButton;
    public TextMeshProUGUI fishesText;

    private AudioSource audioS;
    public AudioClip select, reject, fishCaughtAudio;

    public bool buttonPressed;
    public bool finished;
    public bool fishingDone;
    public bool fishCaughts;
    public FishingController5 controller5;

    public CollisionType[] collisionType;
    public DialoguebaseFishing db;
    public GameObject backMecha;
    public GameObject backarcade;

    private RodItemObj currentRod;
    private BaitItemObjj currentBait;

    private Items[] Itemsequipped;

    public static Fishing instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(PlayerPrefs.GetInt("LastLocation"));
        if (PlayerPrefs.GetInt("LastLocation")!=3)
        {
            PlayerPrefs.SetInt("LastLocation", 1);
  
            backMecha.SetActive(true);
        }
        else
        {
            backarcade.SetActive(true);
        }

        audioS = GetComponent<AudioSource>();
        greenAreaScale = new Vector3(greenArea.localScale.x, greenArea.localScale.y, greenArea.localScale.z);
        // show number of unfilled fish underneath the bar
        Numberofunfilledfishes();
    }

    // Update is called once per frame
    void Update()
    {
        //Shows the number of fish, the player has
        fishesText.text = "FISH: " + PlayerPrefs.GetInt("Fishes").ToString();

        //moves the hook from left to right
        hook.transform.localPosition = new Vector3(Mathf.PingPong(Time.time * 0.5f, 0.37f), hook.transform.localPosition.y, hook.transform.localPosition.z);

        //Sets the width of the green area, according to number of successful attempts. This basically is the level design for the fishing part
        greenArea.localScale = greenAreaScale;
        //Call to set filled fish image and the value of greenAreaScale
        SetFishandGreenArea();
        /*if (fishMarkerCounter == 0) { fishUI[0].SetActive(false); fishUI[1].SetActive(false); fishUI[2].SetActive(false); greenAreaScale.x = 0.2f; }
        if (fishMarkerCounter == 1) { fishUI[0].SetActive(true); greenAreaScale.x = 0.10f; }
        if (fishMarkerCounter == 2) { fishUI[0].SetActive(true); fishUI[1].SetActive(true); greenAreaScale.x = 0.05f; }
        if (fishMarkerCounter == 3) { fishUI[0].SetActive(true); fishUI[1].SetActive(true); fishUI[2].SetActive(true); greenAreaScale.x = 0; }

        for(int i = 0; i < collisionType.Length; i++)
        {
            if (collisionType[i].isTutorialOver == true)
            {
                DialogueManagerFishing.instance.EnqueueDialogue(db);
                joltButton.SetActive(false);
                fishButton.SetActive(false);
                finshingMechanic.SetActive(false);
            }
        }*/

        if(fishCaughts == true)
        {
            DialogueManagerFishing.instance.EnqueueDialogue(db);
            joltButton.SetActive(false);
            fishButton.SetActive(false);
            finshingMechanic.SetActive(false);
        }
      
    }
    private void Numberofunfilledfishes()
    {
        if(numOfTaps < unfilledfishUI.Length)
        {
            for(int i = 0;i < numOfTaps;i++)
            {
                unfilledfishUI[i].SetActive(true);
            }
        }
    }
    private void SetFishandGreenArea()
    {
        filledfishUI[fishMarkerCounter].SetActive(true);
        greenAreaScale.x = greenscale[fishMarkerCounter];
    }
    public void GetequippedItems(Items[] items)
    {
        Debug.Log("Rod name:" + Itemsequipped[0].name + " bait name:" + Itemsequipped[1].name);
        currentRod = (RodItemObj)Itemsequipped[0];
        currentBait = (BaitItemObjj)Itemsequipped[1];
        //Set num of Taps after calculation
        CalculationOfFishOptions();
    }
    // Calculate the chance of cat
    private void CalculationOfFishOptions()
    {
        // Rarity of the rod
        float rarity = Random.Range(currentRod.Minrarity, currentRod.Maxrarity);
        //Luck to catch the dragon fish with this particular bait
        float luck = currentBait.luck;
        //chance to catch the dragon fish 
        float chance = currentRod.luck;
        // The total chance to catch the dragon fish. Divided by 300 as there are three
        // factors effecting the catching of dragonFish
        float dragonFishChance = (rarity + luck + chance)/ 300;
        //This randomnum is out of 100 so it perfectly defines chance of catching a type of fish
        float randomnum = Random.Range(1,100);
        if(randomnum <= dragonFishChance)
        {
            numOfTaps = 8;
        }
        else
        {
            int randomChoice = Random.Range(0,2);
            numOfTaps = randomChoice == 0 ? currentRod.MinTaps: currentRod.MaxTaps;
        }
    }
    

    //triggered through the button. starts the jolt animation
    public void jolt()
    {
        buttonPressed = true;
        dreAnim.SetTrigger("Fish");
    }

    //enables the fishing button, and hides the jolt button. triggered through animation
    public void startFishing()
    {
        joltButton.SetActive(false);
        fishButton.SetActive(true);
        finshingMechanic.SetActive(true);
        //fishingDone = true;
    }
  
    //fish button controls
    public void fish()
    {

        //successful attempt
        if(hook.GetChild(0).GetComponent<Hook>().isGreenArea == true)
        {

            audioS.PlayOneShot(select);
            fishMarkerCounter++;
            fishingDone = true;
            if (fishMarkerCounter == 3)
            {

                controller5.CatchFish(numOfTaps);
                if (!finished)
                {
                    StartCoroutine(setBool());
                }
                else
                {
                    StopCoroutine(setBool());
                }
                StartCoroutine(fishCaught());

            }


        }
        //unsuccesful attempt
        else
        {
            //make all the images of the fish to unfilled
            unfillFishUI();
            audioS.PlayOneShot(reject);
            fishMarkerCounter = 0;

        }
    }
    private void unfillFishUI()
    {
        for(int i = 0;i < fishMarkerCounter;i++)
        {
            filledfishUI[i].SetActive(false);
        }
    }

    //fish gets caught. increases a fish in the player prefs. plays success audio
    public void collectFish()
    {
        audioS.PlayOneShot(fishCaughtAudio);
        PlayerPrefs.SetInt("Fishes", PlayerPrefs.GetInt("Fishes") + 1);
    }

    // on a succesfull attempt. triggers reel animation, resets fishcounter to 0.
    IEnumerator fishCaught()
    {
        dreAnim.SetTrigger("Reel");
   
        yield return new WaitForSeconds(0.5f);
       
        finshingMechanic.SetActive(false);
        fishMarkerCounter = 0;

        joltButton.SetActive(true);
        fishButton.SetActive(false);
    }

    public IEnumerator setBool()
    {
        fishCaughts = true;

        yield return new WaitForSeconds(11f);

        fishCaughts = false;
        finished = true;

    }
}
