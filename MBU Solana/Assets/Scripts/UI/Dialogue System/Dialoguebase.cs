using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "New Dialogue", menuName = "Dialogues")]
// script by Oliver
// sid 1901981
// https://www.youtube.com/watch?v=Yri0C-E7xG4&list=PL32dY9P_7YSpifhyXmDgi_Zn1fuuNKZ8V - by Bev!Bird - link is to whole playlist
public class Dialoguebase : ScriptableObject
{
    // infor for dialogue bas
    [System.Serializable]
    public class Info
    {
        // profile reference
        //public CharacterProfile profile;
        // text to put dialogue in
        [TextArea(4, 8)]
        public string text;
        //public string audioClip; // audio reference
    }

    [Header("Insert Dialogue Information Below")]
    public Info[] dialogueInfo;
}
