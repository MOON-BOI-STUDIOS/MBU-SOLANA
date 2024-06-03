using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WaveManager : MonoBehaviour
{
    
   
    public Transform[] spawnLocations;
    public GameObject[] voids;
    public Transform enemiesParent;
    bool waveSwitch;
    public GameObject powerUp;
    public GameObject endOfRoundScreen, controls, slotAssets;
    // Start is called before the first frame update

    public GameObject[] BackMecha;
    public GameObject[] BackArcade;

    public bool executeOnce;
    string curSceneName;
    private List<GameObject> childenemies;
    //private GameObject[] childenemies;


    public static List<GameObject> coins = new List<GameObject>();
    private void Awake()
    {
        nextRound();
        StartCoroutine(delayLittleCoroutine());
        //PlayerPrefs.SetInt("Round", 1);
    }
    void Start()
    {
        if (PlayerPrefs.GetInt("LastLocation") != 3)
        {
            PlayerPrefs.SetInt("LastLocation", 2);
            foreach(GameObject g in BackMecha)
            {
                g.SetActive(true);
            }
        }
        else
        {
            foreach (GameObject g in BackArcade)
            {
                g.SetActive(true);
            }
        }
        curSceneName = SceneManager.GetActiveScene().name;
    }


    public static void AddCoin(GameObject coin)
    {
        coins.Add(coin);
    }

    public static void RemoveCoin(GameObject coin)
    {
        coins.Remove(coin);
    }

    IEnumerator delayLittleCoroutine()
    {
        yield return new WaitForSeconds(2f);
        delayLittle = false;
    }

    bool delayLittle=true;
    // Update is called once per frame
    void Update()
    {
        if (delayLittle)
            return;

        if (enemiesParent.childCount <= 0 && waveSwitch == false && coins.Count <= 0)
        {
           
            PlayerPrefs.SetInt("Round", PlayerPrefs.GetInt("Round") + 1);

            endOfRoundScreen.SetActive(true);

            PaymentInfo.UIActive = true;
            //Time.timeScale = 0f;
            // Activating the Slots Assets
            //SlotMachineAppear();
            //slotAssets.SetActive(true);
            //
            waveSwitch = true;
            Destroy(GameObject.FindGameObjectWithTag("PowerUp"));

        }
    }

   public void spawnNormalVoids()
    {
        waveSwitch = false;
        Instantiate(voids[0], spawnLocations[Random.Range(0, spawnLocations.Length - 1)].position, Quaternion.identity, enemiesParent);
    }

    public void spawnMixedVoids()
    {
        waveSwitch = false;
        Instantiate(voids[Random.Range(0, 4)], spawnLocations[Random.Range(0, spawnLocations.Length - 1)].position, Quaternion.identity, enemiesParent);
    }

    public void nextRound()
    {
        //Disabling the Slots Assets
        //SlotMachineAppear();
        //
        Time.timeScale = 1f;
        PaymentInfo.UIActive = false;
        endOfRoundScreen.SetActive(false);
        executeOnce = false;


        for (int i = 0; i < 2 + 2 * PlayerPrefs.GetInt("Round"); i++)
        {
            if (PlayerPrefs.GetInt("Round") <= 2)
            {
                Invoke("spawnNormalVoids", 0.0f);
            }
            else
            {
                Invoke("spawnMixedVoids", 0.0f);
            }

        }
    }

    //Spawn PowerUp Can at rounds 3,6 and every alternate round after round 8 onwards
    public void spawnPowerUp()
    {
        if(PlayerPrefs.GetInt("Round") == 3)
        {
            Instantiate(powerUp, spawnLocations[Random.Range(0, spawnLocations.Length - 1)].position, Quaternion.identity);
        }

        if (PlayerPrefs.GetInt("Round") == 6)
        {
            Instantiate(powerUp, spawnLocations[Random.Range(0, spawnLocations.Length - 1)].position, Quaternion.identity);
        }

        if (PlayerPrefs.GetInt("Round") >= 8 && PlayerPrefs.GetInt("Round") % 2 == 0)
        {
            Instantiate(powerUp, spawnLocations[Random.Range(0, spawnLocations.Length - 1)].position, Quaternion.identity);
        }
    }

    public void kill()
    {
        PlayerPrefs.SetInt("Coins", 20);
        PlayerPrefs.SetInt("MaxHealth", 500);
        PlayerPrefs.SetInt("SwordPower", 0);
        PlayerPrefs.SetInt("SpecialPower", 0);
        PlayerPrefs.SetInt("Fishes", 0);
        PlayerPrefs.SetInt("Round", 0);
    }

    private void SlotMachineAppear()
    {
        
        if(curSceneName != "SolanaSpeedRunScene")
        {
            slotAssets.SetActive(true);
            if (slotAssets == null) return;
            Animator animator = slotAssets.GetComponent<Animator>();
            if (animator == null) return;
            animator.SetBool("appear", true);
        }
        
    }

        public void spawnMixedVoids(Vector2 _vector2Pos)
    {
        if(!executeOnce)
        {
        for (int i = 0; i < 2 * PlayerPrefs.GetInt("Round"); i++)
        {
            if (PlayerPrefs.GetInt("Round") <= 2)
            {
                waveSwitch = false;
                Instantiate(voids[Random.Range(0, 4)], _vector2Pos, Quaternion.identity, enemiesParent);
            }
            else
            {
                waveSwitch = false;
                Instantiate(voids[Random.Range(0, 4)], _vector2Pos, Quaternion.identity, enemiesParent);
            }

        }
        }
    }
}
