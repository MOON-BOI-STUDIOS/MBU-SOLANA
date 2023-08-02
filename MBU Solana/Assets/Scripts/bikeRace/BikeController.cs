using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BikeController : MonoBehaviour
{
    private Vector3 initialPosition;
    private Vector3 targetPosition;
    private bool isMoving = false;
    private bool inputEnabled = true;
    private bool isOnBoost = false;

    public float horizontalSpeed = 5f;
    public float verticalSpeedBoostMultiplier = 2f;

    private float normalVerticalSpeed;
    public TMP_Text _youScore;

    private float _currentVerticalSpeed;
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


    private Rigidbody2D rb;
    void Start()
    {
        initialPosition = transform.position;
        rb = GetComponent<Rigidbody2D>();
        normalVerticalSpeed = RaceGameManager.currentSpeed;
        currentVerticalSpeed = normalVerticalSpeed;
    }

    public GameObject BlastPrefab;
    private bool isKilled = false;  // Add this new variable at the class level

    public void kill()
    {
        raceAudioManager.Inst.playerIfDead();
        var blast = Instantiate(BlastPrefab, gameObject.transform);
        blast.transform.localScale = new Vector3(7.2f, 7.2f, 7.2f);
        blast.transform.localPosition = new Vector3(0, 0, 0);
        Destroy(blast, 0.5f);

        if (rb != null)
        {
            rb.velocity = Vector2.zero;
        }

        isKilled = true;  // Set the flag when the bike is killed
        transform.GetChild(0).gameObject.SetActive(false);
        _youScore.text = ((int)RaceGameManager.inst.score).ToString();
        FadeIn(0.5f);
    }


    public CanvasGroup canvasGroup; // assign this in the inspector

    public void FadeIn(float duration)
    {
        canvasGroup.gameObject.SetActive(true);
        StartCoroutine(FadeCanvasGroup(canvasGroup, canvasGroup.alpha, 1, duration));
    }

    private IEnumerator FadeCanvasGroup(CanvasGroup cg, float start, float end, float duration)
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
    private float touchOffset;
    void Update()
    {
        if (isKilled) return;
        normalVerticalSpeed = RaceGameManager.currentSpeed;
        currentVerticalSpeed = isOnBoost ? normalVerticalSpeed * verticalSpeedBoostMultiplier : normalVerticalSpeed;


        if (!inputEnabled) return;

        float verticalSpeed = currentVerticalSpeed;

#if UNITY_WEBGL || UNITY_STANDALONE
        if (Input.GetKey(KeyCode.A))
        {
            rb.velocity = new Vector2(-horizontalSpeed, verticalSpeed);
        }
        else if (Input.GetKey(KeyCode.D))
        {
            rb.velocity = new Vector2(horizontalSpeed, verticalSpeed);
        }
        else
        {
            rb.velocity = new Vector2(0, verticalSpeed);
        }
#endif

#if UNITY_IOS || UNITY_ANDROID
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 touchWorldPosition = Camera.main.ScreenToWorldPoint(touch.position);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    initialPosition = transform.position;
                    targetPosition = touchWorldPosition;
                    // Record the offset between the touch position and the bike's position
                    touchOffset = initialPosition.x - targetPosition.x;
                    break;

                case TouchPhase.Moved:
                    targetPosition = touchWorldPosition;
                    // Apply the offset to calculate the bike's new position
                    float newXPosition = targetPosition.x + touchOffset;
                    transform.position = new Vector3(newXPosition, transform.position.y, transform.position.z);
                    // Ensure the vertical speed remains consistent
                    rb.velocity = new Vector2(0, currentVerticalSpeed);
                    break;

                case TouchPhase.Ended:
                    rb.velocity = new Vector2(0, currentVerticalSpeed);
                    break;
            }
        }
        else
        {
            rb.velocity = new Vector2(0, currentVerticalSpeed);
        }
#endif



    }

    public float GetDistanceCovered()
    {
        return Vector3.Distance(initialPosition, transform.position);
    }

    bool isColliding;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (isColliding)
        {
            return;
        }
        if (isKilled)
            return;

        if (other.gameObject.layer == 8)
        {
            boost();
        }

        if (other.gameObject.layer == 6)
        {
            Vector2 currentVelocity = rb.velocity;
            rb.velocity = new Vector2(-currentVelocity.x, currentVelocity.y);
            StartCoroutine(DisableInput(0.2f));
            raceAudioManager.Inst.PlayScreech();

            RaceGameManager.inst.ResetDifficulty();

            if (!isOnBoost)
            {
                RaceGameManager.inst.ReduseLife();
            }
            else
            {
                currentVerticalSpeed = normalVerticalSpeed;
                rb.velocity = new Vector2(rb.velocity.x, currentVerticalSpeed);
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

        if (other.gameObject.layer == 7)
        {
            StartCoroutine(DisableInput(0.2f));
            RaceGameManager.inst.ResetDifficulty();
            AICarManager.Inst.CollisionWithCar(other.gameObject.GetComponent<AICarController>());

            if (!isOnBoost)
            {
                RaceGameManager.inst.ReduseLife();
            }
            else
            {
                currentVerticalSpeed = normalVerticalSpeed;
                rb.velocity = new Vector2(rb.velocity.x, currentVerticalSpeed);
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
    }

    private IEnumerator DisableInput(float duration)
    {
        inputEnabled = false;
        isColliding = true;
        yield return new WaitForSeconds(duration);
        inputEnabled = true;
        isColliding = false;
    }

    private Coroutine boostUICoroutine;
    private Coroutine DisableBoostCoroutine;
    private void boost()
    {
        if(boostUICoroutine!=null)
        {
            StopCoroutine(boostUICoroutine);
        }

        boostUICoroutine = StartCoroutine(RaceGameUIManager.Inst.BoostStart(RaceGameManager.inst.BoostTime));
        isOnBoost = true;
        currentVerticalSpeed = normalVerticalSpeed * verticalSpeedBoostMultiplier;
        rb.velocity = new Vector2(rb.velocity.x, currentVerticalSpeed);
        raceAnimationManager.Inst.PlayBoost();
        Debug.Log("disable boost called");

         if(DisableBoostCoroutine != null)
        {
            StopCoroutine(DisableBoostCoroutine);
        }

        DisableBoostCoroutine = StartCoroutine(DisableBoost(RaceGameManager.inst.BoostTime));
    }

    private IEnumerator DisableBoost(float duration)
    {
        Debug.Log("disable boost called");
        yield return new WaitForSeconds(duration);
        Debug.Log("slow Boost");
        raceAnimationManager.Inst.StopBoost();
        raceAudioManager.Inst.StopBikeBoost();
        currentVerticalSpeed = normalVerticalSpeed;
        rb.velocity = new Vector2(rb.velocity.x, currentVerticalSpeed);
        isOnBoost = false;

        // Stop the boost UI coroutine
        if (boostUICoroutine != null)
        {
            RaceGameUIManager.Inst.boostStop();
            StopCoroutine(boostUICoroutine);
            boostUICoroutine = null;
        }
    }

}
