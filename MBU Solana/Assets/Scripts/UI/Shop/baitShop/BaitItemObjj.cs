using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = " baititem", menuName = "Baitshop")]
public class BaitItemObjj : Items
{
    [Range(0, 100)] public float luck;
    [Range(0, 100)] public float bait;
    public bool isPurchased;

}
