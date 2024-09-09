using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class WarningMessageText : MonoBehaviour
{
    public static WarningMessageText instance;
    public Text warningMessageText;  // Reference to the UI Text component
    public float displayDuration = 2f;  // Duration for which the message is displayed
    public Color startColor = Color.red;  // The first color
    public Color endColor = Color.yellow;  // The second color
    public Vector3 startScale = new Vector3(1f, 1f, 1f);  // The initial scale
    public Vector3 endScale = new Vector3(1.2f, 1.2f, 1.2f);  // The final scale
    public float scaleSpeed = 2f;
    public float colorSpeed = 2f;

    void Start()
    {
        // Ensure the text is hidden initially
        warningMessageText.gameObject.SetActive(false);
    }

    // Method to show the warning message with effects
    public void ShowError(string message)
    {
        warningMessageText.text = message;  // Set the warning message text
        StartCoroutine(DisplayWarningMessage());  // Start the coroutine to display the message with effects
    }

    private IEnumerator DisplayWarningMessage()
    {
        float elapsedTime = 0f;

        warningMessageText.gameObject.SetActive(true);  // Show the message

        while (elapsedTime < displayDuration)
        {
            // Calculate the fraction of the display duration that has passed
            float t = elapsedTime / displayDuration;

            // Lerp the color between startColor and endColor
            warningMessageText.color = Color.Lerp(startColor, endColor, Mathf.PingPong(t * colorSpeed, 1f));

            // Lerp the scale between startScale and endScale
            warningMessageText.transform.localScale = Vector3.Lerp(startScale, endScale, Mathf.PingPong(t * scaleSpeed, 1f));

            elapsedTime += Time.deltaTime;
            yield return null;  // Wait for the next frame
        }

        // Ensure the message is hidden after the duration
        warningMessageText.gameObject.SetActive(false);

        // Reset color and scale to their initial values (optional)
        warningMessageText.color = startColor;
        warningMessageText.transform.localScale = startScale;
    }
}
