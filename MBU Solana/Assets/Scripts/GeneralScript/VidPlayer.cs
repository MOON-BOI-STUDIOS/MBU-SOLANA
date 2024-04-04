using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VidPlayer : MonoBehaviour
{
    [SerializeField] string videoFileName;
    [SerializeField] GameObject rawImageVideo;
    // Start is called before the first frame update
    private VideoPlayer videoPlayer;

    private void Awake()
    {
        Time.timeScale = 0;
        videoPlayer = GetComponent<VideoPlayer>();

    }

    public void pressed()
    {
        Time.timeScale = 1;
        PlayVideo();
    }

    

    // Update is called once per frame
    void Update()
    {
        videoPlayer.loopPointReached += EndVideo;
    }

    public void PlayVideo()
    {
        if (videoPlayer)
        {
            string videoPath = System.IO.Path.Combine(Application.streamingAssetsPath, videoFileName);
            Debug.Log(videoFileName); 
            videoPlayer.url = videoPath;
            videoPlayer.Play();
        }
    }

    public void EndVideo(VideoPlayer vp = null)
    {
        rawImageVideo.gameObject.SetActive(false);
    }
}