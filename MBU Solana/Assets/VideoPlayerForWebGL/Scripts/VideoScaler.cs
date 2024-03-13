using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MagicWebSolutions
{
    public class VideoScaler : MonoBehaviour
    {
        private Vector2 originalSize;
        private Vector3 originalPosition;
        private Vector3 originalScale;

        private void Start()
        {
            originalPosition = transform.localPosition;
            originalScale = transform.localScale;
            originalSize = GetComponent<RectTransform>().sizeDelta;
        }

        public void SetFullScreen()
        {
            transform.SetParent(transform.root, false);
            transform.localScale = Vector3.one;
            transform.localPosition = Vector3.zero;
            RectTransform rectTransform = GetComponent<RectTransform>();
            rectTransform.anchorMin = Vector2.zero;
            rectTransform.anchorMax = Vector2.one;
            rectTransform.pivot = new Vector2(0.5f, 0.5f);
            rectTransform.offsetMin = Vector2.zero;
            rectTransform.offsetMax = Vector2.zero;
        }

        public void SetSmallScreen()
        {
            transform.SetParent(transform.root, false);
            transform.localPosition = originalPosition;
            transform.localScale = originalScale;
            GetComponent<RectTransform>().sizeDelta = originalSize;
        }
    }
}
