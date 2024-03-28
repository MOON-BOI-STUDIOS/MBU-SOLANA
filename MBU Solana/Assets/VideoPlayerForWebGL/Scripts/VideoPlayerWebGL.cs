using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.Video;
using TMPro;
using MagicWebSolutions;

namespace MagicWebSolutions
{
    #region Enums

    public enum Source
    {
        VideoClip,
        URL
    }

    public enum RenderMode
    {
        A,
        B,
        C
    }

    public enum AspectRatio
    {
        NoScaling,
        FitHorizontally,
        FitVertically,
        Stretch
    }

    public enum AudioOutputMode
    {
        None,
        Direct,
        AudioSource
    }

    #endregion

    public class VideoPlayerWebGL : MonoBehaviour
    {
        #region Variables

        private UpdateUI_Elements videoEditorUI;
        private VideoClip video;
        private int videoWidth;
        private int videoHeight;
        private bool videoHasStarted = false;

        public static string nameOfSelectedVideoClip;
        public static bool loop;

        [HideInInspector]
        public string videoId = "VideoID";


        public GameObject loadingCircle;
        public TextMeshProUGUI videoDurationText;
        public VolumeSlider volumeSlider;
        public PlaybackSpeedSlider playbackSpeedSlider;
        public RawImage rawImage;

        [Space]

        public Source source = Source.URL;
        public string videoURL = "https://res.cloudinary.com/dzzyjoeyb/video/upload/v1679953081/Y2Mate.is_-_10_minutes_of_Shreksophone-P2hWkmRuu1M-720p-1655424579264_hykcmd.mp4";
        public bool playOnAwake;
        public bool isLooping;

        [Range(0f, 10f)] public float playbackSpeedAtStart = 1f;

        [Space]

        [Range(0f, 1f)] public float volumeAtStart = 1f;

        [Space]

        public SelectedVideoClip selectedVideoClip;

        #endregion

        private void Awake()
        {
            videoId = gameObject.GetInstanceID().ToString();

            if (source == Source.VideoClip)
            {
                nameOfSelectedVideoClip = selectedVideoClip.selectedClipName;

                Debug.Log("NAME OF THIS CLIP:" + nameOfSelectedVideoClip);

                // Get the absolute path of the video clip file
                string videoClipPath = Application.dataPath + "/StreamingAssets/" + nameOfSelectedVideoClip;

                // Convert the absolute path to a file URL
                videoURL = "file://" + videoClipPath.Replace(" ", "%20");

                // If running in WebGL, change the file URL to a web URL
                if (Application.platform == RuntimePlatform.WebGLPlayer)
                {
                    videoURL = Application.dataPath + "/StreamingAssets/" + nameOfSelectedVideoClip;
                }
            }
            // Playing on awake
            LoadInVideo();
            PlayOrStopVideo();
        }

        IEnumerator Start()
        {
            videoEditorUI = GetComponent<UpdateUI_Elements>();

            //EXAMPLE URL
            //https://res.cloudinary.com/dzzyjoeyb/video/upload/v1679953081/Y2Mate.is_-_10_minutes_of_Shreksophone-P2hWkmRuu1M-720p-1655424579264_hykcmd.mp4

            yield return new WaitForEndOfFrame();
        }

        #region Video Loading

        public void loadVideoFromURL()
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        StartCoroutine(CreateObjectUrlFromVideoClip(video, (dataUrl) => {

            MagicWebSolutions.VideoPlayer.subscribeOnLoaded(MagicWebSolutions.VideoPlayer.onLoadedCallback);
            MagicWebSolutions.VideoPlayer.createVideoFromSource(videoId, dataUrl, rawImage.texture.GetNativeTexturePtr(), loop);
        }));


        MagicWebSolutions.VideoPlayer.onLoaded -= handleOnLoad;
        MagicWebSolutions.VideoPlayer.onLoaded += handleOnLoad;
#endif
        }

        public void LoadInVideo()
        {
            if (source == Source.VideoClip)
            {
                // Get the URL of the video clip and start playing it
                GetVideoClipUrl(url =>
                {
                    // Do something with the URL, such as passing it to a video player component
                    // For example, if you have a VideoPlayer component attached to the same GameObject,
                    // you can set its URL to the video clip URL like this:
                    videoURL = url;
                });
            }

            MagicWebSolutions.VideoPlayer.createVideoFromSource(videoId, videoURL, rawImage.texture.GetNativeTexturePtr(), loop);

            loadVideoFromURL();

            rawImage.color = Color.white;

            StartCoroutine(CheckTempTimeTexts());
        }

        private void OnVideoLoaded()
        {
            videoHasStarted = true;
            loadingCircle.SetActive(false);
            PlayOrStopVideo();

            GetComponentInChildren<VideoSlider>().canCheckSlider = true;
        }

        public void handleOnLoad(string id, int width, int height)
        {
            loop = isLooping;

            videoHeight = height;
            videoWidth = width;

            SetVideoVolume(volumeAtStart, true);
            SetPlaybackSpeed(playbackSpeedAtStart, true);
            SetLooping(loop, true);

            Debug.Log("Video ID is:" + id);

            transform.GetChild(0).gameObject.SetActive(true);
            transform.GetChild(1).gameObject.SetActive(true);

            MagicWebSolutions.VideoPlayer.unSubscribeOnLoaded();
        }

        #endregion

        #region Set Video Properties

        public void SetTempVideoName(string nameOfClip)
        {
            nameOfSelectedVideoClip = nameOfClip;
        }

        public void SetVideoVolume(float newVolume, bool needToUpdateSliderUI = false)
        {
            MagicWebSolutions.VideoPlayer.setVolume(videoId, newVolume);

            if (needToUpdateSliderUI)
                PlayerPrefs.SetFloat("Volume" + videoId, newVolume);
        }

        public void SetPlaybackSpeed(float newSpeed, bool needToUpdateSliderUI = false)
        {
            MagicWebSolutions.VideoPlayer.setPlaybackRate(videoId, newSpeed);

            if (needToUpdateSliderUI)
            {
                PlayerPrefs.SetFloat("PlaybackSpeed" + videoId, newSpeed);
                videoEditorUI.UpdatePlaybackSpeedTextInSettings();
            }
        }

        public void SetLooping(bool shouldLoop, bool needToUpdateSwitchUI = false)
        {
            if (needToUpdateSwitchUI)
            {
                if (shouldLoop)
                    PlayerPrefs.SetInt("IsLooping" + videoId, 1);
                else
                    PlayerPrefs.SetInt("IsLooping" + videoId, 0);
            }

            MagicWebSolutions.VideoPlayer.setLoop(videoId, shouldLoop);
        }

        public void SetLooping(bool shouldLoop)
        {
            isLooping = loop = shouldLoop;

            MagicWebSolutions.VideoPlayer.setLoop(videoId, shouldLoop);
        }

        public void SetVideoPosition(float sliderPos)
        {
            Debug.Log("Setting Time of: " + videoId + " -> Using GetDuration = " + (float)MagicWebSolutions.VideoPlayer.getDuration(videoId) + " MULTIPLY BY: " + sliderPos + " -> AND ITS = " + Mathf.FloorToInt((float)MagicWebSolutions.VideoPlayer.getDuration(videoId) * sliderPos));
            MagicWebSolutions.VideoPlayer.setTime(videoId, Mathf.FloorToInt((float)MagicWebSolutions.VideoPlayer.getDuration(videoId) * sliderPos));
        }

        #endregion

        #region Duration and Time Management

        IEnumerator CheckTempTimeTexts()
        {
            while (true)
            {
                yield return new WaitForSeconds(0.3f);
                videoDurationText.text = FormatTime(MagicWebSolutions.VideoPlayer.getCurrentTime(videoId)) + " / " + FormatTime(MagicWebSolutions.VideoPlayer.getDuration(videoId));

                if (MagicWebSolutions.VideoPlayer.getDuration(videoId) > 0 && !videoHasStarted)
                {
                    OnVideoLoaded();
                }
            }
        }

        public float GetTemporaryDurationPercentage()
        {
            return ((float)MagicWebSolutions.VideoPlayer.getCurrentTime(videoId) / (float)MagicWebSolutions.VideoPlayer.getDuration(videoId));
        }

        private string FormatTime(int seconds)
        {
            int minutes = seconds / 60;
            int remainingSeconds = seconds % 60;
            int hours = minutes / 60;
            int remainingMinutes = minutes % 60;

            string formattedTime;

            if (hours > 0)
            {
                formattedTime = string.Format("{0:D2}:{1:D2}:{2:D2}", hours, remainingMinutes, remainingSeconds);
            }
            else
            {
                formattedTime = string.Format("{0:D2}:{1:D2}", remainingMinutes, remainingSeconds);
            }

            return formattedTime;
        }

        #endregion

        #region URL Formatting

        public IEnumerator CreateObjectUrlFromVideoClip(VideoClip videoClip, Action<string> onComplete)
        {
            // todo logic
            onComplete(videoURL);

            yield break;
        }


        public void GetVideoClipUrl(System.Action<string> callback)
        {
            // If running in WebGL, load the video from a URL
            if (Application.platform == RuntimePlatform.WebGLPlayer)
            {
                StartCoroutine(LoadVideoClipFromUrl(callback));
            }
            else
            {
                callback(videoURL);
            }
        }

        private IEnumerator LoadVideoClipFromUrl(System.Action<string> callback)
        {
            // Load the video from a URL using UnityWebRequest
            UnityWebRequest webRequest = UnityWebRequest.Get(videoURL);
            yield return webRequest.SendWebRequest();

            // Check for errors
            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Failed to load video clip from URL: " + webRequest.error);
            }
            else
            {
                // Get the URL of the loaded video
                string loadedVideoUrl = webRequest.uri.AbsoluteUri;
                callback(loadedVideoUrl);
            }
        }

        #endregion

        #region Play And Stop Video

        public void PlayVideo()
        {
            MagicWebSolutions.VideoPlayer.play(videoId);
        }

        public void PauseVideo()
        {
            MagicWebSolutions.VideoPlayer.pause(videoId);
        }

        private void PlayOrStopVideo()
        {

            if (playOnAwake)
            {
                MagicWebSolutions.VideoPlayer.play(videoId);
                videoEditorUI.SetPlayButtonActive(false);
            }
            else
            {
                MagicWebSolutions.VideoPlayer.pause(videoId);
                videoEditorUI.SetPlayButtonActive(true);
            }
        }

        #endregion
    }
}