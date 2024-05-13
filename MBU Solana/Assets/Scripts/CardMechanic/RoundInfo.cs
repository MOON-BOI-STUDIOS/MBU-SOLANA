using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RoundInfo : MonoBehaviour
{
    private GameObject playerManagerScript;
    private GameObject enemyManagerScript;
    private RoundScript RoundScript;

    public TextMeshProUGUI enemyph1, enemyph2, enemyph3, plph1, plph2, plph3;

    // Start is called before the first frame update
    void Start()
    {
        RoundScript = GetComponent<RoundScript>();
        // Add If statement if locally controlled find the Player manager of the Owner and get a referenc of the Script
        playerManagerScript = GameObject.FindGameObjectWithTag("Player");
        //get the Enemy in case of single player and incase of multiplayer get the other player
        enemyManagerScript = GameObject.FindGameObjectWithTag("Enemy");

       
    }

    // Update is called once per frame
    void Update()
    {
        // Player choice of Phase1, 
      enemyph1.text = RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase1Options.ToString();
      enemyph2.text =  RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase2Options.ToString();
      enemyph3.text =  RoundScript.GetPlayerScript().GetComponent<PlayerManager>().Phase3Options.ToString();

        //Enemy choice of Phase1
       plph1.text = RoundScript.GetEnemyScript().GetComponent<PlayerManager>().Phase1Options.ToString();
    }
}
