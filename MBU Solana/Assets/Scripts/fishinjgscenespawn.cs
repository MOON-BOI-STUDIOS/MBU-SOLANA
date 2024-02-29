using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishinjgscenespawn : MonoBehaviour
{

    public Transform playertransform;
    public Transform[] spawnLocations;

    public static fishinjgscenespawn Inst;
    

   private void Awake()
   {
     Inst = this;
   }
    // Start is called before the first frame update
    void Start()
    {
        playertransform.position = spawnLocations[PlayerPrefs.GetInt("LastLocationfishing")].position;
        PlayerPrefs.SetInt("LastLocationfishing", 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
