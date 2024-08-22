using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Video;

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

    public int number = 0;
    public int gameNum = 0;

    public Button LoadGamebtn;
    public Button newGamebtn;

    public VideoPlayer initialVidPlayer;  // First VideoPlayer for the initial video
    public VideoPlayer preloadedVidPlayer; // Second VideoPlayer for the preloaded video
    [SerializeField] string dreStartAnimationUrl; // URL of the video to prepare

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
        else if (gameNum == 1)
        {
            LoadGamebtn.interactable = true;
            newGamebtn.interactable = true;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        if (number == 1)
        {
            startButton.SetActive(true);
            Time.timeScale = 1;
        }

        // Prepare the start animation video on the second VideoPlayer
        PrepareVideo(dreStartAnimationUrl);
    }

    // Update is called once per frame
    void Update()
    {
        if (isLevelLoading)
        {
            musicPlayer.volume -= 1;
        }
    }

    // Triggers powerup animation, disables start menu buttons, plays select sound as well as powerup sound
    public void startGame()
    {
        Destroy(startButton);
        startButton.SetActive(false);
        StartPreparedVideo();
    }

    public void NewstartGame()
    {
        Debug.Log("Hello World");
        Debug.Log(PlayerPrefs.GetInt("LastLocation"));
        Destroy(startButton);
        startButton.SetActive(false);
        StartPreparedVideo();
        // Deletes any saved data
        ClearPlayerPrefs();
    }

    void ClearPlayerPrefs()
    {
        // Deletes all player preferences
        PlayerPrefs.DeleteKey("isTutorialOver");
        PlayerPrefs.DeleteKey("isQuestions");
        PlayerPrefs.DeleteKey("isShop");
        PlayerPrefs.DeleteKey("canFish");
        PlayerPrefs.SetInt("questCompletemain", 0);
        PlayerPrefs.DeleteKey("chestOpened");
        PlayerPrefs.DeleteKey("ChestopenFish");
        PlayerPrefs.DeleteKey("finished");
        PlayerPrefs.DeleteKey("Qbjective1main");
        PlayerPrefs.DeleteKey("Qbjective1");
        PlayerPrefs.DeleteKey("Objective2");
        PlayerPrefs.SetInt("questCompletefish", 0);
        PlayerPrefs.DeleteKey("isFinished");
        PlayerPrefs.DeleteKey("noTutorialFish");
        PlayerPrefs.DeleteKey("noTutorial");
        PlayerPrefs.DeleteKey("p_x");
        PlayerPrefs.DeleteKey("p_y");
        PlayerPrefs.DeleteKey("p_z");
        PlayerPrefs.DeleteKey("Saved");
        PlayerPrefs.SetInt("SwordPower", 0);
        PlayerPrefs.SetInt("SpecialPower", 0);
        PlayerPrefs.SetInt("Fishes", 0);
        PlayerPrefs.SetInt("Round", 0);
        PlayerPrefs.SetInt("LastLocation", 0);
        PlayerPrefs.SetInt("firstLoad", 0);
        PlayerPrefs.SetInt("Coins", 0);
        PlayerPrefs.SetInt("MoneyAward", 0);
    }

    void PrepareVideo(string url)
    {
        preloadedVidPlayer.url = url;
        preloadedVidPlayer.isLooping = false;
        preloadedVidPlayer.prepareCompleted += OnPrepareCompleted;
        preloadedVidPlayer.loopPointReached += OnLoopPointReached;
        preloadedVidPlayer.Prepare();
    }

    void StartPreparedVideo()
    {
        if (preloadedVidPlayer.isPrepared && preloadedVidPlayer.url == dreStartAnimationUrl)
        {
            initialVidPlayer.Stop();  // Stop the initial video
            preloadedVidPlayer.Play();
            GetComponent<AudioSource>().PlayOneShot(powerUpSound);
            GetComponent<AudioSource>().PlayOneShot(startButtonSound);
        }
    }

    private void OnPrepareCompleted(VideoPlayer source)
    {
        source.prepareCompleted -= OnPrepareCompleted;
        // The preloaded video is ready to play whenever you want.
    }

    private void OnLoopPointReached(VideoPlayer source)
    {
        source.loopPointReached -= OnLoopPointReached;

        if (source.url == dreStartAnimationUrl)
        {
            loadLevel();
        }
    }

    // Loads scene 1, triggers transition animation, plays transitionOut audio
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

    private void OnDisable()
    {
        preloadedVidPlayer.loopPointReached -= OnLoopPointReached;
        preloadedVidPlayer.prepareCompleted -= OnPrepareCompleted;
    }
}
