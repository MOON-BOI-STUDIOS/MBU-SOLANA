using UnityEngine;
using UnityEngine.UI;

public class AnimateUI : MonoBehaviour
{
    public RectTransform phoneImage;  // The RectTransform of the phone image UI element
    public Button triggerButton;      // The button to trigger the animation

    public float animationDuration = 1.0f;  // Duration of the animation

    private Vector2 offScreenPosition;      // Position of the phone when off-screen
    private Vector2 onScreenPosition;       // Position of the phone when on the right edge
    private bool isOnScreen = false;        // Flag to track whether the phone is on-screen

    private void Start()
    {
        // Calculate the initial off-screen and on-screen positions
        offScreenPosition = new Vector2(Screen.width + phoneImage.rect.width / 2, phoneImage.anchoredPosition.y);  // Position off-screen to the right
        onScreenPosition = new Vector2(Screen.width / 2 - phoneImage.rect.width / 2, phoneImage.anchoredPosition.y);  // Position on-screen at the right edge

        // Initialize the phone image to be off-screen
        phoneImage.anchoredPosition = offScreenPosition;

        // Register the button click event to toggle the animation
        triggerButton.onClick.AddListener(TogglePhoneImage);
    }

    public void TogglePhoneImage()
    {
        // Toggle the target position based on the current state
        if (isOnScreen)
        {
            // Move the phone off-screen
            StartCoroutine(AnimateToPosition(phoneImage, phoneImage.anchoredPosition, offScreenPosition, animationDuration));
        }
        else
        {
            // Move the phone on-screen
            StartCoroutine(AnimateToPosition(phoneImage, phoneImage.anchoredPosition, onScreenPosition, animationDuration));
        }

        // Flip the state
        isOnScreen = !isOnScreen;
    }

    private System.Collections.IEnumerator AnimateToPosition(RectTransform rectTransform, Vector2 start, Vector2 end, float duration)
    {
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            // Interpolate position based on elapsed time
            rectTransform.anchoredPosition = Vector2.Lerp(start, end, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // Ensure final position is set
        rectTransform.anchoredPosition = end;
    }
}
