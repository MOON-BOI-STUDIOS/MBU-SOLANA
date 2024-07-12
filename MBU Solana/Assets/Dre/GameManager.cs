using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Inst;
    private void Awake()
    {
        Inst = this;
    }

    bool isPaused;
    public GameObject transitionIn;
    public int scene;

   
    
    public AudioClip transitionOutSound;
    bool isLevelSwitch = false;
    int IsawardMoney;
    public AudioSource backgroundMusic;
    public GameObject enemies;
    private GameObject[] childenemies;

    // Start is called before the first frame update
    void Start()
    {
        //PlayerPrefs.DeleteAll();
        IsawardMoney = PlayerPrefs.GetInt("MoneyAward");
        if(IsawardMoney == 0)
        {
            PlayerPrefs.SetInt("Coins",250);
            PlayerPrefs.SetInt("MoneyAward", 1);
        }


    }

    // Update is called once per frame
    void Update()
    {
        if(isLevelSwitch)
        {
            backgroundMusic.volume -= 1;
        }
    }

    //loads a given level. plays the transition animation
    public void nextScene(int sceneNumber)
    {
        Time.timeScale = 1f;
        PaymentInfo.UIActive = false;
        StartCoroutine(loadScene(sceneNumber));
    }
     IEnumerator loadScene(int sceneNumber)
    {
        isLevelSwitch = true;
        transitionIn.GetComponent<AudioSource>().PlayOneShot(transitionOutSound);
        transitionIn.SetActive(true);
        transitionIn.transform.GetComponent<Animator>().SetBool("isExiting", true);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(sceneNumber);
        
    }

  public void SetLastLocation(int number)
  {
        PlayerPrefs.SetInt("LastLocation", number);
  }

    public void LoadSceneByName(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    
}
