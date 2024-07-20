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
            DontDestroyOnLoad(gameObject);
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }
    private GameObject UIParent;
    private GameObject InventoryTab;
    public bool IsSellingItems = false;
    public void SwitchParent()
    {
        UIParent = GameObject.Find("InventoryButton");
        if (UIParent != null)
        {
            Debug.Log("InventoryButton found");
            if (InventoryToggle.instance != null && InventoryToggle.instance.InevtoryParent != null)
            {
                InventoryToggle.instance.InevtoryParent.SetActive(true);
                InventoryToggle.instance.InevtoryParent.transform.parent = UIParent.transform;
            }
            else
            {
                Debug.LogError("InventoryToggle.instance or InventoryToggle.instance.InevtoryParent is null");
            }
        }
        else
        {
            Debug.LogError("InventoryButton not found");
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
