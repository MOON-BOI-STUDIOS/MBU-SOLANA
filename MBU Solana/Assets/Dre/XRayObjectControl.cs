using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class XRayObjectControl : MonoBehaviour
{
    // Reference to the PlayerAnimator
    public PlayerAnimator playerAnimator;

    // Reference to the SpriteRenderer attached to this object
    private SpriteRenderer spriteRenderer;

    // Array of DirectionSprite objects
    public DirectionSprite[] directionSprites;

    // Dictionary to map direction names to sprites
    private Dictionary<string, Sprite> directionSpriteMap;

    // Dictionary for fast Vector2 to string lookups
    private Dictionary<Vector2, string> directionNameMap;

    // Cached direction name to avoid redundant updates
    private string currentDirectionName;

    // Start is called before the first frame update
    void Start()
    {
        // Get the SpriteRenderer component attached to this object
        spriteRenderer = GetComponent<SpriteRenderer>();

        // Initialize the dictionaries
        directionSpriteMap = new Dictionary<string, Sprite>();
        directionNameMap = new Dictionary<Vector2, string>();

        // Populate the dictionaries
        foreach (var directionSprite in directionSprites)
        {
            directionSpriteMap[directionSprite.directionName] = directionSprite.sprite;
            // Adding direction mappings for quick lookup
            Vector2 directionVector = GetVector2FromName(directionSprite.directionName);
            if (!directionNameMap.ContainsKey(directionVector))
            {
                directionNameMap[directionVector] = directionSprite.directionName;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Check if playerAnimator is assigned
        if (playerAnimator == null)
            return;

        // Get the last direction from the PlayerAnimator
        Vector2 lastDirection = playerAnimator.lastDirection;

        // Lookup the direction name in the dictionary
        if (directionNameMap.TryGetValue(lastDirection, out string directionName) && directionName != currentDirectionName)
        {
            // Update the sprite only if the direction has changed
            if (directionSpriteMap.TryGetValue(directionName, out Sprite selectedSprite))
            {
                spriteRenderer.sprite = selectedSprite;
                currentDirectionName = directionName; // Cache the new direction name
            }
        }
    }

    // Convert direction name to Vector2
    private Vector2 GetVector2FromName(string directionName)
    {
        switch (directionName)
        {
            case "Right": return new Vector2(1, 0);
            case "Left": return new Vector2(-1, 0);
            case "Up": return new Vector2(0, 1);
            case "Down": return new Vector2(0, -1);
            case "UpLeft": return new Vector2(-1, 1);
            case "UpRight": return new Vector2(1, 1);
            case "DownLeft": return new Vector2(-1, -1);
            case "DownRight": return new Vector2(1, -1);
            default: return Vector2.zero;
        }
    }
}

[System.Serializable]
public class DirectionSprite
{
    public string directionName; // Name of the direction
    public Sprite sprite;        // Sprite for the direction
}
