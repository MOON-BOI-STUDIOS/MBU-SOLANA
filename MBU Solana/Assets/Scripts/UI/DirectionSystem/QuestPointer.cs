using System.Collections;
using System.Collections.Generic;
using UnityEngine; 


public class QuestPointer : MonoBehaviour
{
    private Vector3 targetPosition;
    private RectTransform pointerRectTrasform;

    private void Awake()
    {
        targetPosition = new Vector3(200, 45);
        pointerRectTrasform = transform.Find("Pointer").GetComponent<RectTransform>();
    }

    private void Update()
    {
        Vector3 toPosition = targetPosition;
        Vector3 fromPosition = Camera.main.transform.position;
        fromPosition.z = 0f;
        Vector3 dir = (toPosition - fromPosition).normalized;
        //float angle = 
    }

}
