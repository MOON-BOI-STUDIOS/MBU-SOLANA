using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class DataPersistanceManager : MonoBehaviour
{
    [Header("File Storage Config")]

    [SerializeField] private string fileName;
    private GameData gamedata;

    private List<IDataPersistanceScript> dataPersistenceObjects;

    private FileDataHandler dataHandler;

    [SerializeField] private bool useEncryption;
    public static DataPersistanceManager instance { get; private set;}

    private void Awake()
    {
        if(instance != null)
        {
            Debug.LogError("Found one or more data persistance script in the scene");
        }
        instance = this;
        DontDestroyOnLoad(this.gameObject);
    }

    private void Start()
    {
        this.dataHandler = new FileDataHandler(Application.persistentDataPath, fileName, useEncryption);
        this.dataPersistenceObjects = FindAllDataPersistanceObjects();
        LoadGame();
    }

    public void NewGame()
    {
        this.gamedata = new GameData();
    }

    public void LoadGame()
    {
        Debug.Log("Loading Game");
        // Todo Load any saved data from file using data handler
        this.gamedata = dataHandler.Load();

        //if no data can be loaded initialise to a new game
        if(this.gamedata == null)
        {
            Debug.Log("No data was found initialising data to defaults");
            NewGame();
        }

        // push the loaded data to all other scripts that need it
        foreach(IDataPersistanceScript dataPersistanceObj in dataPersistenceObjects)
        {
            dataPersistanceObj.LoadData(gamedata);
        }
    }

    public void SaveGame()
    {
        Debug.Log("Saving Game");
        //pass the data to other scripts so that they can update it
        foreach(IDataPersistanceScript dataPersistanceObj in dataPersistenceObjects)
        {
            dataPersistanceObj.SaveData(ref gamedata);
        }
        //save the data to a file using data handler
        dataHandler.Save(gamedata);
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
