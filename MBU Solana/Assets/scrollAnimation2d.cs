using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class scrollAnimation2d : MonoBehaviour
{
    [SerializeField] private Transform targetTransform; // Reference to the Transform component
    [SerializeField] private Image targetImage; // Reference to the Image component
    [SerializeField] private GameObject scrollUI;
    [SerializeField] private GameObject Joystick;
    [SerializeField] private GameObject HealthUI;
    [SerializeField] private GameObject InventoryButton;
    [SerializeField] private GameObject QuestButton;
    [SerializeField] private GameObject pause;
    [SerializeField] private Button _skip;
    // Start is called before the first frame update
    private Tween transformTween; // Declare a private variable to hold the reference to the tween
    private bool skipCalled = false;
    public void skip()
    {
        skipCalled = true; 
        if (transformTween != null) // If the tween has been created
        {

            Debug.Log("killing");
            transformTween.Kill(); // Kill the tween
        }
#if UNITY_IOS || UNITY_ANDROID
                        Joystick.SetActive(true);
        QuestButton.SetActive(true);
        InventoryButton.SetActive(false);
        pause.SetActive(true);
#endif
        spawnLocationManager.Inst.dreSprite.enabled = false;
        targetImage.DOFade(0, 0.1f).OnComplete(() =>
        {
            spawnLocationManager.Inst.telport();
            scrollUI.gameObject.SetActive(false); HealthUI.SetActive(true);
        });
    }

    private void Awake()
    {
     
        if (PlayerPrefs.GetInt("firstLoad", 0)==0)
        {
            PlayerPrefs.SetInt("firstLoad", 1);
            Invoke("AnimateTransformAndImage", 1f);
#if UNITY_IOS || UNITY_ANDROID
            Joystick.SetActive(false);
            QuestButton.SetActive(false);
            InventoryButton.SetActive(false);
            pause.SetActive(false);
            HealthUI.SetActive(false);
#endif
        }
        else
        {
            scrollUI.gameObject.SetActive(false);
        }
    }

    void Start()
    {
        Invoke("AnimateTransformAndImage", 1f);
    }
    private void AnimateTransformAndImage()
    {
        targetImage.DOFade(1, 0.1f);
        HealthUI.SetActive(false);
        QuestButton.SetActive(false);
        InventoryButton.SetActive(false);
        pause.SetActive(false);
        // Store the tween in the private variable

#if UNITY_WEBGL || UNITY_STANDALONE
        transformTween = targetTransform.DOLocalMoveY(800, 22f)//800for PC  110 forIOS
            .OnComplete(() =>
            {
                if (skipCalled) return;
                spawnLocationManager.Inst.dreSprite.enabled = false;
                targetImage.DOFade(0, 0.4f)
                    .OnComplete(() =>
                    {


#if UNITY_IOS || UNITY_ANDROID
                        Joystick.SetActive(true);
#endif
                        HealthUI.SetActive(true);
                        spawnLocationManager.Inst.telport();
                        scrollUI.gameObject.SetActive(false);
                         QuestButton.SetActive(false);
                     InventoryButton.SetActive(false);
                        pause.SetActive(false);
                    });
            });
#endif

#if UNITY_IOS || UNITY_ANDROID
        transformTween = targetTransform.DOLocalMoveY(1700, 15f)//800for PC  110 forIOS
            .OnComplete(() =>
            {
                 if (skipCalled) return;
                 spawnLocationManager.Inst.dreSprite.enabled = false;
                 targetImage.DOFade(0, 0.4f)
                     .OnComplete(() =>
                        {
            

#if UNITY_IOS || UNITY_ANDROID
                        Joystick.SetActive(true);

#endif

                        HealthUI.SetActive(true);
                        QuestButton.SetActive(true);
                        //InventoryButton.SetActive(true);
                        pause.SetActive(true);
                        spawnLocationManager.Inst.telport();
                scrollUI.gameObject.SetActive(false);
                     });
              });
#endif
    }

}




