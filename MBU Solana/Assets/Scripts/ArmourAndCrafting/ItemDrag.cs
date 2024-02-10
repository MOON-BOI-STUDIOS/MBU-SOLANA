using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ItemDrag : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    private ItemSlot itemSlot;
    private RectTransform hotbarRect;
    private RectTransform inventoryRect;

    public GameObject previewPrefab;
    private GameObject currentPreview;
    private Image image;
    private Color baseColor;
    private bool isHotbarSlot;
        // Start is called before the first frame update
    void Start()
    {
        itemSlot = GetComponent<ItemSlot>();
        hotbarRect = AddInventoryItemScript.instance.HotbarTransform as RectTransform;
        inventoryRect = AddInventoryItemScript.instance.HotbarTransform as RectTransform;

        image = GetComponent<Image>();
        baseColor = image.color;

        isHotbarSlot = RectTransformUtility.RectangleContainsScreenPoint(hotbarRect, transform.position);
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        itemSlot.OnCursorExit();
        itemSlot.isBeingDragged = true;

        // change alpha

        var tmpColor = baseColor;
        tmpColor.a = 0.6f;
        image.color = tmpColor;

        currentPreview = Instantiate(previewPrefab, AddInventoryItemScript.instance.InventorymainCanvas);
        currentPreview.GetComponent<Image>().sprite = itemSlot.Item.icon;
        currentPreview.transform.position = transform.position;
    }

    public void OnDrag(PointerEventData eventData)
    {
        currentPreview.transform.position = Input.mousePosition;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        itemSlot.isBeingDragged = false;
        image.color = baseColor;

        if((RectTransformUtility.RectangleContainsScreenPoint(hotbarRect, Input.mousePosition) && !isHotbarSlot)
        || (RectTransformUtility.RectangleContainsScreenPoint(inventoryRect, Input.mousePosition) && isHotbarSlot))
        {
            ItemInventory.instance.SwitchHotInventory(itemSlot.Item);
        }

        Destroy(currentPreview);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
