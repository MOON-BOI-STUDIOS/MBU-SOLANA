using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace MagicWebSolutions
{
    public class UpdateUI_Elements : MonoBehaviour
    {
        public GameObject playButton, pauseButton, playButtonInvisibleBig, pauseButtonInvisibleBig;
        public TextMeshProUGUI playbackSpeedTextInSettings;

        public void SetPlayButtonActive(bool isPlayButtonActive)
        {
            playButton.SetActive(isPlayButtonActive);
            playButtonInvisibleBig.SetActive(isPlayButtonActive);
            pauseButton.SetActive(!isPlayButtonActive);
            pauseButtonInvisibleBig.SetActive(!isPlayButtonActive);
        }

        public void UpdatePlaybackSpeedTextInSettings()
        {
            Debug.Log("PLAYBACK_SPEED: " + PlayerPrefs.GetFloat("PlaybackSpeed" + GetComponentInParent<VideoPlayerWebGL>().videoId, 0f).ToString());
            playbackSpeedTextInSettings.text = "x" + PlayerPrefs.GetFloat("PlaybackSpeed" + GetComponentInParent<VideoPlayerWebGL>().videoId, 0f).ToString();

            if (playbackSpeedTextInSettings.text == "x1")
                playbackSpeedTextInSettings.text = "Normal";
        }
    }
}
