using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ItemSlot: MonoBehaviour
{
    public Image icon;
    private Items _items;
    private int ItemValue;
    public bool isBeingDragged = false;

    public Items Item => _items;
    

    public virtual void AddItem(Items newitem)
    {
        _items = newitem;
        icon.sprite = newitem.icon;
        ItemValue = newitem.ItemValue;
    }

    public void ClearSlot()
    {
        _items = null;
        icon.sprite = null;
    }

    public void UseItem()
    {
        if (_items == null || isBeingDragged == true) return;
        if(Input.GetKey(KeyCode.H))
        {
            ItemInventory.instance.SwitchHotInventory(_items);
        }
        else
        {
            _items.Use();
        }
        
    }

    public void DestroySlot()
    {
        Destroy(gameObject);
    }
    
    public void OnRemoveButtonClicked()
    {
        if (_items != null)
        {
            ItemInventory.instance.RemoveItem(_items);
        }
    }

    public void OnCursorEnter()
    {
        if(_items == null || isBeingDragged == true) return;
        //display Item Info
        if(string.Equals(_items.classOfItem.ToString(),"bait"))
        {
            BaitItemObjj queryItem = (BaitItemObjj)_items;
            int baitValue = queryItem.GetbaitValue();
            AddInventoryItemScript.instance.DisplayItemInfo(_items.name,_items.GetItemDescription(),
            _items.GetItemValue(),baitValue,transform.position);
        }
        else{
            AddInventoryItemScript.instance.DisplayItemInfo(_items.name,_items.GetItemDescription(),
            _items.GetItemValue(),0,transform.position);
        }
    }

    public void OnCursorExit()
    {
        if(_items == null) return;
        AddInventoryItemScript.instance.DestroyItemInfo();
    }

}
