using Org.BouncyCastle.Utilities;
using System.Collections;
using UnityEngine;

public class AICarController : RaceObjectBase
{
    public float speed = -10f; // Speed for vertical movement
    public float horizontalSpeed = 5f; // Speed for left and right movement
    public float moveDistance = 2f;

    private Rigidbody2D _rb;
    public SpriteRenderer sr;
    private bool isMoving = false;
    private Vector3 targetPosition;
    public bool isColliding=false;
    public bool isDisdroyed=false;

    public GameObject BlastPrefab;
    private void Start()
    {
        _rb = GetComponent<Rigidbody2D>();
        StartCoroutine(RepairCar(0f));
    }

    public enum Position { Left, Centre, Right } // Positions a car can be in
    public Position currentPosition; // Current position of the car

    /// <summary>
    /// Spawn car on the left , center, or right. That is currently the doing of InteractableManager
    /// </summary>
    /*public void InitializeCar()
    {
        int rand = Random.Range(0, 3);
        currentPosition = (Position)rand;

        switch (currentPosition)
        {
            case Position.Left:
                transform.position = new Vector3(-moveDistance, transform.position.y, transform.position.z);
                break;
            case Position.Centre:
                transform.position = new Vector3(0, transform.position.y, transform.position.z);
                break;
            case Position.Right:
                transform.position = new Vector3(moveDistance, transform.position.y, transform.position.z);
                break;
        }
    }*/
    
    void Update()
    {
        if (isColliding || !RaceGameManager.inst.hasReceiveInput)
            return;
    }

    public void ChangePath()
    {
        if (Random.value > 0.5)//50-50 chance of its moving
            return;
 
        switch (currentPosition)
        {
            case Position.Left:
                StartCoroutine(MoveRight());
                currentPosition = Position.Centre;
                break;
            case Position.Centre:
                if (Random.value < 0.5f)
                {
                    StartCoroutine(MoveLeft());
                    currentPosition = Position.Left;
                }
                else
                {
                    StartCoroutine(MoveRight());
                    currentPosition = Position.Right;
                }
                break;
            case Position.Right:
                StartCoroutine(MoveLeft());
                currentPosition = Position.Centre;
                break;
        }
        
    }

    IEnumerator MoveLeft()
    {
        isMoving = true;
        targetPosition = transform.position + Vector3.left * moveDistance;

        StartCoroutine(HandleRotationLeft(moveDistance / horizontalSpeed));

        while (Mathf.Abs(transform.position.x - targetPosition.x) > 0.1f)
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(targetPosition.x, transform.position.y, transform.position.z), horizontalSpeed * Time.deltaTime);
            yield return null;
        }

        isMoving = false;
    }
    IEnumerator MoveRight()
    {
        isMoving = true;
        targetPosition = transform.position + Vector3.right * moveDistance;

        StartCoroutine(HandleRotationRight(moveDistance / horizontalSpeed));

        while (Mathf.Abs(transform.position.x - targetPosition.x) > 0.1f)
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(targetPosition.x, transform.position.y, transform.position.z), horizontalSpeed * Time.deltaTime);
            yield return null;
        }

        isMoving = false;
    }

    IEnumerator HandleRotationLeft(float movementTime)
    {
        float quarterTime = movementTime / 4f;
        float halfTime = movementTime / 2f;
        Quaternion initialRotation = transform.rotation;
        Quaternion targetRotation = Quaternion.Euler(0, 0, 20); // Rotate 20 degrees to the left

        // First 25% of the time: Rotate left
        float time = 0f;
        while (time < quarterTime)
        {
            time += Time.deltaTime;
            transform.rotation = Quaternion.Lerp(initialRotation, targetRotation, time / quarterTime);
            yield return null;
        }

        // Next 50% of the time: Wait
        yield return new WaitForSeconds(halfTime);

        // Last 25% of the time: Reset rotation
        time = 0f;
        while (time < quarterTime)
        {
            time += Time.deltaTime;
            transform.rotation = Quaternion.Lerp(targetRotation, initialRotation, time / quarterTime);
            yield return null;
        }
    }

    IEnumerator HandleRotationRight(float movementTime)
    {
        float quarterTime = movementTime / 4f;
        float halfTime = movementTime / 2f;
        Quaternion initialRotation = transform.rotation;
        Quaternion targetRotation = Quaternion.Euler(0, 0, -20); // Rotate 20 degrees to the right

        // First 25% of the time: Rotate right
        float time = 0f;
        while (time < quarterTime)
        {
            time += Time.deltaTime;
            transform.rotation = Quaternion.Lerp(initialRotation, targetRotation, time / quarterTime);
            yield return null;
        }

        // Next 50% of the time: Wait
        yield return new WaitForSeconds(halfTime);

        // Last 25% of the time: Reset rotation
        time = 0f;
        while (time < quarterTime)
        {
            time += Time.deltaTime;
            transform.rotation = Quaternion.Lerp(targetRotation, initialRotation, time / quarterTime);
            yield return null;
        }
    }

    public IEnumerator RotateCarRandomly(float rotationDuration)
    {
        // Choose a random angle between -360 and 360
        float targetAngle = Random.Range(-360, 360);
        Quaternion initialRotation = transform.rotation;
        Quaternion targetRotation = Quaternion.Euler(0, 0, targetAngle);

        float startTime = Time.time;

        while (Time.time < startTime + rotationDuration)
        {
            float t = (Time.time - startTime) / rotationDuration;
            transform.rotation = Quaternion.Lerp(initialRotation, targetRotation, t);
            yield return null;
        }

        // Ensure the rotation is set to the target rotation
        transform.rotation = targetRotation;
    }
    public void CollisionWithCar()
    {
        if (!isDisdroyed)
        {
            isDisdroyed = true;
            var blast = Instantiate(BlastPrefab, transform);
            blast.transform.localPosition = new Vector3(0, 0, 0);
            Destroy(blast, 0.5f);
            // Add force in the opposite direction of the bike's movement
            // Start fading out
            StartCoroutine(RotateCarRandomly(0.5f));
            StartCoroutine(RepairCar(2f));
        }
    }
    /// Not necessary
    /*
    public void StopMovement()
    {
        // Set speeds to 0
        //speed = 0f;
        //horizontalSpeed = 0f;
        // Stop all coroutines
        //StopAllCoroutines();
    }
    */

    public IEnumerator RepairCar(float timer)
    {
        yield return new WaitForSeconds(timer);
        transform.rotation = Quaternion.Euler(0,0,0);
        isDisdroyed = false;
        isColliding = false;
    }

    /*IEnumerator ChangePathCoroutine()
    {
        while (true)
        {
            
            switch (RaceGameManager.inst.currentDifficulty)
            {
                case RaceGameManager.Difficulty.Easy:
                    // No path change for "Easy" difficulty
                    break;
                case RaceGameManager.Difficulty.Medium:
                    int indexMedium = Random.Range(0, activeAICarControllers.Count);
                    activeAICarControllers[indexMedium].ChangePath();
                    yield return new WaitForSeconds(mediumFrequency);
                    break;
                case RaceGameManager.Difficulty.Hard:
                    int indexHard = Random.Range(0, activeAICarControllers.Count);
                    activeAICarControllers[indexHard].ChangePath();
                    yield return new WaitForSeconds(hardFrequency);
                    break;
                
            }
            yield return null;
        }
    }*/

    public override void OnInteract(GameObject target)
    {
        //temporary getcomponnet 
        BikeController temp = target.GetComponent<BikeController>();
        //if is colliding ignores
        if (temp == null || temp.isColliding) return;
        
        temp.CallDisableInput(temp.timeBikeDisableInput);
        RaceGameManager.inst.ResetDifficulty();
        CollisionWithCar();

        if (!temp.isOnBoost)
        {
            temp.lives--;
            RaceGameUIManager.Inst.ReduceLife();
        }
        else
        {
            temp.isOnBoost = false;
            temp.boostAmount = 0;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.layer.Equals(7))
        {
            ChangePath();
        }
    }
}
