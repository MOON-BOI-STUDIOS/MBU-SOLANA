using UnityEngine;
using UnityEngine.EventSystems;

public class JoystickController : MonoBehaviour
{
    public GameObject joystickObject; // The joystick object
    private RectTransform joystickRect; // RectTransform of the joystick
    private bool isTouching = false; // Whether the joystick is being touched
    private Vector2 joystickStartPos; // The initial position of the joystick
    private Canvas canvas; // The canvas the joystick is on
    private RectTransform stickRect; // RectTransform of the Stick object

    void Start()
    {
        // Cache the joystick's RectTransform, starting position, and Stick RectTransform
        joystickRect = joystickObject.GetComponent<RectTransform>();
        joystickStartPos = joystickRect.anchoredPosition;
        canvas = joystickObject.GetComponentInParent<Canvas>();
        stickRect = joystickObject.transform.Find("Stick").GetComponent<RectTransform>(); // Find the Stick object
    }

    void Update()
    {
        #if UNITY_ANDROID

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector2 touchPosition;

            // Convert touch position to local position relative to the canvas
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas.transform as RectTransform, touch.position, canvas.worldCamera, out touchPosition);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    if (touch.position.x < Screen.width / 2)
                    {
                        // Set the joystick's position where the touch started
                        joystickRect.anchoredPosition = touchPosition;
                        joystickObject.SetActive(true);
                        isTouching = true;
                    }
                    break;

                case TouchPhase.Moved:
                case TouchPhase.Stationary:
                    if (isTouching)
                    {
                        // Update the Stick's position based on touch
                        Vector2 stickPosition = touchPosition;
                        stickRect.anchoredPosition = stickPosition;
                    }
                    break;

                case TouchPhase.Ended:
                case TouchPhase.Canceled:
                    if (isTouching)
                    {
                        joystickObject.SetActive(false);
                        // Optionally, you can reset the Stick position if desired
                        stickRect.anchoredPosition = joystickStartPos;
                        isTouching = false;
                    }
                    break;
            }
        }

        #endif
    }
}
