using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = " Roditem", menuName = "Rodshop")]
public class RodItemObj : ScriptableObject
{
    public Sprite image;

    public string ItemName;
    [Range(0, 100)] public float luck;
    [Range(0, 100)] public float Minrarity;
    [Range(0, 100)] public float Maxrarity;
    public int price;

    public bool isPurchased;
}
