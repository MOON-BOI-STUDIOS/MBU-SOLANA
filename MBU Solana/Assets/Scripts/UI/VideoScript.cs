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
    public bool isFinished;
    public GameObject music;

    public static VideoScript instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        myVideoPlayer.loopPointReached += videoFinished;
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void videoFinished(VideoPlayer vp)
    {
        isFinished = true;
        panel.SetActive(false);
        videoObj.SetActive(false);
        music.SetActive(true);
    }
}