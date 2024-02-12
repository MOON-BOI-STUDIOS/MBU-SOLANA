using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetItem : MonoBehaviour
{
    // Start is called before the first frame update

    public Items itemObject;

    private void Start()
    {
    } 

    public void LooseCurrncy()
    {
        if(itemObject != null)
        {
            // Call to reduce gold coin of the player
            //TempCurrency -= itemObject.GetItemValue();
            Debug.Log("Value of the item is:" + itemObject.GetItemValue());
            // Write code to Add item to the inventory here
            AddInventoryItemScript.instance.AddToInventory(itemObject);
        }
    }


}
