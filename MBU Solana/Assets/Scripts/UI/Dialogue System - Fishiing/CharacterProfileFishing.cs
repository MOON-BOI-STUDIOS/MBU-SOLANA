using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// script by Oliver
// 1901981
// https://www.youtube.com/watch?v=Yri0C-E7xG4&list=PL32dY9P_7YSpifhyXmDgi_Zn1fuuNKZ8V - by Bev!Bird - link is to whole playlist
[CreateAssetMenu(fileName ="New Profile", menuName ="Character")]
public class CharacterProfileFishing : ScriptableObject
{
    // insert info in editor for dialogue base
    [Header("Info")]
    public string myName;
    public Sprite myPortrait;
    public AudioClip voice;
}
