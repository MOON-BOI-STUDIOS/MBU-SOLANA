using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TouchPhase = UnityEngine.TouchPhase;

public class TouchFunctions : MonoBehaviour, IPlayerInput
{
    private Vector3 touchPosition;
    private Vector3 initialTouchPosition;
    public float touchMoveThreshold = 0.1f;
    public Vector2 GetInputDirection()
    {
        /*if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            touchPosition = touch.position; //Camera.main.ScreenToWorldPoint(touch.position);
            touchPosition.z = 0;
        }

        return (Vector2)(touchPosition - transform.position).normalized;*/
        // Check for touch input
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0); // Assuming only one touch for simplicity
            touchPosition = touch.position;

            if (touch.phase == TouchPhase.Began)
            {
                // Store the initial touch position to calculate movement
                // You may want to store this as a class variable for better tracking
                // Example:
                initialTouchPosition = touchPosition;
            }
            else if (touch.phase == TouchPhase.Moved)
            {
                // Calculate the movement vector based on the initial touch position
                // Example:
                Vector2 touchMovement = touchPosition - initialTouchPosition;

                // Check if the touch movement exceeds the threshold
                // If it does, return the normalized movement vector
                // Otherwise, return Vector2.zero
                // Example:
                if (touchMovement.magnitude > touchMoveThreshold)
                {
                     return touchMovement.normalized;
                }
                else
                {
                     return Vector2.zero;
                }
            }
        }

        return Vector2.zero;
        
    }
}