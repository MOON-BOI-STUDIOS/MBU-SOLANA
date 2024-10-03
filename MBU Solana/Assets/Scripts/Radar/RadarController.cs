using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RadarController : MonoBehaviour
{
    Transform player;  // Reference to the player Transform
    public float worldScanRadius;  // World radius within which enemies are displayed
    public GameObject radarEnemyPrefab;  // Red dot prefab for enemies
    public RectTransform radarUI;  // Radar background UI element
    public GameObject playerIndicator;  // Reference to the player's radar image indicator

    private List<GameObject> radarEnemies = new List<GameObject>();
    private float timer = 0f;  // Timer to track time passed
    public float updateInterval;  // Interval for updating the radar (in seconds)
    public bool isRadarZoomed;
    public float zoomedRadarRadius; // Radius of the radar when Zoomed in UI units
    public float defaultRadarRadius;  // Default radius of the radar in UI units
    float radarRadius;  // Radius of the radar in UI units
    public Button switchZoomButton;
    public Text viewStatusText;

    // Store the initial size of the radar enemy prefab
    private Vector2 initialDotSize;

    void Start()
    {
        player = gameObject.transform;

        // Store the initial size of the radar enemy prefab
        RectTransform initialDotRect = radarEnemyPrefab.GetComponent<RectTransform>();
        initialDotSize = initialDotRect.sizeDelta;
    }

    void Update()
    {
        // Increment the timer by the time passed since the last frame
        timer += Time.deltaTime;

        // Check if the timer has reached the update interval
        if (timer >= updateInterval)
        {
            UpdateRadar();
            timer = 0f;  // Reset the timer
        }
    }

    void UpdateRadar()
    {
        if (isRadarZoomed)
        {
            radarRadius = zoomedRadarRadius;
            viewStatusText.text = "Zoomed-in";
        }
        else
        {
            radarRadius = defaultRadarRadius;
            viewStatusText.text = "Perspective";
        }

        // Remove old radar dots
        foreach (GameObject dot in radarEnemies)
        {
            Destroy(dot);
        }
        radarEnemies.Clear();

        // Find all enemies with the "Enemy" tag
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");

        foreach (GameObject enemy in enemies)
        {
            Vector3 enemyPosition = enemy.transform.position;
            Vector3 direction = enemyPosition - player.position;

            // Check if enemy is within the scan radius
            if (direction.magnitude <= worldScanRadius)
            {
                // Calculate the radar position relative to the player
                Vector2 radarPosition = new Vector2(direction.x, direction.y) / worldScanRadius * radarRadius;

                // Create a new enemy dot on the radar
                GameObject radarDot = Instantiate(radarEnemyPrefab, radarUI);
                RectTransform radarDotRect = radarDot.GetComponent<RectTransform>();

                // Set the size based on zoom state
                if (isRadarZoomed)
                {
                    radarDotRect.sizeDelta = new Vector2(initialDotSize.x * 2, initialDotSize.y * 2); // Double the size
                }
                else
                {
                    radarDotRect.sizeDelta = initialDotSize; // Reset to initial size
                }

                radarDotRect.anchoredPosition = radarPosition;
                radarEnemies.Add(radarDot);
            }
        }

        // Ensure player indicator is the last in the hierarchy
        playerIndicator.transform.SetAsLastSibling();
    }

    public void SwitchRadarZoom()
    {
        isRadarZoomed = !isRadarZoomed;
        UpdateRadar();
    }
}
