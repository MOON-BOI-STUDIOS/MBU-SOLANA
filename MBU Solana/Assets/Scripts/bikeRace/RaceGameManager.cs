using System;
using TMPro;
using UnityEngine;



public class RaceGameManager : MonoBehaviour
{
    //Initialization event
    public delegate void InitiateIntro();
    public static event InitiateIntro OnIntro;

    
    //Check for first input
    public bool hasReceiveInput = false;
    //if true plays game
    public bool canPlayGame = false;
    
    //score point before going to UI
    private float _score;
    //Tip before game starts
    [SerializeField]
    private GameObject TutorialText;
    public float score
    {
        set
        {
            _score = value;
            RaceGameUIManager.Inst.scoreUI.text = value.ToString("F0");
        }
        get
        {
            return _score;
        }
    }

    [SerializeField] private float resetScore = 0f;
    /// <summary>
    /// BE AWARE THAT CHANGING ANYTHING RELATED TO DIFFICULTY MAY CAUSE MANY ERRORS AS CURRENTLY THERE'S ONLY 3 MODES AND MANY SCRIPTS HAVE AN ARRAY OF 3
    /// </summary>
    //Types of difficulty
    public enum Difficulty { Easy, Medium, Hard }
    //speed related to difficulty
    private float[] difficultySpeed = new float[3] { -10f, -15f, -20f };
    //Speed related stuff
    [Header("Speed")]
    private Difficulty _currentDifficulty; 
    public Difficulty currentDifficulty { get { return _currentDifficulty; } }
//     private float _easySpeed = 10f;
//     private float _mediumSpeed = 20f;
//     private float _hardSpeed = 30f;
    //Difficulty change requirements (score)
    [Header("Threshold")]
    public float mediumThreshold = 100f;
    public float hardThreshold = 200f;
    [field: SerializeField]
    //current speed
    public static float currentSpeed;
    //transition to the current speed
    private float transitionSmoothness = 1f;
    
    //Player related
    [Header("Ref")]
    public BikeController bikeController;
    private raceAnimationManager _bikeAnimation;
    private raceAudioManager _bikeSound;

    public SpriteRenderer sp;
    [Header("PowerUps")]
    
    public float BoostTime;

    //Player Bike selected (Health, type, movementSpeed)
    [Header("Bike Data")]
    [SerializeField] private BikeData[] bikeDataArray = new BikeData[5];
    BikeData current;

    //Singleton...
    public static RaceGameManager inst;
    private void Awake()
    {
        inst = this;
    }


    private void Start()
    {
        //retrieve first index bike type
        current = bikeDataArray[PlayerPrefs.GetInt("CurrentPlayBikeIndex", 0)];
        if (bikeController != null)
        {
            _bikeAnimation = bikeController.GetComponent<raceAnimationManager>();
            _bikeSound = bikeController.GetComponent<raceAudioManager>();
            bikeController.bikeInfo = current;
        }
        
//         RaceGameUIManager.Inst.LivesCount = current.Health;
//         BoostTime = current.Boost;
//         sp.sprite = current.BikeImage;
        //set current speed
        currentSpeed = difficultySpeed[(int)Difficulty.Easy];
        if (TutorialText != null) TutorialText.SetActive(true);
    }

    void Update()
    {
        
#if UNITY_IOS || UNITY_ANDROID
        TutorialText.GetComponentInChildren<TextMeshProUGUI>().text = "Tap to Play";
#endif
#if UNITY_WEBGL || UNITY_STANDALONE
        TutorialText.GetComponentInChildren<TextMeshProUGUI>().text = "Press any key to Play";
#endif

        //Game Can start
        if (Input.anyKeyDown && !hasReceiveInput)
        {
            if(OnIntro != null) OnIntro();
            //
            hasReceiveInput = true;
            TutorialText.SetActive(false);
        }
        if (!hasReceiveInput || bikeController.isKilled) return;

        score += (Time.realtimeSinceStartup * Time.fixedDeltaTime / 100);
        float relativeScore = score - resetScore;
        float targetSpeed;
        if (relativeScore < mediumThreshold)
        {
            _currentDifficulty = Difficulty.Easy;
            targetSpeed = difficultySpeed[(int)Difficulty.Easy];
        }
        else if (relativeScore < hardThreshold)
        {
            _currentDifficulty = Difficulty.Medium;
            targetSpeed = difficultySpeed[(int)Difficulty.Medium];
        }
        else
        {
            _currentDifficulty = Difficulty.Hard;
            targetSpeed = difficultySpeed[(int)Difficulty.Hard];
        }

        currentSpeed = Mathf.Lerp(currentSpeed, targetSpeed, transitionSmoothness * Time.deltaTime);
    }

    public void ResetDifficulty()
    {
        resetScore = score;
        _currentDifficulty = Difficulty.Easy;
    }
}
