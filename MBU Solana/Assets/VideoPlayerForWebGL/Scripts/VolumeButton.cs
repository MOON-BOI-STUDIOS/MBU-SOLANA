using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace MagicWebSolutions
{
    public class VolumeButton : MonoBehaviour, IPointerExitHandler
    {
        public GameObject volumeSliderArea;

        private Vector3 localPosWhenSliderEnabled, localScaleWhenSliderEnabled;
        private Transform sliderAreaOff;

        private void Start()
        {
            sliderAreaOff = transform.parent.Find("SliderAreaOff");

            localPosWhenSliderEnabled = transform.localPosition;
            localScaleWhenSliderEnabled = transform.localScale;

            volumeSliderArea.SetActive(false);

            transform.localPosition = sliderAreaOff.localPosition;
            transform.localScale = sliderAreaOff.localScale;
        }

        private void Update()
        {
            if (IsMouseInsideVolumeArea())
            {
                volumeSliderArea.SetActive(true);
                transform.localPosition = localPosWhenSliderEnabled;
                transform.localScale = localScaleWhenSliderEnabled;
            }
            else
            {
                if (!RectTransformUtility.RectangleContainsScreenPoint(volumeSliderArea.GetComponent<RectTransform>(), Input.mousePosition))
                {
                    transform.localPosition = sliderAreaOff.localPosition;
                    transform.localScale = sliderAreaOff.localScale;
                    volumeSliderArea.SetActive(false);
                }
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (IsMouseInsideVolumeArea())
                return;

            if (!RectTransformUtility.RectangleContainsScreenPoint(volumeSliderArea.GetComponent<RectTransform>(), Input.mousePosition))
            {
            }
        }

        private bool IsMouseInsideVolumeArea()
        {
            RectTransform rectTransform = GetComponent<RectTransform>();
            Vector2 localMousePosition;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, Input.mousePosition, null, out localMousePosition);

            return rectTransform.rect.Contains(localMousePosition);
        }
    }
}
