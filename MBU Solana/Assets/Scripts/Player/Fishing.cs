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
    public GameObject[] fishUI;
    public Transform greenArea;
    Vector3 greenAreaScale;

    public GameObject joltButton, fishButton;
    public TextMeshProUGUI fishesText;

    private AudioSource audioS;
    public AudioClip select, reject, fishCaughtAudio;

    public bool buttonPressed;
    public bool fishingDone;
    public bool fishCaughts;
    public FishingController5 controller5;

    public CollisionType[] collisionType;
    public DialoguebaseFishing db;
    public GameObject backMecha;
    public GameObject backarcade;

    private Items[] Itemsequipped;
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
        if (fishMarkerCounter == 0) { fishUI[0].SetActive(false); fishUI[1].SetActive(false); fishUI[2].SetActive(false); greenAreaScale.x = 0.2f; }
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
        }
      
    }
    public void GetequippedItems(Items[] items)
    {
        Itemsequipped = items;
        Debug.Log("Rod name:" + Itemsequipped[0].name + " bait name:" + Itemsequipped[1].name);
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
        fishingDone = true;
    }
  
    //fish button controls
    public void fish()
    {
        
        //successful attempt        
        if(hook.GetChild(0).GetComponent<Hook>().isGreenArea == true)
        {
           
            audioS.PlayOneShot(select);
            fishMarkerCounter++;

            if (fishMarkerCounter == 3)
            {
                
                controller5.CatchFish();
                StartCoroutine(fishCaught());
                for (int i = 0; i < collisionType.Length; i++)
                {
                    collisionType[i].isTutorialOver = false;
                }
            }
            else
            {
                for (int i = 0; i < collisionType.Length; i++)
                {
                    collisionType[i].isTutorialOver = false;
                }
            }
        }
        //unsuccesful attempt
        else
        {
            audioS.PlayOneShot(reject);
            fishMarkerCounter = 0;
            for (int i = 0; i < collisionType.Length; i++)
            {
                collisionType[i].isTutorialOver = false;
            }
               
        }
    }

    //fish gets caught. increases a fish in the player prefs. plays success audio
    public void collectFish()
    {
        audioS.PlayOneShot(fishCaughtAudio);
        PlayerPrefs.SetInt("Fishes", PlayerPrefs.GetInt("Fishes") + 1);
        for (int i = 0; i < collisionType.Length; i++)
        {
            collisionType[i].isTutorialOver = true;
            collisionType[i].isShop = true;
            collisionType[i].canFish = true;
        }
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
}
