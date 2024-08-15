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
    public GameObject skipButton;
    public bool isFinished = false;
    public GameObject music;

    [SerializeField] string videoFileUrl;

    public static VideoScript instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        isFinished = (PlayerPrefs.GetInt("isFinished") != 0);

        // If video has been finished, hide the panel and video objects
        if (isFinished)
        {
            panel.SetActive(false);
            videoObj.SetActive(false);
            music.SetActive(true);
            skipButton.SetActive(false); // Skip button remains inactive since video won't play
        }
        else
        {
            // First time playing the video
            panel.SetActive(true);
            videoObj.SetActive(true);
            music.SetActive(false);
            skipButton.SetActive(false); // Disable skip button initially
            PlayVideo(); // Start the video
        }
    }

    void Start()
    {
        // Attach event handlers based on platform
        #if UNITY_IOS || UNITY_ANDROID
        myVideoPlayer.loopPointReached += videoFinished;
        #else
        myVideoPlayer.loopPointReached += EndVideo;
        #endif
    }

    public void PlayVideo()
    {
        if (myVideoPlayer)
        {
            myVideoPlayer.url = videoFileUrl;
            myVideoPlayer.Play();
            StartCoroutine(EnableSkipButtonAfterDelay(5f)); // Enable skip button after 5 seconds
        }
    }

    private IEnumerator EnableSkipButtonAfterDelay(float delay)
    {   
        skipButton.SetActive(false);
        yield return new WaitForSeconds(delay);
        skipButton.SetActive(true); // Activate skip button after delay
    }

    public void videoFinished(VideoPlayer vp)
    {
        HandleVideoEnd();
    }

    public void EndVideo(VideoPlayer vp)
    {
        HandleVideoEnd();
    }

    private void HandleVideoEnd()
    {
        isFinished = true;
        panel.SetActive(false);
        videoObj.SetActive(false);
        music.SetActive(true);

        // Store that the video has been finished
        PlayerPrefs.SetInt("isFinished", 1);
    }
}
