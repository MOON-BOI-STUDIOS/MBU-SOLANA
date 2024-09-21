using UnityEngine;

[RequireComponent(typeof(SpriteRenderer))]
public class AdjustSortingOrderRelativeToPlayer : MonoBehaviour
{
    private SpriteRenderer spriteRenderer;

    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.sortingLayerName = "Characters"; // Ensure this matches your sorting layer
    }

    void Update()
    {
        // Check if the player instance exists
        if (PlayerController.Instance != null)
        {
            // Reference to the player's SpriteRenderer
            SpriteRenderer playerSpriteRenderer = PlayerController.Instance.GetSpriteRenderer();

            if (playerSpriteRenderer != null)
            {
                // Calculate the difference in Y positions
                float yDifference = transform.position.y - playerSpriteRenderer.transform.position.y;

                // Adjust sorting order based on the Y position difference
                // Reverse the comparison logic if needed
                if (yDifference > 0)
                {
                    // Enemy is above the player
                    spriteRenderer.sortingOrder = playerSpriteRenderer.sortingOrder - 1;
                }
                else if (yDifference <= 0)
                {
                    // Enemy is below the player
                    spriteRenderer.sortingOrder = playerSpriteRenderer.sortingOrder + 1;
                }
            }
        }
    }
}
