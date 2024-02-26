using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    public static ButtonScript instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    private GameObject UIParent;
    private GameObject InventoryTab;
    public bool IsSellingItems = false;
    public void SwitchParent()
    {
        UIParent = GameObject.Find("InventoryButton");
        if(UIParent != null)
        {
            InventoryToggle.instance.InevtoryParent.SetActive(true);
            InventoryToggle.instance.InevtoryParent.transform.parent = UIParent.transform;
            
        }
    }
    public void SetSellingItems(bool value)
    {
        IsSellingItems = value;
    }

    public bool GetSellingItems()
    {
        return IsSellingItems;
    }
    public void turnOffInventoryTab()
    {
        InventoryTab = GameObject.Find("InventoryTab");
        if(InventoryTab != null)
        {
            InventoryTab.SetActive(false);
            InventoryToggle.instance.SwitchParent();
        }
    }
}
