using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

namespace MagicWebSolutions
{
    public class ShowingVideoManagerUI : MonoBehaviour, IPointerEnterHandler
    {
        public GameObject videoEditorUI, pauseButton;
        public float delay = 3f;

        private bool isMouseOver = false;
        private Coroutine delayCoroutine;

        [HideInInspector]
        public bool canDisable = true;

        void Start()
        {
            videoEditorUI.SetActive(false);
        }

        void Update()
        {
            isMouseOver = IsMouseInsideVideoArea();

            if (!canDisable)
                return;

            if (!pauseButton.activeSelf)
            {
                if (!videoEditorUI.activeInHierarchy)
                    videoEditorUI.SetActive(true);
                return;
            }

            if (isMouseOver)
            {
                if ((Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0) && videoEditorUI.activeInHierarchy)
                {
                    videoEditorUI.SetActive(true);
                    StopDelay();
                }
                else if (!videoEditorUI.activeInHierarchy && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
                {
                    videoEditorUI.SetActive(true);
                    StopDelay();
                }
                else if (delayCoroutine == null)
                {
                    delayCoroutine = StartCoroutine(DelayedDeactivate());
                }
            }
            else if (videoEditorUI.activeInHierarchy)
            {
                videoEditorUI.SetActive(false);
                StopDelay();
            }
        }

        private bool IsMouseInsideVideoArea()
        {
            RectTransform rectTransform = GetComponent<RectTransform>();
            Vector2 localMousePosition;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, Input.mousePosition, null, out localMousePosition);

            return rectTransform.rect.Contains(localMousePosition);
        }


        public void OnPointerEnter(PointerEventData eventData)
        {
            StopDelay();
        }

        private void StopDelay()
        {
            if (delayCoroutine != null)
            {
                StopCoroutine(delayCoroutine);
                delayCoroutine = null;
            }
        }

        private IEnumerator DelayedDeactivate()
        {
            yield return new WaitForSeconds(delay);

            if (!isMouseOver || (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0) || !videoEditorUI.activeInHierarchy)
            {
                yield break;
            }

            if (canDisable)
            {
                videoEditorUI.SetActive(false);
            }
            delayCoroutine = null;
        }
    }
}
