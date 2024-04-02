using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoScript : MonoBehaviour
{
    [SerializeField]
    VideoPlayer myVideoPlayer;

    public GameObject videoObj;
    public GameObject panel;
    public bool isFinished = false;
    public GameObject music;

    [SerializeField] string videoFileName;
   

    public static VideoScript instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        isFinished = (PlayerPrefs.GetInt("isFinished") != 0);
    
      

        if (isFinished == true)
        {

            panel.SetActive(false);
            videoObj.SetActive(false);
            music.SetActive(true);
            
        }

#if UNITY_WEBGL || UNITY_STANDALONE
        PlayVideo();
#endif
    }
 
    void Start()
    {
#if UNITY_IOS || UNITY_ANDROID
        myVideoPlayer.loopPointReached += videoFinished;
#else
        myVideoPlayer.loopPointReached += EndVideo;
#endif


    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void PlayVideo()
    {
        if (myVideoPlayer)
        {
            string videoPath = System.IO.Path.Combine(Application.streamingAssetsPath, videoFileName);
            Debug.Log(videoFileName);
            myVideoPlayer.url = videoPath;
            myVideoPlayer.Play();
        }
    }

    public void videoFinished(VideoPlayer vp )
    {

        isFinished = true;
        panel.SetActive(false);
        videoObj.SetActive(false);
        music.SetActive(true);
        PlayerPrefs.SetInt("isFinished", (isFinished ? 1 : 0));
    }


    public void EndVideo(VideoPlayer vp )
    {
        panel.SetActive(false);
        isFinished = true;
        panel.SetActive(false);
        videoObj.SetActive(false);
        music.SetActive(true);
        PlayerPrefs.SetInt("isFinished", (isFinished ? 1 : 0));
    }


}
