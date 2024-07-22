using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VidPlayer : MonoBehaviour
{
    //[SerializeField] string videoFileName;
    // Start is called before the first frame update
    private VideoPlayer videoPlayer;
    //[SerializeField]
    //VideoClip nextClip;
    [SerializeField]
    private GameObject StudiosLogo;
    [SerializeField]
    private GameObject UniverseLogo;
    [SerializeField]
    GameObject rawImage;

    [SerializeField]
    string nextClipUrl;

    private void Start()
    {
        videoPlayer = GetComponent<VideoPlayer>();
        videoPlayer.Play();
        videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
    }

    private void VideoPlayer_loopPointReached(VideoPlayer source)
    {

// #if !UNITY_STANDALONE && !UNITY_WEBGL
// Debug.Log("NO WEBGL");
//         if (source.clip == nextClip)
//         {
//             rawImage.SetActive(false);
//             UniverseLogo.SetActive(false);
//         }
//         else
//         {
//             StudiosLogo.SetActive(false);
//             UniverseLogo.SetActive(true);
//             source.clip = nextClip;
//             videoPlayer.loop
//             videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
//         }
// #endif

// #if UNITY_STANDALONE || UNITY_WEBGL
    //Debug.Log("WEBGL");
        if (source.url == nextClipUrl)
        {
            rawImage.SetActive(false);
            UniverseLogo.SetActive(false);
        }
        else
        {
            StudiosLogo.SetActive(false);
            UniverseLogo.SetActive(true);
            source.url = nextClipUrl;
            videoPlayer.loopPointReached += VideoPlayer_loopPointReached;
        }
//#endif
    }

    private void OnDisable()
    {
        videoPlayer.loopPointReached -= VideoPlayer_loopPointReached;
    }
}