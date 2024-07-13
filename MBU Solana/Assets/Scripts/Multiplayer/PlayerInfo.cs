using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    public static PlayerInfo info;

    public int mySelectedCharacter;

    public GameObject[] allCharacters;

    private void OnEnable()
    {
        if(PlayerInfo.info == null)
        {
            PlayerInfo.info = this;
        }
        else
        {
            if(PlayerInfo.info != this)
            {
                Destroy(PlayerInfo.info.gameObject);
                PlayerInfo.info = this;
            }
        }
    }

    private void Start()
    {
        if (PlayerPrefs.HasKey("MyCharacter"))
        {
            mySelectedCharacter = PlayerPrefs.GetInt("MyCharacter");
        }
        else
        {
            mySelectedCharacter = 0;
            PlayerPrefs.SetInt("MyCharacter", mySelectedCharacter);
        }
    }

}
