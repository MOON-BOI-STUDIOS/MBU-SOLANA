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
        target.SetActive(true);

        //Set the sprite
        target.GetComponent<SpriteRenderer>().sprite = _bubbleSprite;

        float currentDistance = gameObject.transform.position.y - target.transform.position.y;
        target.transform.position = new Vector2(gameObject.transform.position.x, target.transform.position.y);

        while (currentDistance > 2)
        {
            Vector3 currentPosition = target.transform.position;
            Vector3 endPosition = new Vector3(gameObject.transform.position.x, currentPosition.y, 0);
            currentDistance = gameObject.transform.position.y - target.transform.position.y;
            /*float scale = 1 - (currentDistance / maxDistance);
            target.transform.localScale = new Vector2(scale, scale);*/

            // Move the target towards the new position
            target.transform.position = Vector3.Lerp(currentPosition, endPosition, Time.deltaTime);

            yield return null; // Wait for the next frame
        }

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
