using System.IO;
using UnityEngine;

public class ClearGameData : MonoBehaviour
{
    [Header("File Storage Config")]
    [SerializeField] private string fileName; // Set this in the Unity inspector

    private void Start()
    {
        // Optionally, you can call ClearGameDataFile() here or link it to a button
    }

    public void ClearGameDataFile()
    {
        // Construct the full path to the game data file
        string filePath = Path.Combine(Application.persistentDataPath, fileName);

        // Check if the file exists
        if (File.Exists(filePath))
        {
            // Clear the contents of the file by writing an empty string
            File.WriteAllText(filePath, string.Empty);
            Debug.Log($"Game data file '{fileName}' cleared successfully.");
        }
        else
        {
            Debug.LogWarning($"Game data file '{fileName}' does not exist.");
        }
    }
}
