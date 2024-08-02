using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAnimator : MonoBehaviour
{
    public PlayerManager _manager;
    private PlayerController _controller;
    public Vector2 lastDirection;
    public Animator _heroAnimator;
    [SerializeField] SpriteRenderer dreSprite;

    public GameObject EndUI;
    
    Color initialColor;

    [Header("Materials")]
    public Material initialMaterial;
    public Material redMaterial;
    public Material yellowMaterial;
    public Material orangeMaterial;

    [Header("Sounds")]
    AudioSource audioSource;
    public AudioClip northStar, orionsBelt, deathSound, teleportSound;
    public AudioClip[] whoosh;
    public AudioClip[] dreDialogues;

    public GameObject powerUpVolume;

    public AudioSource mainMusic, powerUpMuisc;
    int odds;
    // fishing scene is no combat zone 
    public bool isNoCombatZone = false;

    public Chests chests;
    string curSceneName;
    public GameObject enemies;
    private GameObject[] childenemies;

    [SerializeField] PlayerTeleport playerTeleport;

    void Start()
    {
        curSceneName = SceneManager.GetActiveScene().name;
        initialColor = GetComponent<SpriteRenderer>().color;
        _controller = _manager._controller;
        _heroAnimator = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();

    }

    // Update is called once per frame
    void Update()
    {
        //setting the float values according to the movement direction. this enables the corrent movement animation, according to movement direction
        _heroAnimator.SetFloat("x", _controller.moveDirection.x);
        _heroAnimator.SetFloat("y", _controller.moveDirection.y);

        _heroAnimator.SetFloat("lastX", lastDirection.x);
        _heroAnimator.SetFloat("lastY", lastDirection.y);

        //triggers animations, according to running state/walking state, moving/mot moving
        _heroAnimator.SetBool("isRunning", _controller.isRunning);
        _heroAnimator.SetBool("isMoving", _controller.isMoving);

        if(!isNoCombatZone)
        {
            if (_manager._combat.comboCounter >= _manager._combat.numberOfComboHits)
            {
                //generates a random number and sets combo counter to zero
                odds = Random.Range(0, 10);
                _manager._combat.comboCounter = 0;

                //there is a 50-50 chance of performing north star, or the orions belt. Sets layer weight to the respective layers
                if(odds  < 5f && _heroAnimator.GetLayerWeight(3) == 0 && _heroAnimator.GetLayerWeight(1) == 0)
                {  
                    _heroAnimator.SetLayerWeight(1, 1);
                    _heroAnimator.SetTrigger("northStar");
                    
                }
                if (odds >= 5f && _heroAnimator.GetLayerWeight(3) == 0 && _heroAnimator.GetLayerWeight(1) == 0)
                {
                    _heroAnimator.SetLayerWeight(3, 1);
                    _heroAnimator.SetTrigger("OrionsBelt");
                }
            }
        }
    }

    public void endofCollect()
    {
        chests.isPickingUP = false;
        chests.dre.SetBool("isPickingUP", chests.isPickingUP);

    }

    //plays death sound and enables end UI
    public void Death()
    {
        audioSource.PlayOneShot(deathSound);
        if (EndUI != null)
        {
            Time.timeScale = 0f;
            EndUI.SetActive(true);
        }
    }

    //triggers through animation
    public void whoosh1()
    {
        //plays an attack sound, in a random array of attack sounds
        if(_manager._combat.enabled == true)
        {
            audioSource.PlayOneShot(whoosh[Random.Range(0,whoosh.Length)]);
            int randomiser = Random.Range(0, 50);
            if(randomiser == 1) audioSource.PlayOneShot(dreDialogues[Random.Range(0, dreDialogues.Length)]);
        }
        
    }

    //north star starts
    public void specialStart()
    {
        _manager.SetImmunityTrue();
        audioSource.PlayOneShot(northStar);
        _manager._combat.comboCounter = 0;
        _manager._controller.enabled = false;
        _manager._combat.enabled = false;
    }

    //north start ends
    public void specialEnd()
    {
        _manager.SetImmunityFalse();
        _manager._combat.comboCounter = 0;
        _manager._controller.enabled = true;
        _manager._combat.enabled = true;
        _heroAnimator.SetLayerWeight(1, 0);
    }

    //orion belt starts
    public void orionsBeltStart()
    {
        _manager.SetImmunityTrue();
        audioSource.PlayOneShot(orionsBelt);
        _manager._combat.comboCounter = 0;
        _manager._controller.enabled = false;
        _manager._combat.enabled = false;
    }

    //orion's belt ends
    public void orionsBeltEnd()
    {
        _manager.SetImmunityFalse();
        _manager._combat.comboCounter = 0;
        _manager._controller.enabled = true;
        _manager._combat.enabled = true;
        _heroAnimator.SetLayerWeight(3, 0);
    }

    //receiving damage from green void projectile. changes color to green for half a second
    public IEnumerator greenVoidDamage()
    {
       
        GetComponent<SpriteRenderer>().color = Color.green;
        yield return new WaitForSeconds(0.5f);
        GetComponent<SpriteRenderer>().color = initialColor;
    }

    //receiving damage from red void projectile. changes color to red for half a second
    public IEnumerator redVoidDamage()
    {
        GetComponent<SpriteRenderer>().color = Color.red;
        yield return new WaitForSeconds(0.5f);
        GetComponent<SpriteRenderer>().color = initialColor;
    }

    //power up. plays music, makes player invincible, plays animation, all timed to music
    public IEnumerator powerUp()
    {
        powerUpMuisc.enabled = true;
        _manager.SetImmunityTrue();
        //_manager.isPoweredUp = true;
        _manager._controller.enabled = false;
        _manager._combat.enabled = false;
        _heroAnimator.SetLayerWeight(4, 1);
        _heroAnimator.SetTrigger("Drink");

        // Change material to power-up material
        dreSprite.material = yellowMaterial;

        yield return new WaitForSeconds(1.5f);
        
        dreSprite.material = orangeMaterial;

        yield return new WaitForSeconds(1.5f);

        dreSprite.material = redMaterial;

        if (powerUpVolume != null)
            powerUpVolume.SetActive(true);

        _heroAnimator.SetLayerWeight(4, 0);
        mainMusic.volume = 0;
        _manager._controller.enabled = true;
        _manager._combat.enabled = true;

        yield return new WaitForSeconds(8.5f);


        dreSprite.material = orangeMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = redMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = orangeMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = redMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = orangeMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = redMaterial;
        yield return new WaitForSeconds(0.25f);
        dreSprite.material = yellowMaterial;
        yield return new WaitForSeconds(0.25f);

        if (powerUpVolume != null)
            powerUpVolume.SetActive(false);

        powerUpMuisc.enabled = false;
        mainMusic.volume = 0.676f;

        // Reset to initial material
        dreSprite.material = initialMaterial;
        //_manager.isPoweredUp = false;
        _manager.SetImmunityFalse();
    }

    //camera shake
    public IEnumerator CameraShake(float shakeIntensity)
    {
        Camera.main.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.x, 0, Camera.main.transform.rotation.z + shakeIntensity);      
        yield return new WaitForSeconds(.1f); 
        Camera.main.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.x, 0, Camera.main.transform.rotation.z - shakeIntensity);
    }


    //sets the last look direction, to have the right idle animation
    public void right() { lastDirection = new Vector2(1, 0); }
    public void left() { lastDirection = new Vector2(-1, 0); }
    public void up() { lastDirection = new Vector2(0, 1); }
    public void down() { lastDirection = new Vector2(0, -1); }
    public void upLeft() { lastDirection = new Vector2(-1, 1); }
    public void upRight() { lastDirection = new Vector2(1, 1); }
    public void downLeft() { lastDirection = new Vector2(-1, -1); }
    public void downRight() { lastDirection = new Vector2(1, -1); }

    public void MoveAttackArea()
    {
        _manager._combat.MoveAttackCollider();
    }

        //Player triggers Teleport animation
    public void PlayTeleportAnimation()
    {
        powerUpMuisc.PlayOneShot(teleportSound);
        _manager._controller.enabled = false;
        _heroAnimator.SetTrigger("FadeOut");
    }

    public void InitializeTeleport()
    {
        playerTeleport.TeleportPlayer();
        _heroAnimator.SetTrigger("FadeIn");
    }

    public void EndTeleport()
    {
        _manager._controller.enabled = true;
    }


}
