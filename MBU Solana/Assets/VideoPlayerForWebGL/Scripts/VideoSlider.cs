using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using MagicWebSolutions;

namespace MagicWebSolutions
{
public class VideoSlider : MonoBehaviour
{
    [HideInInspector]
    public bool canCheckSlider = false;

    private Slider slider;
    private float tempVideoPos;

    private VideoPlayerWebGL videoPlayer;
    private bool hasStartedMovingSlider = false;

    private void Start()
    {
        videoPlayer = GetComponentInParent<VideoPlayerWebGL>();
        slider = GetComponent<Slider>();
    }

    public void ChangeVideoPlayPosition()
    {
        if (!canCheckSlider)
            return;

        if (!Input.GetMouseButton(0))
            return;

        tempVideoPos = slider.value;

        videoPlayer.SetVideoPosition(tempVideoPos);
    }

    private void Update()
    {
        if (!canCheckSlider)
            return;

        if (!hasStartedMovingSlider && Input.GetMouseButtonDown(0))
            hasStartedMovingSlider = true;

        if (Input.GetMouseButtonUp(0))
            hasStartedMovingSlider = false;

        if (!hasStartedMovingSlider)
            slider.value = videoPlayer.GetTemporaryDurationPercentage();
    }

    private bool IsMouseInsideAnyChildArea()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            RectTransform rectTransform = transform.GetChild(i).GetComponent<RectTransform>();
            Vector2 localMousePosition;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, Input.mousePosition, null, out localMousePosition);
            if (rectTransform.rect.Contains(localMousePosition))
            {
                return true;
            }
        }
        return false;
    }
}
}
