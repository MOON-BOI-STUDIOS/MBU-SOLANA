using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ButtonDelay : MonoBehaviour
{
    // Assign your button in the Inspector
    Button myButton;
    // Set the delay time in seconds
    public float delayTime = 3.0f;

    void Start()
    {
        myButton = GetComponent<Button>();
        // Disable the button initially
        myButton.interactable = false;
        // Start the coroutine to enable the button after the delay
        StartCoroutine(EnableButtonAfterDelay());
    }

    IEnumerator EnableButtonAfterDelay()
    {
        // Wait for the specified delay time
        yield return new WaitForSeconds(delayTime);
        // Enable the button
        myButton.interactable = true;
    }
}