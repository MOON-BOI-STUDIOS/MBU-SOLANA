using UnityEngine;

public class PlayerTeleport : MonoBehaviour
{
    public Transform player; // Reference to the player GameObject
    public Transform[] spawnPoints; // Array of spawn points
    public Animator playerAnimator;

    private int targetSpawnPointIndex = -1; // Index of the target spawn point

    // Method to teleport the player to a specific spawn point
    private void TeleportToSpawnPoint(int index)
    {
        if(index >= 0 && index < spawnPoints.Length)
        {
            player.position = spawnPoints[index].position;
        }
        else
        {
            Debug.LogError("Invalid spawn point index!");
        }
    }

    // Method to set the target spawn point index
    public void SetTargetSpawnPointIndex(int index)
    {
        if(index >= 0 && index < spawnPoints.Length)
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
        if(targetSpawnPointIndex != -1)
        {
            TeleportToSpawnPoint(targetSpawnPointIndex);
            targetSpawnPointIndex = -1; // Reset after teleportation
        }
        else
        {
            Debug.LogError("Target spawn point index is not set!");
        }
    }
}
