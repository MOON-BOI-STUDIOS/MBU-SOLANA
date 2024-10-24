using UnityEngine;
using UnityEngine.Rendering.Universal; // Required for Light2D

public class FireLampEffect : MonoBehaviour
{
    public Light2D fireLight; // Reference to the Light2D component
    public Color minColor = new Color(1.0f, 0.5f, 0.2f); // Low fire color (reddish)
    public Color maxColor = new Color(1.0f, 0.8f, 0.4f); // High fire color (yellowish)

    [Header("Intensity Settings")]
    public float minIntensity = 0.8f; // Minimum light intensity
    public float maxIntensity = 1.2f; // Maximum light intensity
    public float flickerSpeed = 2.0f; // Speed of flickering

    [Header("Color Flicker Settings")]
    public float colorFlickerSpeed = 1.0f; // Speed of color change
    public float colorChangeRate = 0.2f; // How much the color changes

    [Header("Random Offset Settings")]
    public float intensityOffsetSpeed = 0.5f; // Speed of intensity offset drift
    public float colorOffsetSpeed = 0.5f; // Speed of color offset drift

    private float intensityOffset; // Offset for Perlin noise for intensity
    private float colorOffset; // Offset for Perlin noise for color

    private void Start()
    {
        if (fireLight == null)
        {
            fireLight = GetComponent<Light2D>(); // Get Light2D component if not set
        }

        // Initialize offsets with random values for more unique flickering
        intensityOffset = Random.Range(0f, 100f);
        colorOffset = Random.Range(0f, 100f);
    }

    private void Update()
    {
        // Update the intensity with Perlin noise and add random offset over time
        float intensityNoise = Mathf.PerlinNoise(Time.time * flickerSpeed + intensityOffset, intensityOffset);
        fireLight.intensity = Mathf.Lerp(minIntensity, maxIntensity, intensityNoise);

        // Update the color with Perlin noise and add random offset over time
        float colorNoise = Mathf.PerlinNoise(Time.time * colorFlickerSpeed + colorOffset, colorOffset);
        Color fireColor = Color.Lerp(minColor, maxColor, colorNoise);
        fireLight.color = fireColor;

        // Apply the random offset drift over time to simulate more variation
        intensityOffset += Random.Range(-intensityOffsetSpeed, intensityOffsetSpeed) * Time.deltaTime;
        colorOffset += Random.Range(-colorOffsetSpeed, colorOffsetSpeed) * Time.deltaTime;
    }
}
