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
    public bool isDestroyed=false;
    [SerializeField]
    //0 - straight, 1- left, 2- right
    private Sprite[] _arrowsDirection = new Sprite[3];
    public GameObject BlastPrefab;
    private void Start()
    {
        _rb = GetComponent<Rigidbody2D>();
        RepairCar();
    }

    public enum Position { Left, Centre, Right } // Positions a car can be in
    public Position currentPosition; // Current position of the car
    private Position _futurePosition; // Future position in which the car will move

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
        if (isColliding)
            return;
    }
    
    public void FutureChangePath()
    {
        if (Random.value > 0.5)//50-50 chance of its moving
        {
            _bubbleSprite = _arrowsDirection[0];
            //Default, should not move
            _futurePosition = Position.Centre;
            return;
        }

        switch (currentPosition)
        {
            case Position.Left:
                _futurePosition = Position.Right;
                currentPosition = Position.Centre;
                _bubbleSprite = _arrowsDirection[2];
                break;
            case Position.Centre:
                if (Random.value < 0.5f)
                {
                    _futurePosition = Position.Left;
                    currentPosition = Position.Left;
                    _bubbleSprite = _arrowsDirection[1];
                }
                else
                {
                    _futurePosition = Position.Right;
                    currentPosition = Position.Right;
                    _bubbleSprite = _arrowsDirection[2];
                }
                break;
            case Position.Right:
                _futurePosition = Position.Left;
                currentPosition = Position.Centre;
                _bubbleSprite = _arrowsDirection[1];
                break;
            default: break;
        }
    }

    public void ChangePath()
    {
        //Gives a bit of randomness to the movement
        moveDistance = Random.Range(1.5f, 2.5f);
        switch (_futurePosition)
        {
            case Position.Left:
                StartCoroutine(MoveLeft());
                break;
            case Position.Right:
                StartCoroutine(MoveRight());
                break;
            default: break;
        }
        
    }
//Never touched a single line here or never will, it works and it is good work
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
//End of old times

    public IEnumerator RotateCarRandomly(float rotationDuration)
    {
        // Choose a random angle between -180 and 180
        float targetAngle = Random.Range(-180, 180);
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
        if (!isDestroyed)
        {
            isDestroyed = true;
            var blast = Instantiate(BlastPrefab, transform);
            blast.transform.localPosition = new Vector3(0, 0, 0);
            Destroy(blast, 0.5f);
            // Add force in the opposite direction of the bike's movement
            // Start fading out
            StartCoroutine(RotateCarRandomly(0.5f));
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

    private void RepairCar()
    {
        transform.rotation = Quaternion.Euler(0,0,0);
        isDestroyed = false;
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
        //Interaction with player
        //temporary getcomponnet 
        BikeController temp = target.GetComponent<BikeController>();
        //if is colliding ignores
        if (/*temp == null || temp.isColliding ||*/ isDestroyed) return;
        
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

    public override void OnDeInteract()
    {
        base.OnDeInteract();
        RepairCar();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Cars have a collider zone on top of the screen that calls for change path
        if(collision.gameObject.layer.Equals(7))
        {
            ChangePath();
        }
    }
}
