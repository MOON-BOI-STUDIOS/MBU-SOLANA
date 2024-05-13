using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoundInfo : MonoBehaviour
{
    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;

    // Start is called before the first frame update
    void Start()
    {
        // Add If statement if locally controlled find the Player manager of the Owner and get a referenc of the Script
        playerManagerScript = GameObject.FindGameObjectWithTag("Player");
        //get the Enemy in case of single player and incase of multiplayer get the other player
        enemyManagerScript = GameObject.FindGameObjectWithTag("Enemy");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
