using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class BikeController : MonoBehaviour
{
    //Position to spawn
    private Vector3 _initialPosition;

    //private Vector3 targetPosition;
    //private bool isMoving = false;
    //Player Bike selected (Health, type, movementSpeed)
    [Header("Bike Data")]
    public BikeData bikeInfo;
    //
    [SerializeField]
    private bool _inputEnabled = true;
    public bool InputEnabled { get { return _inputEnabled; } set { _inputEnabled = value; } }

    public bool isOnBoost = false;

    public float horizontalSpeed = 3f;
    public float verticalSpeed = 6f;

    //call it when car collides with player
    public float timeBikeDisableInput = .2f;

    public float verticalSpeedBoostMultiplier = 20f;
    private float _currentVerticalSpeed;

    public TMP_Text youScore;
    private Rigidbody2D _rb;

    public GameObject blastPrefab;
    public bool isKilled { get; private set; }  // Add this new variable at the class level
    [field: SerializeField]
    public int lives { get; set; } = 3;
    private float _touchOffset;
    private Vector3 _touchStartBikePosition;

    [field: SerializeField]
    public float boostAmount
    {
        get;
        set;
    } = 0;

    //Mobile variables
    public bool isColliding = false;
    private float _reverseMagnitude = 4f;// You can adjust this value to control the magnitude of the reversed velocity
    [SerializeField]
    private Button boostButton;


    public float currentVerticalSpeed
    {
        get
        {
            return _currentVerticalSpeed;
        }
        set
        {
            raceAudioManager.Inst.PlayBike();
            _currentVerticalSpeed = value;
        }
    }
    private float touchOffset;
    private Vector3 touchStartBikePosition;

    private PlayerParticleSystem _playerParticles;

    void Start()
    {

#if UNITY_IOS || UNITY_ANDROID 
        boostButton.gameObject.SetActive(true);

#endif
#if UNITY_WEBGL || UNITY_STANDALONE
        boostButton.gameObject.SetActive(false);
#endif
        _initialPosition = transform.position;
        _rb = GetComponent<Rigidbody2D>();
        _playerParticles = GetComponent<PlayerParticleSystem>();
    }

    void FixedUpdate()
    {

        if (isKilled || !_inputEnabled || !RaceGameManager.inst.hasReceiveInput || isOnBoost) return;
        float vertical; //float vertical = input + 0.05f;
        float horizontal;

#if UNITY_WEBGL || UNITY_STANDALONE
        //little offset = 0.05f;
        vertical = Input.GetAxis("Vertical") + 0.05f;
        horizontal = Input.GetAxis("Horizontal");
        currentVerticalSpeed = (vertical * verticalSpeed) * verticalSpeedBoostMultiplier;
        if (!isOnBoost)
        {
            _rb.velocity = new Vector2(horizontal * horizontalSpeed, currentVerticalSpeed);
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Boost();
        }

#endif

#if UNITY_IOS || UNITY_ANDROID

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 touchWorldPosition = Camera.main.ScreenToWorldPoint(touch.position);
            touchWorldPosition.z = 0; // Ensuring that the z-coordinate doesn't interfere with the calculations
            vertical = touch.deltaPosition.normalized.y + 0.05f;
            horizontal = touch.deltaPosition.normalized.x;
            currentVerticalSpeed = (vertical * verticalSpeed) * verticalSpeedBoostMultiplier;
            switch (touch.phase)
            {
                /*case TouchPhase.Began:
                    touchStartBikePosition = transform.position; // Capture the bike's position when the touch begins
                                                                    // Record the offset between the touch position and the bike's position
                    touchOffset = touchStartBikePosition.x - touchWorldPosition.x;
                break;*/

                case TouchPhase.Moved:
                    /*
                    float targetXPosition = touchWorldPosition.x + touchOffset;
                    float deltaX = targetXPosition - transform.position.x;
                    float newVelocityX = deltaX * horizontalSpeed; // Adjust the multiplier to control the sensitivity of movement*/
                    
                    _rb.velocity = new Vector2(horizontal * horizontalSpeed, currentVerticalSpeed);
                    
                    break;

                case TouchPhase.Ended or TouchPhase.Stationary or TouchPhase.Canceled or TouchPhase.Began:

                    _rb.velocity = new Vector2(0, vertical);
                    break;
            }
        }
        else
        {
            _rb.velocity = new Vector2(0, 0.05f);
        }
        
#endif
        if(_rb.velocity.y > 1f)
        {
            _playerParticles.ParticleEngineOn();
        }

    }

    public void kill()
    {
        raceAudioManager.Inst.playerIfDead();

        var blast = Instantiate(blastPrefab, gameObject.transform);
        blast.transform.localScale = new Vector3(7.2f, 7.2f, 7.2f);
        blast.transform.localPosition = new Vector3(0, 0, 0);
        Destroy(blast, 0.5f);

        if (_rb != null)
        {
            _rb.velocity = Vector2.zero;
        }

        isKilled = true;  // Set the flag when the bike is killed
        transform.GetChild(0).gameObject.SetActive(false);
        youScore.text = ((int)RaceGameManager.inst.score).ToString();

        RaceGameUIManager.Inst.ShowLeaderboard(0.5f);
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        //New code
        //Every object (car, oil floor, Boost) has an interactable interface, so all the implementation is there
        if (other.gameObject.GetComponent<IInteractable>() != null)
        {
            other.gameObject.GetComponent<IInteractable>().OnInteract(gameObject);
        }
        /// OLD CODE
        //roadwall
        /*
                if (other.gameObject.layer == 6)
                {
                     // Fixed magnitude for the reversed velocity
                    Vector2 currentVelocity = _rb.velocity;
                    float newVelocityX = currentVelocity.x > 0 ? -_reverseMagnitude : _reverseMagnitude; // Set the reversed velocity, maintaining the sign
                    _rb.velocity = new Vector2(newVelocityX, currentVelocity.y);
                    StartCoroutine(DisableInput(0.7f));
                    raceAudioManager.Inst.PlayScreech();

                    RaceGameManager.inst.ResetDifficulty();

                    if (!isOnBoost)
                    {
                        RaceGameManager.inst.ReduseLife();
                    }
                    else
                    {
                        currentVerticalSpeed = _normalVerticalSpeed;
                        _rb.velocity = new Vector2(_rb.velocity.x, currentVerticalSpeed);
                        isOnBoost = false;

                        if (boostUICoroutine != null)
                        {
                            RaceGameUIManager.Inst.boostStop();
                            raceAnimationManager.Inst.StopBoost();
                            StopCoroutine(boostUICoroutine);
                            boostUICoroutine = null;
                        }
                    }
                }
        */
        //Put all together
        //cars
        /*if (other.gameObject.layer == 7 && !isColliding)
        {
            StartCoroutine(DisableInput(0.2f));
            RaceGameManager.inst.ResetDifficulty();
            AICarManager.Inst.CollisionWithCar(other.gameObject.GetComponent<AICarController>());

            if (!isOnBoost)
            {
                lives--;
                RaceGameUIManager.Inst.ReduceLife();
            }
            else
            {
                isOnBoost = false;
                boostAmount = 0;
            }
        }*/
        /// END OF OLD CODE
        /// 


    }

    /// <summary>
    ///  Disable Hero input section
    /// </summary>
    public void CallDisableInput(float duration) { StartCoroutine(DisableInput(duration)); }
    private IEnumerator DisableInput(float duration)
    {
        _inputEnabled = false;
        isColliding = true;
        _rb.velocity = Vector2.zero;
        yield return new WaitForSeconds(duration);
        _inputEnabled = true;
        isColliding = false;
    }

    /// <summary>
    /// Boost section
    /// </summary>
    /// 
    ///Calling from Booster script
    public void CallBoosterCourotine() 
    {
        //Call from BoostManager Object, small if so it doesn't reduce from 1 to 0 without using boost
        if (boostAmount >= 1.0f) return;
        StartCoroutine(IncreaseDecreaseBooster()); 
    }
    private IEnumerator IncreaseDecreaseBooster()
    {
        float addRemoveAmount = 0.01f;
        //offset = 0.25f
        float tempBoost = (boostAmount + 0.25f);
        if(boostAmount < 1.0f && !isOnBoost)
        {
            while (boostAmount < tempBoost)
            {
                boostAmount += addRemoveAmount;
                yield return null;
            }
            if(tempBoost >= 1) boostAmount = 1;
        }
        else
        {
            while (boostAmount > 0f)
            {
                boostAmount -= addRemoveAmount;
                yield return null;
            }
            if (boostAmount <= 0) boostAmount = 0;
            //once boostAmount finishes call disableBoost to remove animations..,..
            DisableBoost();
        }
    }

    public void Boost()
    {
        if (!isOnBoost && boostAmount >= 1.0f)
        {
            isOnBoost = true;
            _rb.velocity = Vector2.zero;
            _rb.velocity = new Vector2(0, verticalSpeedBoostMultiplier);
            raceAnimationManager.Inst.PlayBoost();
            StartCoroutine(IncreaseDecreaseBooster());
        }   
    }
    private void DisableBoost()
    {
        raceAnimationManager.Inst.StopBoost();
        raceAudioManager.Inst.StopBikeBoost();
        isOnBoost = false;
    }
    /// End of boost section

}
