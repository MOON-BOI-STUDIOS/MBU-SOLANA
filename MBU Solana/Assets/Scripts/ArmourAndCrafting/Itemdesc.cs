using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Itemdesc : MonoBehaviour
{
    public TMP_Text ItemName;
    public TMP_Text ItemDescription;
    public TMP_Text ItemValue;
    public TMP_Text NumberOfItems;

    public void Setup(string _itemName, string _itemDescription,int _itemValue, int _numberOfItems)
    {
        ItemName.text = _itemName;
        ItemDescription.text = _itemDescription;
        ItemValue.text = _itemValue.ToString();
        NumberOfItems.text = _numberOfItems.ToString();
    }
}
