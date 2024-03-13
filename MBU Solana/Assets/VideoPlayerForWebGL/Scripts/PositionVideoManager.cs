using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MagicWebSolutions
{
    [ExecuteAlways]
    public class PositionVideoManager : MonoBehaviour
    {
        private RawImage targetVideo;
        private void OnEnable()
        {
            targetVideo = GetComponentInParent<VideoPlayerWebGL>().GetComponentInChildren<RawImage>();
        }

        void LateUpdate()
        {
            // Calculate the bottom middle position of the RawImage
            Vector2 bottomMiddlePosition = new Vector2((targetVideo.rectTransform.rect.width / 2f) + targetVideo.rectTransform.rect.position.x, -targetVideo.rectTransform.rect.height / 2f);

            // Convert the local position to world position
            Vector3 targetPosition = targetVideo.transform.TransformPoint(bottomMiddlePosition);

            transform.position = targetPosition;
        }
    }
}