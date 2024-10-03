using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnerDesertScene : MonoBehaviour
{
    public GameObject[] enemyPrefabs; // Array to hold the enemy prefabs
    public int maxEnemies; // Maximum number of enemies allowed in the scene
    public float respawnTime = 3f; // Time before respawning an enemy
    public float spawnRadius = 1f; // Minimum distance to maintain between enemies
    public GameObject[] spawnAreas; // Array of GameObjects defining spawn areas

    private void Start()
    {
        // Start the coroutine to check and spawn enemies
        StartCoroutine(CheckAndSpawnEnemies());
    }

    private IEnumerator CheckAndSpawnEnemies()
    {
        while (true)
        {
            // Check the current number of enemies with the tag "Enemy"
            int currentEnemyCount = GameObject.FindGameObjectsWithTag("Enemy").Length;

            // If the number of enemies is less than the maximum allowed, spawn more
            while (currentEnemyCount < maxEnemies)
            {
                SpawnEnemy();
                currentEnemyCount++; // Increment the count of active enemies
                // No delay between spawning enemies
            }

            // If the number of enemies is at the maximum, wait for 5 seconds before checking again
            if (currentEnemyCount >= maxEnemies)
            {
                yield return new WaitForSeconds(5f);
            }
        }
    }

    private void SpawnEnemy()
    {
        // Choose a random enemy prefab
        GameObject enemyPrefab = enemyPrefabs[Random.Range(0, enemyPrefabs.Length)];

        // Instantiate the enemy
        GameObject enemy = Instantiate(enemyPrefab);

        // Set its initial position
        Vector3 spawnPosition = GetRandomSpawnPosition();
        if (spawnPosition != Vector3.zero) // Ensure a valid position is returned
        {
            enemy.transform.position = spawnPosition;

            // Activate the enemy (if necessary, depending on prefab settings)
            enemy.SetActive(true);
        }
        else
        {
            Debug.LogWarning("No valid spawn position found!"); // Log warning if no position found
            Destroy(enemy); // Destroy the enemy if it couldn't find a valid position
        }
    }

    private Vector3 GetRandomSpawnPosition()
    {
        // Randomly choose one of the spawn areas
        GameObject spawnArea = spawnAreas[Random.Range(0, spawnAreas.Length)];
        BoxCollider2D boxCollider = spawnArea.GetComponent<BoxCollider2D>();

        // Generate a random point within the bounds of the BoxCollider2D
        Vector3 randomPoint = new Vector3(
            Random.Range(boxCollider.bounds.min.x, boxCollider.bounds.max.x),
            Random.Range(boxCollider.bounds.min.y, boxCollider.bounds.max.y), // Use Y for 2D
            0 // Z position can stay constant if using 2D
        );

        // Check if the random point is within the walkable area
        if (IsPositionWalkable(randomPoint) && !IsPositionOccupied(randomPoint))
        {
            return randomPoint; // Return the valid position if it is not occupied
        }

        // If no valid position is found, return a default value (0, 0, 0)
        return Vector3.zero;
    }

    private bool IsPositionOccupied(Vector3 position)
    {
        // Check if the position is too close to any occupied position
        foreach (var enemy in GameObject.FindGameObjectsWithTag("Enemy"))
        {
            if (Vector3.Distance(position, enemy.transform.position) < spawnRadius)
            {
                return true; // Position is occupied
            }
        }
        return false; // Position is not occupied
    }

    private bool IsPositionWalkable(Vector3 position)
    {
        // Implement your own logic to check if the position is on a walkable area.
        // If you have a 2D NavMesh, you may have a method to check walkability.
        return true; // Replace this with actual check
    }
}
