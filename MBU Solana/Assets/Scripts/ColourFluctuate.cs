using UnityEngine;
using UnityEngine.UI;

public class ColourFluctuate : MonoBehaviour
{
    // The two colors to fluctuate between
    public Color color1;
    public Color color2;

    // The speed of the fluctuation
    public float speed = 1.0f;

    // Reference to the Image component
    private Image panelImage;

    void Start()
    {
        // Get the Image component attached to the panel
        panelImage = GetComponent<Image>();

        // If there's no Image component, log an error
        if (panelImage == null)
        {
            Debug.LogError("No Image component found on this GameObject. Please attach this script to a UI panel with an Image component.");
        }
    }

    void Update()
    {
        if (panelImage != null)
        {
            // Calculate the t value for the Lerp using a sinusoidal function
            float t = (Mathf.Sin(Time.time * speed) + 1.0f) / 2.0f;

            // Interpolate between color1 and color2 using the calculated t value
            panelImage.color = Color.Lerp(color1, color2, t);
        }
    }
}
