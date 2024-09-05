using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class PlayerController : MonoBehaviour
{
    public Rigidbody2D rb;
    public Vector2 currentDirection = Vector2.zero;
    public Vector2 moveDirection;
    public bool isMoving;
    public float moveSpeed;
    public float runSpeed;
    private float currentSpeed;
    public bool isRunning;
    public PlayerInput inputs;
    public IPlayerInput inputHandler;
    private PlayerManager _manager;
    public bool TutorialMove;

    public static PlayerController Instance { get; private set; }
    [SerializeField] SpriteRenderer spriteRenderer;

    private void Awake() {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public SpriteRenderer GetSpriteRenderer()
    {
        return spriteRenderer;
    }

    public Vector2 GetMoveDirection()
    {
        return moveDirection;
    }

    void Start()
    {
        _manager = GetComponent<PlayerManager>();
        rb = GetComponent<Rigidbody2D>();
        currentSpeed = moveSpeed;
        inputHandler = GetComponent<IPlayerInput>();

        //Subscribe to the Move action events only for PC release and WebGl release
        inputs.actions["Move"].performed += Move;
        inputs.actions["Move"].canceled += Move;
    }

    void FixedUpdate()
    {
        UpdateMoveDirection();
        HandleMovement();
    }
    public void Move(InputAction.CallbackContext context)
    {
#if UNITY_STANDALONE || UNITY_WEBGL

        moveDirection = context.ReadValue<Vector2>();

#endif
    }

    private void UpdateMoveDirection()
    {
#if !UNITY_STANDALONE && !UNITY_WEBGL 

        moveDirection = inputHandler.GetInputDirection();
        
#endif
    }

    private void HandleMovement()
    {
        Vector2 currentPosition = rb.position;
        Vector2 movement = moveDirection * currentSpeed;
        Vector2 newPos = currentPosition + movement * Time.fixedDeltaTime;
        rb.MovePosition(newPos);

        isMoving = moveDirection.magnitude > 0;
        TutorialMove = true;
        UpdateRunningState();
    }

    private void UpdateRunningState()
    {
        if (moveDirection.magnitude >= 0.7f)
        {
#if UNITY_STANDALONE || UNITY_WEBGL
            if (Input.GetButton("Fire3"))
            {
                currentSpeed = runSpeed;
                isRunning = true;
                return;
            }
#endif
            currentSpeed = runSpeed;
            isRunning = true;
        }
        else
        {
            currentSpeed = moveSpeed;
            isRunning = false;
        }
    }

    public void StopMoving()
    {
        isMoving = false;
    }
}