using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryToggle : MonoBehaviour
{

    private bool inventoryOpen = false;

    public bool InventoryOpen => inventoryOpen;

    public GameObject InevtoryParent;

    public GameObject InventoryTab;

    public GameObject CraftingTab;

    private List<ItemSlot> itemSlots = new List<ItemSlot>();

    public GameObject inventorySlotPrefab;
    public GameObject CraftingSlotPrefab;

    public Transform inventoryItemTransform;

    public Transform craftingIItemTransform;
    // Start is called before the first frame update
    void Start()
    {
        ItemInventory.instance.onItemChange += UpdateInventoryUI;
        UpdateInventoryUI();
        SetupCraftingRecipes();
    }

    private void UpdateInventoryUI()
    {
        int currentItemCount = ItemInventory.instance.inventoryItemList.Count;

        if(currentItemCount > itemSlots.Count)
        {
            //Add more item slots
            AddItemSlots(currentItemCount);
        }

        for(int i = 0; i < itemSlots.Count; ++i)
        {
            if(i < currentItemCount)
            {
                //update the current item in the slot
                itemSlots[i].AddItem(ItemInventory.instance.inventoryItemList[i]);
            }
            else
            {
                itemSlots[i].DestroySlot();
                itemSlots.RemoveAt(i);
            }
        }
    }


    private void SetupCraftingRecipes()
    {
        List<Items> craftingRecipes = DummyItemScript.instance.CraftingReceipes;

        foreach(Items recipe in craftingRecipes)
        {
            GameObject Go = Instantiate(CraftingSlotPrefab, craftingIItemTransform);
            CraftingSlot slot = Go.GetComponent<CraftingSlot>();
            slot.AddItem(recipe);

            CraftingRecipe craftingRecipe = (CraftingRecipe)recipe;
            craftingRecipe.SetParentSlot(slot);
        }
    }

    private void AddItemSlots(int currentItemCount)
    {
        int amount = currentItemCount - itemSlots.Count;

        for(int i = 0; i < amount; ++i)
        {
            GameObject GO = Instantiate(inventorySlotPrefab, inventoryItemTransform);
            ItemSlot newSlot = GO.GetComponent<ItemSlot>();
            itemSlots.Add(newSlot);
        }
    }
    

    // Update is called once per frame
    void Update()
    {
        //Uncomment for Webgl build
        /*if (Input.GetKeyDown(KeyCode.I))
        {
            if (inventoryOpen)
            {
                CloseInventory();
            }
            else
            {
                OpenInventory();
            }
        }*/
    }

    public void ToggleInventory()
    {
        if (inventoryOpen)
        {
            CloseInventory();
        }
        else
        {
            OpenInventory();
        }
    }

    public void OpenInventory()
    {
        inventoryOpen = true;
        InevtoryParent.SetActive(true);
        //Uncomment for WebGl Build
        //ChangeCursorState(false);
    }

    public void CloseInventory()
    {
        inventoryOpen = false;
        InevtoryParent.SetActive(false);
        //Uncomment for WebGl Build
        //ChangeCursorState(true);
    }

    public void InventoryTabOpen()
    {
        InventoryTab.SetActive(true);
        CraftingTab.SetActive(false);
    }

    public void CraftingTabOpen()
    {
        InventoryTab.SetActive(false);
        CraftingTab.SetActive(true);
    }

    private void ChangeCursorState(bool lockCursor)
    {
        if (lockCursor)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
    }
}
