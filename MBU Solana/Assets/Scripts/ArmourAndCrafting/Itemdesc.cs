using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Itemdesc : MonoBehaviour
{
    public TMP_Text ItemName;
    public TMP_Text ItemDescription;

    public void Setup(string _itemName, string _itemDescription)
    {
        ItemName.text = _itemName;
        ItemDescription.text = _itemDescription;
    }
}
