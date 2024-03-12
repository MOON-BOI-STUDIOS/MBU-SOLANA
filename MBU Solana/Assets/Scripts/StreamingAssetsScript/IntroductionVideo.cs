using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class IntroductionVideo : MonoBehaviour
{
    [SerializeField] string videoFileName;
    private VideoPlayer videoPlayer;
    string curSceneName;
    // Start is called before the first frame update
    void Start()
    {
        videoPlayer = GetComponent<VideoPlayer>();
        curSceneName = SceneManager.GetActiveScene().name;
        CheckScene();
    }
    void CheckScene()
    {
        PlayVideo();
        if(curSceneName == "FishingArea")
        {
            VideoScript.instance.videoFinished(videoPlayer);
        }
    }

    public void PlayVideo()
    {
        if(videoPlayer)
        {
            //string videoPath = System.IO.Path.Combine(Application.streamingAssetsPath, videoFileName);
            //videoPlayer.url = videoPath;
            Debug.Log("Play the video");
            videoPlayer.url = videoFileName;
            videoPlayer.Play();
        }

    }
}
