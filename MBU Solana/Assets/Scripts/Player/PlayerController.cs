using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.SceneManagement;

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

    public void SetPlayerPosition(float posX, float posY)
    {
        rb.position = new Vector2(posX, posY);
    }

    void Start()
    {
        _manager = GetComponent<PlayerManager>();
        rb = GetComponent<Rigidbody2D>();
        
        currentSpeed = moveSpeed;
        inputHandler = GetComponent<IPlayerInput>();


        //rb.position = new Vector2(PlayerPrefs.GetFloat("PlayerPosX"), PlayerPrefs.GetFloat("PlayerPosY"));


        //Subscribe to the Move action events only for PC release and WebGl release
        inputs.actions["Move"].performed += Move;
        inputs.actions["Move"].canceled += Move;
        UpdateSceneAndPosition();
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

    public void UpdateSceneAndPosition()
    {
        Debug.Log("SAVE PLAYER LOCATION PREFS");
        // Save the current scene index
        string sceneName = SceneManager.GetActiveScene().name;
        
        PlayerPrefs.SetString("LastSceneName", sceneName);

        // Save player position
        PlayerPrefs.SetFloat("PlayerPosX", rb.position.x);
        PlayerPrefs.SetFloat("PlayerPosY", rb.position.y);

        // Save the data
        PlayerPrefs.Save();
        Debug.Log("Saved Prefs for Scene: " + sceneName + " with last position at " + rb.position);
    }

    private void OnApplicationQuit()
    {
        UpdateSceneAndPosition();
    }


    // For WebGL and handling app pause (also works for Android backgrounding)
    private void OnApplicationPause(bool pauseStatus)
    {
        pauseStatus = Pause.instance.GameIsPaused;
        if (pauseStatus) // If the app is being paused (i.e., going into the background or losing focus)
        {
            Debug.Log("OnApplicationPause called with pauseStatus: " + pauseStatus);
            // Save the current scene index
            UpdateSceneAndPosition();
        }
    }
#if UNITY_WEBGL
    // For WebGL (handle when the app loses focus in the browser)
    private void OnApplicationFocus(bool hasFocus)
    {
        if (!hasFocus) // If the app loses focus
        {
            Debug.Log("OnApplicationFocus called with hasFocus: " + hasFocus);
            
            UpdateSceneAndPosition();
        }
    }
#endif
}