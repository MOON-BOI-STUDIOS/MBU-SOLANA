using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VidPlayer : MonoBehaviour
{
    private VideoPlayer videoPlayer;
    [SerializeField]
    GameObject rawImage;

    [SerializeField]
    string nextClipUrl;

    private void Start()
    {
        rawImage.SetActive(true);
        videoPlayer = GetComponent<VideoPlayer>();
        videoPlayer.Play();
        videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
    }

    private void VideoPlayer_loopPointReached(VideoPlayer source)
    {
        if (source.url == nextClipUrl)
        {
            rawImage.SetActive(false);
        }
        else
        {
            source.url = nextClipUrl;
            Camera.main.transform.GetComponent<AudioSource>().enabled = true;
            videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
        }
    }

    private void OnDisable()
    {
        videoPlayer.loopPointReached -= VideoPlayer_loopPointReached;
    }
}