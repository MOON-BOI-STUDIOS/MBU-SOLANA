#if UNITY_EDITOR

using System.IO;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using MagicWebSolutions;

namespace MagicWebSolutions
{
    [CustomEditor(typeof(VideoPlayerWebGL))]
    public class VideoSelector : Editor
    {
        private SelectedVideoClip selectedVideoClip;

        [SerializeField]
        private List<string> videoClipNames = new List<string>();

        private int selectedClipIndex = 0;
        private int previousClipIndex = -1;

        private void OnEnable()
        {
            selectedVideoClip = AssetDatabase.LoadAssetAtPath<SelectedVideoClip>("Assets/VideoPlayerForWebGL/ScriptableObjects/VideoClipName.asset");

            // Find all the video clips in the StreamingAssets folder
            string streamingAssetsPath = Application.streamingAssetsPath;
            DirectoryInfo streamingAssetsDir = new DirectoryInfo(streamingAssetsPath);

            string[] extensions = new string[] { "*.mov", "*.mp4", "*.avi", "*.wmv", "*.flv", "*.webm" };
            IEnumerable<FileInfo> videoClipFiles = extensions.SelectMany(ext => streamingAssetsDir.GetFiles(ext));

            videoClipNames = new List<string>();

            // Load the names of each video clip and add them to the list
            foreach (FileInfo file in videoClipFiles)
            {
                string videoClipName = Path.GetFileName(file.Name);
                videoClipNames.Add(videoClipName);
            }
        }

        public override void OnInspectorGUI()
        {
            // Load the SelectedVideoClip asset
            selectedVideoClip = AssetDatabase.LoadAssetAtPath<SelectedVideoClip>("Assets/VideoPlayerForWebGL/ScriptableObjects/VideoClipName.asset");

            // Find all the video clips in the StreamingAssets folder
            string streamingAssetsPath = Application.streamingAssetsPath;
            DirectoryInfo streamingAssetsDir = new DirectoryInfo(streamingAssetsPath);

            string[] extensions = new string[] { "*.mov", "*.mp4", "*.avi", "*.wmv", "*.flv", "*.webm" };
            IEnumerable<FileInfo> videoClipFiles = extensions.SelectMany(ext => streamingAssetsDir.GetFiles(ext));

            videoClipNames = new List<string>();

            // Load the names of each video clip and add them to the list
            foreach (FileInfo file in videoClipFiles)
            {
                string videoClipName = Path.GetFileName(file.Name);
                videoClipNames.Add(videoClipName);
            }

            // Create an array of string options for the dropdown list
            string[] clipNames = videoClipNames.ToArray();

            // Call the base inspector first
            base.OnInspectorGUI();

            // Create a dropdown list of the available video clip names
            int previousClipIndex = selectedVideoClip.selectedClipIndex;
            selectedVideoClip.selectedClipIndex = EditorGUILayout.Popup("Select a video clip", selectedVideoClip.selectedClipIndex, clipNames);

            if (selectedVideoClip.selectedClipIndex != previousClipIndex)
            {
                // Set the SelectedVideoClip's selectedClipName field
                selectedVideoClip.selectedClipName = videoClipNames[selectedVideoClip.selectedClipIndex];
                //EditorPrefs.SetString("VideoClipName", videoClipNames[selectedVideoClip.selectedClipIndex]);
                foreach (VideoPlayerWebGL videoPlayer in FindObjectsOfType<VideoPlayerWebGL>())
                {
                    videoPlayer.SetTempVideoName(videoClipNames[selectedVideoClip.selectedClipIndex]);
                }

                // Mark the asset as dirty so that changes are saved
                EditorUtility.SetDirty(selectedVideoClip);
            }
        }

    }

}
#endif