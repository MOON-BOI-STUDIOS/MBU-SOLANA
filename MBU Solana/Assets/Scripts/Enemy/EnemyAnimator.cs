using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyAnimator : MonoBehaviour
{
    public EnemyManager _manager;
    public Animator _pigAnimator;
    public GameObject leftAttack, rightAttack;
    private GameObject currentAttackZone;
    public AudioClip attackSound;
    public GameObject solanaCoin;
    public GameObject powerUpCan;

    string curSceneName;
    // Start is called before the first frame update
    void Start()
    {
        curSceneName = SceneManager.GetActiveScene().name;
    }

    // Update is called once per frame
    void Update()
    {

        //flips the void(mirrors it), according to the direction of movement. It also changes the current attack zone (the collider which deals damage to the player).
        if (_manager.transform.position.x < _manager._movement.player.position.x)
        {
            GetComponent<SpriteRenderer>().flipX = false;
            currentAttackZone = leftAttack;
        }
        else
        {
            GetComponent<SpriteRenderer>().flipX = true;
            currentAttackZone = rightAttack;
        }
    }

    public void attackSoundEffect()
    {
        //plays attack sound
        GetComponent<AudioSource>().PlayOneShot(attackSound);
    }
    public void attackStart()
    {
        //enables the damage dealing collider
        currentAttackZone.SetActive(true);
    }
    public void attackEnd()
    {
        //disables the damage dealing collider
        currentAttackZone.SetActive(false);
    }

    //triggered through an event in death animation
    public void coinSpawn()
    {
        //spawns coin upon death
        GameObject coin = Instantiate(solanaCoin, transform.parent.position, Quaternion.identity);
        WaveManager.AddCoin(coin);
        /*
        //Spawns the power up can, on rounds 3 and above (one in 20 chance)
        int randomNumber = Random.Range(0, 120);
        if(PlayerPrefs.GetInt("Round") >=3 && randomNumber % 6 == 0)
        {
            GameObject can = Instantiate(powerUpCan, transform.parent.position, Quaternion.identity);
        }
       */

        
    }

    //triggered through an event in death animation
    public void Death()
    {
        //destroys game object

        //if(SceneManager.GetActiveScene().name == "Desert_Scene") return;

        Destroy(transform.parent.gameObject);
    }
}
