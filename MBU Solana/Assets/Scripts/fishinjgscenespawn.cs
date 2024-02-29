using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishinjgscenespawn : MonoBehaviour
{
    public GameObject player;
    public void Start()
    {
        if (PlayerPrefs.GetInt("Saved") == 1)
        {
            float pX = player.transform.position.x;
            float pY = player.transform.position.y;
            float pZ = player.transform.position.z;

            pX = PlayerPrefs.GetFloat("p_x");
            pY = PlayerPrefs.GetFloat("p_y");
            pZ = PlayerPrefs.GetFloat("p_z");
            player.transform.position = new Vector3(pX, pY, pZ);
           
        }
    }

    public void playerPosSave()
    {
        PlayerPrefs.SetFloat("p_x", player.transform.position.x);
        PlayerPrefs.SetFloat("p_y", player.transform.position.y);
        PlayerPrefs.SetFloat("p_z", player.transform.position.z);
        PlayerPrefs.SetInt("Saved", 1);
        playerPosSave();
    }

   


}
