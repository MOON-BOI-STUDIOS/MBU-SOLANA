using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ItemSlot: MonoBehaviour
{
    public Image icon;
    public TMP_Text _text;
    private Items _items;
    

    public virtual void AddItem(Items newitem)
    {
        _items = newitem;
        icon.sprite = newitem.icon;
        _text.text = newitem.name;
    }

    public void ClearSlot()
    {
        _items = null;
        icon.sprite = null;
    }

    public void UseItem()
    {
        if (_items == null) return;
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
        if(_items == null) return;
        //display Item Info
        DummyItemScript.instance.DisplayItemInfo(_items.name,_items.GetItemDescription(),transform.position);
    }

    public void OnCursorExit()
    {
        if(_items == null) return;
        DummyItemScript.instance.DestroyItemInfo();
    }

}
