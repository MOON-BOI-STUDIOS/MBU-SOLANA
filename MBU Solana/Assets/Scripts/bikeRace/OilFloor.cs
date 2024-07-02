using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OilFloor : RaceObjectBase
{
    private Rigidbody2D _rb;
    private void Start()
    {
        _rb = GetComponent<Rigidbody2D>();
    }
    
    public override void OnInteract(GameObject target)
    {
        StartCoroutine(rotateOnOilFloor(target));
    }
    public override void OnDeInteract()
    {
        base.OnDeInteract();
    }
    private IEnumerator rotateOnOilFloor(GameObject target)
    {
        int numberOfRotations = 4;
        float rotationDegrees = 20;
        float speed = 10f;
        target.transform.rotation = Quaternion.Euler(0, 0, 0);
        target.GetComponent<BikeController>().InputEnabled = false;
        for (int i = 0; i < numberOfRotations; i++)
        {
            Quaternion currentRotation = target.transform.rotation;
            Quaternion goalRotation =  currentRotation * Quaternion.Euler(0, 0, rotationDegrees);
            float step = 0;
            //above 1 the bug don't happen, so keep it as such
            while (Quaternion.Angle(target.transform.rotation, goalRotation) > 2f)
            {
                step += Time.deltaTime * speed;
                target.transform.rotation = Quaternion.Lerp(currentRotation, goalRotation, step);
                yield return null;
            }
            target.transform.rotation = goalRotation;
            // Yield here to ensure the rotation has been fully processed before the next iteration
            currentRotation = goalRotation;
            rotationDegrees = -rotationDegrees;
        }
        //delay to ensure final rotation is processed???
        target.transform.rotation = Quaternion.Euler(0,0,0);
        target.GetComponent<BikeController>().InputEnabled = true;
    }
}
