using UnityEngine;

public class RealTimeCoverCheck2D : MonoBehaviour
{
    public Camera mainCamera;        // The camera you're using to view the scene
    public LayerMask layerMask;      // The layer mask to filter relevant objects
    public GameObject xRayObject;
    void Update()
    {
        // Convert player's position to screen space
        Vector3 playerScreenPos = mainCamera.WorldToScreenPoint(transform.position);

        // Create a ray from the camera through the player's screen position
        Ray ray = mainCamera.ScreenPointToRay(playerScreenPos);
        RaycastHit2D hit = Physics2D.GetRayIntersection(ray, Mathf.Infinity, layerMask);

        // Check if the ray hit something and if it's not the player itself
        if (hit.collider != null && hit.collider.gameObject != gameObject)
        {
            Debug.Log("Player is covered by: " + hit.collider.name);
            xRayObject.SetActive(true);
        }
        else
        {
            Debug.Log("Player is not covered.");
            xRayObject.SetActive(false);
        }
    }
}
