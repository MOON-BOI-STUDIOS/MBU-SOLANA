using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaceObjectBase : MonoBehaviour, IInteractable
{
    public Sprite _bubbleSprite;

    public virtual void OnBubble(GameObject target)
    {
        StartCoroutine(MoveBubble(target));
    }
    //Only god knows why it didn't work but suddenly work
    private IEnumerator MoveBubble(GameObject target)
    {
        //set bubble active
        target.SetActive(true);

        //Set the sprite (in inspector or script)
        target.GetComponent<SpriteRenderer>().sprite = _bubbleSprite;
        
        //set currentDistance between bubble and object
        float currentDistance = gameObject.transform.position.y - target.transform.position.y;
        //currentDistance - offset
        float maxScale = currentDistance;
        float currentScale = 1.2f;
        //set position
        target.transform.position = new Vector2(gameObject.transform.position.x, target.transform.position.y);

        while (currentDistance > 2)
        {
            float clampedDistance = Mathf.Clamp(currentDistance, maxScale/2, maxScale);
            //Decrease scale of bubble as it gets closer to object
            target.transform.localScale = new Vector2(currentScale * (clampedDistance / maxScale), currentScale * (clampedDistance / maxScale));

            //variables
            Vector3 currentPosition = target.transform.position;
            Vector3 endPosition = new Vector3(gameObject.transform.position.x, currentPosition.y, 0);
            currentDistance = gameObject.transform.position.y - target.transform.position.y;
            
            // Move the target towards the new position
            target.transform.position = Vector3.Lerp(currentPosition, endPosition, Time.deltaTime);

            yield return null; // Wait for the next frame
        }
        //set bubble false, so it canbe used later on by another object
        target.SetActive(false);
    }

    public virtual void OnInteract(GameObject target)
    {
        ///To be implemented in each script
    }

    public virtual void OnRemoveInteract()
    {
        ///To be implemented in each script
    }
}
