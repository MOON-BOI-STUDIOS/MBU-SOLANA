using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class FSController : MonoBehaviour
{
    public float speed;



    private PhotonView pv;

    private void Start()
    {
       
        pv = GetComponent<PhotonView>();
        
    }

    private void Update()
    {
        if (pv.IsMine)
        {
            float moveHorizontal = Input.GetAxis("Horizontal");
            float moveVertical = Input.GetAxis("Vertical");

            Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

            transform.position += movement * speed * Time.deltaTime;
        }
    }

 

}
