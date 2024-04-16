using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestArrowMain : MonoBehaviour
{
    public Transform target;
    public float buffer;

    public Color farColor;
    public Color closeColor;
    public float maxDistance;

    public SpriteRenderer end;

    private void Start()
    {
        end = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        if (target != null)
        {
            Vector2 difference = transform.position - target.position;
            float angle = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.Euler(0, 0, angle + buffer);
            end.color = Color.Lerp(closeColor, farColor, DistanceToQuest());
        }

    }

    float DistanceToQuest()
    {
        return Mathf.Clamp01(Vector2.Distance(transform.position, target.position) / maxDistance);
    }
}
