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
#if UNITY_STANDALONE || UNITY_WEBGL
        Time.timeScale = 0;
        videoPlayer = GetComponent<VideoPlayer>();
#endif

    }

    public void pressed()
    {
        Time.timeScale = 1;
        PlayVideo();
    }

    

    // Update is called once per frame
    void Update()
    {
#if UNITY_STANDALONE || UNITY_WEBGL
        videoPlayer.loopPointReached += EndVideo;
#endif
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
