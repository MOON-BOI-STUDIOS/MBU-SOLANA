using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HotBarController : MonoBehaviour
{

    public int HotBarSlotSize => gameObject.transform.childCount;
    private List<ItemSlot> hotbarSlots = new List<ItemSlot>();

    KeyCode[] hotbarKeys = new KeyCode[] {KeyCode.Alpha1, KeyCode.Alpha2, KeyCode.Alpha3};
    // Start is called before the first frame update
    void Start()
    {
        SetupHotBarSlots();
        ItemInventory.instance.onItemChange += UpdateHotbarUI;
    }

    // Update is called once per frame
    void Update()
    {
        for(int i = 0;i < hotbarKeys.Length;i++)
        {
            if(Input.GetKeyDown(hotbarKeys[i]))
            {
                Debug.Log("Use Item: " + i);
                //Use Item
                hotbarSlots[i].UseItem();
                return;
            }
        }
    }

    private void UpdateHotbarUI()
    {
        int currentUsedSlotCount = ItemInventory.instance.hotbarItemList.Count;
        for(int i = 0 ;i < HotBarSlotSize;i++)
        {
            if(i < currentUsedSlotCount)
            {
                hotbarSlots[i].AddItem(ItemInventory.instance.hotbarItemList[i]);
            }
            else
            {
                hotbarSlots[i].ClearSlot();
            }
        }
    }

    private void SetupHotBarSlots()
    {
        for(int i = 0;i < HotBarSlotSize;i++)
        {
            ItemSlot slot = gameObject.transform.GetChild(i).GetComponent<ItemSlot>();
            hotbarSlots.Add(slot);
        }
    }
}
