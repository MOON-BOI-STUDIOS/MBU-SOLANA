using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MagicWebSolutions
{
    public class SetRawImages : MonoBehaviour
    {
        public Texture[] spritesForRawImages;

        private void Awake()
        {
            int i = 0;
            foreach (VideoPlayerWebGL videoPlayer in FindObjectsOfType<VideoPlayerWebGL>())
            {
                videoPlayer.rawImage.texture = spritesForRawImages[i];
                i++;
            }
        }
    }
}