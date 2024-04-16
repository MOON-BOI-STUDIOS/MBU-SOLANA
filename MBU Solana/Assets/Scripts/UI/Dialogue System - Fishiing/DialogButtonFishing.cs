using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// script by Oliver
// sid 1901981
// https://www.youtube.com/watch?v=Yri0C-E7xG4&list=PL32dY9P_7YSpifhyXmDgi_Zn1fuuNKZ8V - by Bev!Bird - link is to whole playlist
public class DialogButtonFishing : MonoBehaviour
{
    /// <summary>
    /// skips to next line of dialogue
    /// </summary>
    public void GetNextLine()
    {
        DialogueManagerFishing.instance.DequeueDialog();

       
    }
}
