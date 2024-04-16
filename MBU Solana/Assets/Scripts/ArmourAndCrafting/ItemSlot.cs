using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ItemSlot: MonoBehaviour
{
    public Image icon;
<<<<<<< HEAD
    public TMP_Text _text;
    private Items _items;
=======
    private Items _items;
    private int ItemValue;
    public bool isBeingDragged = false;

    public Items Item => _items;
>>>>>>> Game_Dev
    

    public virtual void AddItem(Items newitem)
    {
        _items = newitem;
        icon.sprite = newitem.icon;
<<<<<<< HEAD
        _text.text = newitem.name;
=======
        ItemValue = newitem.ItemValue;
>>>>>>> Game_Dev
    }

    public void ClearSlot()
    {
        _items = null;
        icon.sprite = null;
    }

    public void UseItem()
    {
<<<<<<< HEAD
        if (_items == null) return;
=======
        if (_items == null || isBeingDragged == true) return;
>>>>>>> Game_Dev
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
<<<<<<< HEAD
        if(_items == null) return;
        //display Item Info
        DummyItemScript.instance.DisplayItemInfo(_items.name,_items.GetItemDescription(),transform.position);
=======
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
>>>>>>> Game_Dev
    }

    public void OnCursorExit()
    {
        if(_items == null) return;
<<<<<<< HEAD
        DummyItemScript.instance.DestroyItemInfo();
=======
        AddInventoryItemScript.instance.DestroyItemInfo();
>>>>>>> Game_Dev
    }

}
