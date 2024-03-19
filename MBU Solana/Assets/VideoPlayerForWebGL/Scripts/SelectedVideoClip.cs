using UnityEngine;

[CreateAssetMenu(fileName = "VideoClipName", menuName = "VideoClipName")]
public class SelectedVideoClip : ScriptableObject
{
    public string selectedClipName;
    public int selectedClipIndex;
}
