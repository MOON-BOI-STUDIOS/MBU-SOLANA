using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private GameObject UIParent;
    public void SwitchParent()
    {
        UIParent = GameObject.Find("UI");
        if(UIParent != null)
        {
            InventoryToggle.instance.InevtoryParent.SetActive(true);
            InventoryToggle.instance.InevtoryParent.transform.parent = UIParent.transform;
            
        }
    }
}
