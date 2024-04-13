using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MenuManaager : MonoBehaviour
{
    public Transform DreAnimation;
    public GameObject startButton;
    public Transform transition;
    public AudioClip powerUpSound;
    public AudioClip startButtonSound;
    public AudioClip transitionOutSound;
    public AudioSource musicPlayer;
    bool isLevelLoading = false;
    public GameObject videoOjbct;
    public GameObject WebGlVideo;

    public int number = 0;

    public GameObject moonboiStudioLogo, moonboiUniverseLogo,rawImage,runGame;

    public int gameNum = 0;

    public Button LoadGamebtn;
    public Button newGamebtn;

    public VidPlayer VidPlayer;

    public static MenuManaager instance;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        number = PlayerPrefs.GetInt("num");
        gameNum = PlayerPrefs.GetInt("gameNum");
       

        if (gameNum == 0)
        {
            LoadGamebtn.interactable = false;
            newGamebtn.interactable = true;



        }
        else if( gameNum == 1)
        {
            LoadGamebtn.interactable = true;
            newGamebtn.interactable = true;
        }

        //if(PlayerPrefs.GetInt("LastLocation") == 0)
        //{
        //    LoadGamebtn.interactable = false;
        //    newGamebtn.interactable = true;
        //}
        //else
        //{
        //    LoadGamebtn.interactable = true;
        //    newGamebtn.interactable = true;
        //}

    }
    // Start is called before the first frame update
    void Start()
    {

        if (number == 0)
        {
//#if UNITY_STANDALONE || UNITY_WEBGL
            rawImage.SetActive(true);
            runGame.SetActive(true);
            
//#endif
            StartCoroutine(loadMenu());


        }
       else if (number == 1)
         {
           
            moonboiStudioLogo.SetActive(false);
            moonboiUniverseLogo.SetActive(false);
            videoOjbct.gameObject.SetActive(false);
            Camera.main.transform.GetComponent<AudioSource>().enabled = true;
            startButton.SetActive(true);
//#if UNITY_STANDALONE || UNITY_WEBGL
            rawImage.SetActive(false);
            runGame.SetActive(false);
//#endif
            Time.timeScale = 1;

         }
    }

    // Update is called once per frame
    void Update()
    {
        if(isLevelLoading)
        {
            musicPlayer.volume -= 1;
        }
        
        
    }

    //triggers powerup animation, disables start menu buttons, plays select sound as well as powrup sound
    public void startGame()
    {
        Destroy(startButton);
        startButton.SetActive(false);
        DreAnimation.GetComponent<Animator>().SetTrigger("PowerUp");
        GetComponent<AudioSource>().PlayOneShot(powerUpSound);
        GetComponent<AudioSource>().PlayOneShot(startButtonSound);
        StopCoroutine(loadMenu());
    }
    public void NewstartGame()
    {
        Debug.Log("Hello World");
        Debug.Log(PlayerPrefs.GetInt("LastLocation"));
        Destroy(startButton);
        startButton.SetActive(false);
        DreAnimation.GetComponent<Animator>().SetTrigger("PowerUp");
        GetComponent<AudioSource>().PlayOneShot(powerUpSound);
        GetComponent<AudioSource>().PlayOneShot(startButtonSound);
        // deletes any saved data
        PlayerPrefs.DeleteAll();
        //PlayerPrefs.DeleteKey("isTutorialOver");
        //PlayerPrefs.DeleteKey("isQuestions");
        //PlayerPrefs.DeleteKey("isShop");
        //PlayerPrefs.DeleteKey("canFish");
        //PlayerPrefs.SetInt("questCompletemain", 0);
        //PlayerPrefs.DeleteKey("chestOpened");
        //PlayerPrefs.DeleteKey("ChestopenFish");
        //PlayerPrefs.DeleteKey("finished");
        //PlayerPrefs.DeleteKey("Qbjective1main");
        //PlayerPrefs.DeleteKey("Qbjective1");
        //PlayerPrefs.DeleteKey("Objective2");
        //PlayerPrefs.SetInt("questCompletefish", 0);
        //PlayerPrefs.DeleteKey("isFinished");
        //PlayerPrefs.DeleteKey("noTutorialFish");
        //PlayerPrefs.DeleteKey("noTutorial");
        //PlayerPrefs.DeleteKey("p_x");
        //PlayerPrefs.DeleteKey("p_y");
        //PlayerPrefs.DeleteKey("p_z");
        //PlayerPrefs.DeleteKey("Saved");
        //PlayerPrefs.SetInt("MaxHealth", 500);
        PlayerPrefs.SetInt("SwordPower", 0);
        PlayerPrefs.SetInt("SpecialPower", 0);
        PlayerPrefs.SetInt("Fishes", 0);
        PlayerPrefs.SetInt("Round", 0);
        PlayerPrefs.SetInt("LastLocation", 0);
        PlayerPrefs.SetInt("firstLoad", 0);
        PlayerPrefs.SetInt("Coins", 0);
        PlayerPrefs.SetInt("MoneyAward", 0);
        StopCoroutine(loadMenu());



    }

    //loads scene 1. triggers transition animation, plays transitionOut audio
    public void loadLevel()
    {
        StartCoroutine(nextLevel());
        GetComponent<AudioSource>().PlayOneShot(transitionOutSound);
        isLevelLoading = true;
    }


    IEnumerator nextLevel()
    {
        transition.gameObject.SetActive(true);
        transition.GetComponent<Animator>().SetBool("isExiting", true);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(1);
    }

    //start funtion. triggers the studio logo off, after it is played through. enables background music, turns on the start buttons
    IEnumerator loadMenu()
    {

/*#if !UNITY_STANDALONE && !UNITY_WEBGL
    videoOjbct.gameObject.SetActive(true);
     moonboiStudioLogo.SetActive(true);
      rawImage.SetActive(false);
        runGame.SetActive(false);
          VidPlayer.enabled = false;
#endif*/

        yield return new WaitForSeconds(4f);
        moonboiStudioLogo.SetActive(false);
        moonboiUniverseLogo.SetActive(true);
        yield return new WaitForSeconds(1.2f);
        Camera.main.transform.GetComponent<AudioSource>().enabled = true;
        yield return new WaitForSeconds(3.5f);
        moonboiUniverseLogo.SetActive(false);
        yield return new WaitForSeconds(1.5f);
        startButton.SetActive(true);
    }
}





    

