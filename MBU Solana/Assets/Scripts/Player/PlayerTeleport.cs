using TMPro;
using UnityEngine;
using UnityEngine.UI; // Required for UI components

public class PlayerTeleport : MonoBehaviour
{
    public Transform player; // Reference to the player GameObject
    public Transform[] spawnPoints; // Array of spawn points
    public Animator playerAnimator;
    public TextMeshProUGUI[] teleportCostTexts; // Array of Text components on each button to display the cost
    
    private int targetSpawnPointIndex = -1; // Index of the target spawn point

    private void Start()
    {
        UpdateTeleportCosts(); // Initial update of the teleport costs
    }

    // Method to find the index of the closest spawn point to the player
    private int FindClosestSpawnPointIndex()
    {
        float minDistance = Mathf.Infinity;
        int closestIndex = -1;

        for (int i = 0; i < spawnPoints.Length; i++)
        {
            float distance = Vector3.Distance(player.position, spawnPoints[i].position);
            if (distance < minDistance)
            {
                minDistance = distance;
                closestIndex = i;
            }
        }

        return closestIndex;
    }

    // Method to calculate the teleport cost
    private int CalculateTeleportCost(int closestIndex, int targetIndex)
    {
        int indexDifference = Mathf.Abs(closestIndex - targetIndex); // Calculate the absolute index difference
        return indexDifference * 10; // Cost is 10 coins per index difference
    }

    // Method to teleport the player to a specific spawn point
    private void TeleportToSpawnPoint(int index)
    {
        if (index >= 0 && index < spawnPoints.Length)
        {
            int closestSpawnPointIndex = FindClosestSpawnPointIndex(); // Find the closest spawn point to the player

            // Calculate the cost based on the index difference
            int cost = CalculateTeleportCost(closestSpawnPointIndex, index);

            // Get current coin balance
            int currentCoins = PlayerPrefs.GetInt("Coins", 0);

            // Check if the player has enough coins
            if (currentCoins >= cost)
            {
                // Deduct coins and save the updated value
                currentCoins -= cost;
                PlayerPrefs.SetInt("Coins", currentCoins);

                // Perform the teleportation
                player.position = spawnPoints[index].position;

                Debug.Log("Teleported to spawn point " + index + ". Coins deducted: " + cost + ". Remaining coins: " + currentCoins);
            }
            else
            {
                Debug.LogError("Not enough coins to teleport! Required: " + cost + ", Available: " + currentCoins);
            }
        }
        else
        {
            Debug.LogError("Invalid spawn point index!");
        }
    }

    // Method to set the target spawn point index
    public void SetTargetSpawnPointIndex(int index)
    {
        if (index >= 0 && index < spawnPoints.Length)
        {
            targetSpawnPointIndex = index;
        }
        else
        {
            Debug.LogError("Invalid spawn point index!");
        }
    }

    // Method to be called by the animation event
    public void TeleportPlayer()
    {
        if (targetSpawnPointIndex != -1)
        {
            TeleportToSpawnPoint(targetSpawnPointIndex);
            targetSpawnPointIndex = -1; // Reset after teleportation
        }
        else
        {
            Debug.LogError("Target spawn point index is not set!");
        }
    }

    // Method to update the teleport cost text for each button
    private void UpdateTeleportCosts()
{
    int closestSpawnPointIndex = FindClosestSpawnPointIndex(); // Find the closest spawn point to the player

    for (int i = 0; i < spawnPoints.Length; i++)
    {
        int cost = CalculateTeleportCost(closestSpawnPointIndex, i); // Calculate the cost for each target point

        // Update the button text based on the cost
        if (cost == 0)
        {
            teleportCostTexts[i].text = ""; // Set text to empty if cost is 0
        }
        else
        {
            teleportCostTexts[i].text = cost.ToString(); // Display the cost otherwise
        }

        // Get the Button component on the direct parent of the TextMeshProUGUI component
        Transform parentTransform = teleportCostTexts[i].transform.parent; // Get the parent transform
        if (parentTransform != null)
        {
            Button parentButton = parentTransform.GetComponent<Button>(); // Get the Button component on the direct parent

            // Check if the Button component exists
            if (parentButton != null)
            {
                parentButton.interactable = cost > 0; // Make button non-interactable if cost is 0, otherwise interactable
            }
        }
    }
}


    private void Update()
    {
        UpdateTeleportCosts(); // Update teleport costs every frame
    }
}
