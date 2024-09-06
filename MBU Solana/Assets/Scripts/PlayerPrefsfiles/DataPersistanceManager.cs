using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.SceneManagement;

public class DataPersistanceManager : MonoBehaviour
{
    [Header("File Storage Config")]

    [SerializeField] private string fileName;
    private GameData gamedata;

    private List<IDataPersistanceScript> dataPersistenceObjects;

    private FileDataHandler dataHandler;

    [SerializeField] private bool useEncryption;
    public static DataPersistanceManager instance { get; private set; }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void OnEnable()
    {
        // Register for the sceneLoaded event to call LoadGame when a new scene is loaded
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void Start()
    {
        this.dataHandler = new FileDataHandler(Application.persistentDataPath, fileName, useEncryption);
        this.dataPersistenceObjects = FindAllDataPersistanceObjects();
        LoadGame();  // Initial load when the game starts
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        Debug.Log("Scene Loaded: " + scene.name);
        this.dataPersistenceObjects = FindAllDataPersistanceObjects(); // Update the list of persistence objects in the new scene
        LoadGame();  // Load game data when the scene loads
    }

    public void NewGame()
    {
        this.gamedata = new GameData();
    }

    public void LoadGame()
    {

        if (dataHandler == null)
        {
            Debug.LogWarning("DataHandler is not initialized. Cannot load game data.");
            return;
        }

        Debug.Log("Loading Game");

        // Load any saved data from file using data handler
        GameData loadedData = dataHandler.Load();

        // If no data can be loaded, initialize to a new game
        if (loadedData == null)
        {
            Debug.Log("No data was found, initializing data to defaults");
            NewGame();
        }
        else
        {
            this.gamedata = loadedData;
        }

        // Push the loaded data to all other scripts that need it
        foreach (IDataPersistanceScript dataPersistanceObj in dataPersistenceObjects)
        {
            dataPersistanceObj.LoadData(gamedata);
        }
    }

    public void SaveGame()
    {
        Debug.Log("Saving Game");

        // Reset current game data before updating it
        GameData freshGameData = new GameData();

        // Pass the fresh data to other scripts so that they can update it
        foreach (IDataPersistanceScript dataPersistanceObj in dataPersistenceObjects)
        {
            dataPersistanceObj.SaveData(ref freshGameData);
        }

        // Now save the fresh data to a file using data handler
        dataHandler.Save(freshGameData);
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private List<IDataPersistanceScript> FindAllDataPersistanceObjects()
    {
        IEnumerable<IDataPersistanceScript> dataPersistanceObjects = FindObjectsOfType<MonoBehaviour>()
        .OfType<IDataPersistanceScript>();

        return new List<IDataPersistanceScript>(dataPersistanceObjects);
    }
}
