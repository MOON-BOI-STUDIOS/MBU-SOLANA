using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CodeMonkey.Utils;
using UnityEngine.UI;



public class QuestPointer : MonoBehaviour
{
    [SerializeField] private Camera Maincamera;
    private Sprite arrowSprite;
    private Image pointerImage;
    private Sprite crosSprite;



    private Vector3 targetPosition;
    private RectTransform pointerRectTrasform;

    private void Awake()
    {
        targetPosition = new Vector3(200, 45);
        pointerRectTrasform = transform.Find("Pointer").GetComponent<RectTransform>();
        pointerImage = transform.Find("Pointer").GetComponent<Image>();
    }

    private void Update()
    {
        Vector3 toPosition = targetPosition;
        Vector3 fromPosition = Camera.main.transform.position;
        fromPosition.z = 0f;
        Vector3 dir = (toPosition - fromPosition).normalized;
        float angle = UtilsClass.GetAngleFromVectorFloat(dir);
        pointerRectTrasform.localEulerAngles = new Vector3(0, 0, angle);
        pointerRectTrasform.localEulerAngles = new Vector3(0, 0, angle);

        float borderSize = 100f;
        Vector3 targetPositionScreenPoint = Camera.main.WorldToScreenPoint(targetPosition);
        bool isOffScreen = targetPositionScreenPoint.x <= borderSize || targetPositionScreenPoint.x >= Screen.width - borderSize || targetPositionScreenPoint.y <= borderSize || targetPositionScreenPoint.y >= Screen.height - borderSize;


        if (isOffScreen)
        {
            pointerImage.sprite = arrowSprite;
            Vector3 cappedTargetScreenPosition = targetPositionScreenPoint;
            if (cappedTargetScreenPosition.x <= 0) cappedTargetScreenPosition.x = 0f;
            if (cappedTargetScreenPosition.x >= Screen.width) cappedTargetScreenPosition.x = Screen.width;
            if (cappedTargetScreenPosition.y <= 0) cappedTargetScreenPosition.y = 0f;
            if (cappedTargetScreenPosition.y >= Screen.height) cappedTargetScreenPosition.y = Screen.height;

            Vector3 pointerWorldPosition = Maincamera.ScreenToWorldPoint(cappedTargetScreenPosition);
            pointerRectTrasform.position = pointerWorldPosition;
            pointerRectTrasform.localPosition = new Vector3(pointerRectTrasform.localPosition.x, pointerRectTrasform.localPosition.y, 0f);
        }
        else
        {
            pointerImage.sprite = crosSprite;
            Vector3 pointerWorldPosition = Maincamera.ScreenToWorldPoint(targetPositionScreenPoint);
            pointerRectTrasform.position = pointerWorldPosition;
            pointerRectTrasform.localPosition = new Vector3(pointerRectTrasform.localPosition.x, pointerRectTrasform.localPosition.y, 0f);
        }
    }

    private void RotatePointerTowardsTargetPoistion()
    {
        Vector3 toPosition = targetPosition;
        Vector3 fromPosition = Camera.main.transform.position;
        fromPosition.z = 0f;
        Vector3 dir = (toPosition - fromPosition).normalized;
        float angle = UtilsClass.GetAngleFromVectorFloat(dir);
        pointerRectTrasform.localEulerAngles = new Vector3(0, 0, angle);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public void Show(Vector3 targetPosition)
    {
        gameObject.SetActive(true);
    }

}
