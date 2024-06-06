using System;
using UnityEngine;



public class RaceGameManager : MonoBehaviour
{
    public enum Difficulty { Easy, Medium, Hard }
    public bool hasReceiveInput = false;
    [SerializeField] public static float currentSpeed;
    private float _score;
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

    [Header("Speed")]
    [SerializeField] public Difficulty currentDifficulty;
    [SerializeField] private float easySpeed = 10f;
    [SerializeField] private float mediumSpeed = 20f;
    [SerializeField] private float hardSpeed = 30f;

//     [Header("Threshold")]
//     public float mediumThreshold = 1000f;
//     public float hardThreshold = 2000f;

    private float transitionSmoothness = 0.1f;

    [Header("Ref")]
    public BikeController bikeController;


    public static RaceGameManager inst;

    public SpriteRenderer sp;
    [Header("PowerUps")]
    
    public float BoostTime;


    [Header("Bike Data")]
    [SerializeField] private BikeData[] bikeDataArray = new BikeData[5];
    BikeData current;

    private void Awake()
    {
        inst = this;
    }


    private void Start()
    {
        RaceGameUIManager.Inst.UpdateLives();
        current = bikeDataArray[PlayerPrefs.GetInt("CurrentPlayBikeIndex", 0)];
        RaceGameUIManager.Inst.LivesCount = current.Health;
        BoostTime = current.Boost;
        sp.sprite = current.BikeImage;
        currentSpeed = -10f;
    }

    void Update()
    {
        if (Input.anyKeyDown) hasReceiveInput = true;
        if (!hasReceiveInput) return;

        score += (Time.realtimeSinceStartup * Time.fixedDeltaTime / 100);
        float relativeScore = score - resetScore;
        //float targetSpeed;
/*
        if (relativeScore < mediumThreshold)
        {
            currentDifficulty = Difficulty.Easy;
            targetSpeed = easySpeed;
        }
        else if (relativeScore < hardThreshold)
        {
            currentDifficulty = Difficulty.Medium;
            targetSpeed = mediumSpeed;
        }
        else
        {
            currentDifficulty = Difficulty.Hard;
            targetSpeed = hardSpeed;
        }
*/

        //currentSpeed = Mathf.Lerp(currentSpeed, targetSpeed, transitionSmoothness * Time.deltaTime);
    }

    public void ResetDifficulty()
    {
        resetScore = score;
        currentDifficulty = Difficulty.Easy;
    }
}
