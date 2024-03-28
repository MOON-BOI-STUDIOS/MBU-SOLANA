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
    public GameObject WebGlVideo;

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
#if UNITY_WEBGL
            WebGlVideo.SetActive(false);
#endif
            panel.SetActive(false);
            videoObj.SetActive(false);
            music.SetActive(true);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
#if !UNITY_STANDALONE && !UNITY_WEBGL
    myVideoPlayer.loopPointReached += videoFinished;
#else
        StartCoroutine(VideoPlayerFinished());
#endif
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void videoFinished(VideoPlayer vp = null)
    {
#if UNITY_WEBGL
        WebGlVideo.SetActive(false);
#endif
        isFinished = true;
        panel.SetActive(false);
        videoObj.SetActive(false);
        music.SetActive(true);
        PlayerPrefs.SetInt("isFinished", (isFinished ? 1 : 0));
    }

    IEnumerator VideoPlayerFinished()
    {
        yield return new WaitForSeconds(171f);
        videoFinished();
    }
}
