using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPrefsManager : MonoBehaviour
{
    private ISaveData _saveData;
    private IDeleteData _deleteData;
    private ILoadData _loadData;

    private void Awake()
    {
        _saveData = GetComponent<ISaveData>();
        _deleteData = GetComponent<IDeleteData>();
        _loadData = GetComponent<ILoadData>();
    }

    public void SaveData(string keyName, int dataType, string sData = "Default")
    {
        switch (dataType)
        {
            case 0:
                if (PlayerPrefs.HasKey(keyName))
                {
                    int currentAmount = PlayerPrefs.GetInt(keyName);
                    PlayerPrefs.SetInt(keyName,currentAmount + 1);
                }
                else
                {
                    PlayerPrefs.SetInt(keyName,1);
                }
                break;
            case 1:
                if (PlayerPrefs.HasKey(keyName))
                {
                    float currentAmount = PlayerPrefs.GetFloat(keyName);
                    PlayerPrefs.SetFloat(keyName,currentAmount + 1.0f);
                }
                else
                {
                    PlayerPrefs.SetFloat(keyName,1.0f);
                }
                break;
            case 2:
                PlayerPrefs.SetString(keyName, sData);
                break;
            
        }
    }

    public void getSavedData(string keyName, int dataType)
    {
        switch (dataType)
        {
            case 0:
                if (PlayerPrefs.HasKey(keyName))
                {
                    int currentAmount = PlayerPrefs.GetInt(keyName);
                    PlayerPrefs.SetInt(keyName,currentAmount + 1);
                }
                else
                {
                    PlayerPrefs.SetInt(keyName,1);
                }
                break;
            case 1:
                if (PlayerPrefs.HasKey(keyName))
                {
                    float currentAmount = PlayerPrefs.GetFloat(keyName);
                    PlayerPrefs.SetFloat(keyName,currentAmount + 1.0f);
                }
                break;
            case 2:
                PlayerPrefs.GetString(keyName);
                break;
        }
    }
}
