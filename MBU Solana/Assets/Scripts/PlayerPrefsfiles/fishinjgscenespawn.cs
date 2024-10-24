using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishinjgscenespawn : MonoBehaviour
{
    public GameObject player;

    public static fishinjgscenespawn instance;
    [SerializeField] Transform gateSpawnPoint;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void Start()
    {
        if (PlayerPrefs.GetInt("InFishingShop") == 1)
        {
            float pX = player.transform.position.x;
            float pY = player.transform.position.y;
            float pZ = player.transform.position.z;

            pX = PlayerPrefs.GetFloat("p_x");
            pY = PlayerPrefs.GetFloat("p_y");
            pZ = PlayerPrefs.GetFloat("p_z");
            player.transform.position = new Vector3(pX, pY, pZ);
           
        }

        else
        {
            player.transform.position = gateSpawnPoint.position;
        }
    }

    public void playerPosSave()
    {
        PlayerPrefs.SetFloat("p_x", player.transform.position.x);
        PlayerPrefs.SetFloat("p_y", player.transform.position.y);
        PlayerPrefs.SetFloat("p_z", player.transform.position.z);
        PlayerPrefs.SetInt("InFishingShop", 1);
        //playerPosSave();
    }

   
    public void DeletePosition()
    {
        PlayerPrefs.DeleteKey("p_x");
        PlayerPrefs.DeleteKey("p_y");
        PlayerPrefs.DeleteKey("p_z");
        PlayerPrefs.DeleteKey("InFishingShop");

    }
}
