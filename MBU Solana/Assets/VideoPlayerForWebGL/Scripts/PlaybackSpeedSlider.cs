using TMPro;
using UnityEngine;
using UnityEngine.UI;
using MagicWebSolutions;

namespace MagicWebSolutions
{
    public class PlaybackSpeedSlider : MonoBehaviour
    {
        public TextMeshProUGUI speedText;
        public float sliderStep = 0.05f;

        private SettingsPanel settingsPanel;
        private Slider slider;
        private float tempSpeed;
        private VideoPlayerWebGL videoPlayer;

        private void Start()
        {
            videoPlayer = GetComponentInParent<VideoPlayerWebGL>();
            slider = GetComponent<Slider>();
            settingsPanel = GetComponentInParent<SettingsPanel>();
            ChangePlaybackSpeedSliderOnly();
        }

        public void ChangePlaybackSpeedSliderOnly()
        {
            slider.value = PlayerPrefs.GetFloat("PlaybackSpeed" + GetComponentInParent<VideoPlayerWebGL>().videoId, 1f);
        }

        public void ChangePlaybackSpeed(float newSpeed)
        {
            tempSpeed = newSpeed;

            videoPlayer.SetPlaybackSpeed(tempSpeed);
        }

        public void OnSliderValueChanged()
        {
            float value = slider.value;

            // Round the slider value to the nearest multiple of the step size
            float roundedValue = Mathf.Round(value / sliderStep) * sliderStep;
            UpdateText(roundedValue);

            settingsPanel.UpdatePlaybackSpeedText();

            ChangePlaybackSpeed(value);
        }

        private void UpdateText(float value)
        {
            // Round the value to two decimal places for display
            tempSpeed = Mathf.Round(value * 100) / 100f;
            string formattedValue = "x" + tempSpeed.ToString();
            speedText.text = formattedValue;
        }
    }
}
