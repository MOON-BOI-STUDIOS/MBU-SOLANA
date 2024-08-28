using UnityEngine;

public class RealTimeCoverCheck2D : MonoBehaviour
{
    public Camera mainCamera;        // The camera you're using to view the scene
    public LayerMask layerMask;      // The layer mask to filter relevant objects
    public GameObject xRayObject;    // The object to show/hide based on raycast
    public float checkInterval = 0.2f; // Time interval between checks

    private bool isXRayObjectActive = false; // Cache the active state to prevent unnecessary toggles

    void Start()
    {
        if (mainCamera == null)
        {
            mainCamera = Camera.main; // Cache the camera reference
        }
        InvokeRepeating(nameof(CheckVisibility), 0f, checkInterval); // Start repeating checks
    }

    void CheckVisibility()
    {
        // Convert player's position to screen space
        Vector3 playerScreenPos = mainCamera.WorldToScreenPoint(transform.position);

        // Create a ray from the camera through the player's screen position
        Ray ray = mainCamera.ScreenPointToRay(playerScreenPos);
        RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction, Mathf.Infinity, layerMask);

        // Check if the ray hit something and if it's not the player itself
        bool shouldBeActive = hit.collider != null && hit.collider.gameObject != gameObject;

        // Only update the state if it's different from the current state
        if (shouldBeActive != isXRayObjectActive)
        {
            xRayObject.SetActive(shouldBeActive);
            isXRayObjectActive = shouldBeActive; // Cache the state
        }
    }
}
