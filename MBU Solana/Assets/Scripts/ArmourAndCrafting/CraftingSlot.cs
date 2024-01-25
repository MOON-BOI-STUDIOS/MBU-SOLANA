using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftingSlot : ItemSlot
{
    public GameObject CraftingImageGo;
    private Image CraftingImage;
    private float CraftTime;

    public override void AddItem(Items newitem)
    {
        base.AddItem(newitem);
        CraftingImage = CraftingImageGo.GetComponent<Image>();
        CraftingImage.sprite = newitem.icon;
        CraftingImageGo.SetActive(false);
        CraftTime = ((CraftingRecipe)newitem).craftingTime;
    }

    public void StartCrafting()
    {
        if (gameObject.activeInHierarchy == true)
        {
            StartCoroutine(CraftingAnimation());
        }
    }

    private IEnumerator CraftingAnimation()
    {
        float timeElapsed = 0f;
        CraftingImageGo.SetActive(true);
        CraftingImage.fillAmount = 1f;

        while (timeElapsed < CraftTime)
        {
            timeElapsed += Time.deltaTime;
            CraftingImage.fillAmount = Mathf.Lerp(1f, 0f, timeElapsed / CraftTime);
            yield return null;
        }
        CraftingImageGo.SetActive(false);
    }

    private void OnDisable()
    {
        StopAllCoroutines();
        CraftingImageGo.SetActive(false);
    }
}
