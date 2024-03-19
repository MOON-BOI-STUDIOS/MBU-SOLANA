using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using MagicWebSolutions;

namespace MagicWebSolutions
{
    public class VolumeSlider : MonoBehaviour
    {
        public Image volumeImage;
        public Sprite[] volumeTextures;

        private Slider slider;
        private float tempVolume;
        private float volumeBeforeClickingButton;
        private VideoPlayerWebGL videoPlayer;

        private void Start()
        {
            videoPlayer = GetComponentInParent<VideoPlayerWebGL>();
            slider = GetComponent<Slider>();
            Invoke("ChangeVideoVolumeSliderOnly", 0.1f);
        }

        public void ChangeVideoVolumeSliderOnly()
        {
            slider.value = PlayerPrefs.GetFloat("Volume" + GetComponentInParent<VideoPlayerWebGL>().videoId, 0f);
        }

        public void ChangeVideoVolume()
        {
            tempVolume = slider.value;

            if (tempVolume <= 0f)
                volumeImage.sprite = volumeTextures[0];
            else if (tempVolume < 0.5f)
                volumeImage.sprite = volumeTextures[1];
            else
                volumeImage.sprite = volumeTextures[2];

            videoPlayer.SetVideoVolume(tempVolume);
        }

        public void ClickedVolumeButton()
        {
            if (slider.value > 0f)
            {
                //Mute Audio
                volumeBeforeClickingButton = slider.value;

                slider.value = tempVolume = 0f;
                videoPlayer.SetVideoVolume(0f);
            }
            else
            {
                //Set Back Audio To Previous Volume

                slider.value = tempVolume = volumeBeforeClickingButton;

                if (tempVolume < 0.5f)
                    volumeImage.sprite = volumeTextures[1];
                else
                    volumeImage.sprite = volumeTextures[2];

                videoPlayer.SetVideoVolume(tempVolume);
            }
        }
    }
}
