using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// The first level class or the parent class which will hold only methods used 
// by all the classes which will inherit from this class.
public abstract class Item : MonoBehaviour
{
    public ItemInfo _itemInfo;
    public GameObject _gameObject;

    public abstract void Use();
}
