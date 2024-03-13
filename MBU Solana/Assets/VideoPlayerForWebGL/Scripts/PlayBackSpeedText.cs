using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace MagicWebSolutions
{
    public class PlayBackSpeedText : MonoBehaviour
    {
        void Start()
        {
            Debug.Log("PLAYBACK_SPEED: " + PlayerPrefs.GetFloat("PlaybackSpeed" + GetComponentInParent<VideoPlayerWebGL>().videoId, 0f).ToString());
            GetComponent<TextMeshProUGUI>().text = "x" + PlayerPrefs.GetFloat("PlaybackSpeed" + GetComponentInParent<VideoPlayerWebGL>().videoId, 0f).ToString();

            if (GetComponent<TextMeshProUGUI>().text == "x1")
                GetComponent<TextMeshProUGUI>().text = "Normal";
        }
    }
}