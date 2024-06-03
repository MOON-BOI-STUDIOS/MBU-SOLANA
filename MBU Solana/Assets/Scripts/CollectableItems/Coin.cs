using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : Collectables
{
    private void Awake()
    {
    }

    
    public override void Use()
    {
    }
    
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other != null)
        {
<<<<<<< HEAD
            other.gameObject.GetComponent<IAddToInventory>().AdditionToInventory(_itemInfo.itemName,_itemInfo.itemNumber);
=======
            //other.gameObject.GetComponent<IAddToInventory>().AdditionToInventory(_itemInfo.itemName,_itemInfo.itemNumber);
>>>>>>> Game_Dev
            if (particleImpactPrefab != null)
            {
                //Debug.Log("ParticleEffect");
                particleImpactPrefab.Play();
            }
            Destroyable();
        }
    }

    public override void Destroyable()
    {
        StartCoroutine(nameof(DestroyGameObject));
        WaveManager.RemoveCoin(gameObject);
    }

    IEnumerator DestroyGameObject()
    {
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }
}
