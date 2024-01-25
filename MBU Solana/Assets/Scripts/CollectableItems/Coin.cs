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
            other.gameObject.GetComponent<IAddToInventory>().AdditionToInventory(_itemInfo.itemName,_itemInfo.itemNumber);
            if (particleImpactPrefab != null)
            {
                Debug.Log("ParticleEffect");
                particleImpactPrefab.Play();
            }
            Destroyable();
        }
    }

    public override void Destroyable()
    {
        StartCoroutine(nameof(DestroyGameObject));
    }

    IEnumerator DestroyGameObject()
    {
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }
}
