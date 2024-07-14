using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VidPlayer : MonoBehaviour
{
    //[SerializeField] string videoFileName;
    // Start is called before the first frame update
    private VideoPlayer videoPlayer;
    [SerializeField]
    VideoClip nextClip;
    [SerializeField]
    private GameObject StudiosLogo;
    [SerializeField]
    private GameObject UniverseLogo;

    private void Start()
    {
        videoPlayer = GetComponent<VideoPlayer>();
        videoPlayer.Play();
        videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
    }

    private void VideoPlayer_loopPointReached(VideoPlayer source)
    {
        if (source.clip == nextClip)
        {
            UniverseLogo.SetActive(false);
        }
        else
        {
            StudiosLogo.SetActive(false);
            UniverseLogo.SetActive(true);
            source.clip = nextClip;
            videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
        }
    }

    private void OnDisable()
    {
        videoPlayer.loopPointReached -= VideoPlayer_loopPointReached;
    }
}