using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

public class FileDataHandler
{

    private string dataDirPath = "";
    private string dataFileName = "";

    private bool useEncryption = false;
    private readonly string encryptedCodeWord = "word";

    public FileDataHandler(string dirPath, string fileName, bool useEncryption)
    {
        this.dataDirPath = dirPath;
        this.dataFileName = fileName;
        this.useEncryption = useEncryption;
    }

    public GameData Load()
    {
        Debug.Log("Loading the game file data handler");
        //use Path.Combine to account for different OS's
        string fullPath = Path.Combine(dataDirPath,dataFileName);
        Debug.Log("FULL PATH LOAD "+ fullPath);
        GameData loadedData = null;
        if(File.Exists(fullPath))
        {
            try{
                //Load the serialised data from file
                string dataToLoad = "";
                using(FileStream stream = new FileStream(fullPath, FileMode.Open))
                {
                    using(StreamReader reader = new StreamReader(stream))
                    {
                        dataToLoad = reader.ReadToEnd();
                    }
                }

                // Optionally decrypt the data
                if(useEncryption)
                {
                    dataToLoad = EncryptDecrypt(dataToLoad);
                }
                // Deserialise the Json file back into our game data object
                loadedData = JsonUtility.FromJson<GameData>(dataToLoad);
            }
            catch(Exception e)
            {
                Debug.LogError("Error occured when trying to save data file" + fullPath + "\n" + e);
            }
        }
        if(loadedData != null)
        {
            Debug.Log("DATA LOAD COUNT" + loadedData.savedData.Count);
        }
        
        return loadedData;
    }

    public void Save(GameData data)
    {
        Debug.Log("Saving the game to file data handler");
        //use Path.Combine to account for different OS's
        string fullPath = Path.Combine(dataDirPath,dataFileName);

        try{
            //Create a directory path just in case it doesn't exist in our computer
            Directory.CreateDirectory(Path.GetDirectoryName(fullPath));

            //Serialise the C# game data object into Json
            string dataToStore = JsonUtility.ToJson(data, true);
            Debug.Log("SAVED DATA COUNT " + data.savedData.Count);

            //optionally encrypt the file
            if(useEncryption)
            {
                dataToStore = EncryptDecrypt(dataToStore);
            }
            // Write the serialised data to the file
            using (FileStream stream = new FileStream(fullPath, FileMode.Create))
            {
                using(StreamWriter writer = new StreamWriter(stream))
                {
                    writer.Write(dataToStore);
                }
            }


        }
        catch(Exception e)
        {
            Debug.LogError("Error occured when trying to save data file" + fullPath + "\n" + e);
        }
    }

    // below is a simple implementation of XOR operation 
    private string EncryptDecrypt(string data)
    {
        string modifiedData = "";
        for(int i = 0;i <  data.Length; i++)
        {
            modifiedData += (char) (data[i]^ encryptedCodeWord[i % encryptedCodeWord.Length]);   
        }
        return modifiedData;
    }
}
