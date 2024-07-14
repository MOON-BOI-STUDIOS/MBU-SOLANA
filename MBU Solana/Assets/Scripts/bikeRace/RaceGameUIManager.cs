using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class RaceGameUIManager : MonoBehaviour
{
    [SerializeField] Transform Lives;
    public TMP_Text scoreUI;
    [SerializeField] GameObject Boost;
    [SerializeField] Image BoostFill;

    public CanvasGroup canvasGroup; // assign this in the inspector
    private BikeController _playerController;

    public static RaceGameUIManager Inst;
    public int LivesCount;
    private int _maxLives;
    //Game yet to start
    private bool _toInitiate = true;

    private void OnEnable()
    {
        RaceGameManager.OnIntro += UpdateLives;
    }

    private void OnDisable()
    {
        RaceGameManager.OnIntro -= UpdateLives;
    }

    private void Awake()
    {
        Inst = this;
        
    }


    void Start()
    {
        _playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<BikeController>();
        if(_playerController != null)
        {
            _maxLives = _playerController.lives;
            LivesCount = _maxLives;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (_playerController != null)
            BoostFill.fillAmount = _playerController.boostAmount;
    }

    public void UpdateLives()
    {
        if(_playerController != null)
            LivesCount = _playerController.lives;
        //if livesCount = 0, game has yet to start (we are checking death in ReduceLife before calling this method
        if (_toInitiate)
        {
            _toInitiate = false;
            for (int i = 0; i < _maxLives; i++)
            {
                //Lives.GetChild(i).gameObject.SetActive(true);
                Lives.GetChild(i).gameObject.GetComponent<Animator>().Play("FillAnim");
            }
            return;
        }

        // Enable the lives up to the LivesCount
        for (int i = _maxLives-1; i > LivesCount-1; i--)
        {
            //Lives.GetChild(i).gameObject.SetActive(false);
            Lives.GetChild(i).gameObject.GetComponent<Animator>().Play("FadeOutAnim");
        }
    }

    public void ReduceLife()
    {
        UpdateLives();

        if (LivesCount <= 0)
        {
            _playerController.kill();
            return;
        }

        
        raceAnimationManager.Inst.PlayBlinking();
    }

    public void UpdateScore()
    {
        scoreUI.text = ((int)RaceGameManager.inst.score).ToString();
    }

    /*public IEnumerator BoostStart(float time)
    {
        float elapsed = 0f;
        BoostFill.fillAmount = 1;

        while (elapsed < time)
        {
            elapsed += Time.deltaTime;
            BoostFill.fillAmount = Mathf.Lerp(1, 0, elapsed / time);
            yield return null;
        }

        BoostFill.fillAmount = 0;
    }*/

    /* public void boostStop()
     {
         Boost.SetActive(false);
     }*/

    public void ShowLeaderboard(float duration)
    {
        canvasGroup.gameObject.SetActive(true);
        StartCoroutine(FadeInCanvas(canvasGroup, canvasGroup.alpha, 1, duration));
    }

    private IEnumerator FadeInCanvas(CanvasGroup cg, float start, float end, float duration)
    {
        float startTime = Time.time;
        float endTime = Time.time + duration;

        while (Time.time <= endTime)
        {
            float t = (Time.time - startTime) / duration;
            cg.alpha = Mathf.Lerp(start, end, t);
            yield return null;
        }

        // Ensure the fade is complete
        cg.alpha = end;
    }

}
