using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerCombat : MonoBehaviour
{
    private PlayerManager _manager;
    public float comboTimer = 1;
    public int comboCounter;
    public int numberOfComboHits;
    public float comboIntervalMax;
    public TextMeshProUGUI comboText;
    public Transform comboIndicatorParent;

    //Attack area update
    public GameObject attackArea;
    BoxCollider2D gizmosBoxCollider;


    void Start()
    {
        _manager = GetComponent<PlayerManager>();
    }

    void Update()
    {
        Mathf.Clamp(comboTimer, 0, 1);
        comboTimer += comboIntervalMax * Time.deltaTime;
        if (comboTimer >= 1) comboCounter = 0;

        if (comboCounter < 10) comboText.text = "0" + comboCounter.ToString();
        if (comboCounter >= 10) comboText.text =  comboCounter.ToString();

        comboIndicatorParent.localScale = new Vector3((float)comboCounter / (float)numberOfComboHits * 1, comboIndicatorParent.localScale.y, comboIndicatorParent.localScale.z);

        // PC Controls
#if UNITY_STANDALONE || UNITY_WEBGL
        if (Input.GetMouseButtonDown(0) && !PaymentInfo.UIActive)
        {
            OnAttack(); // Renamed method to follow standard naming convention
        }
#endif
    }

    // Renamed the method to follow standard naming convention
    public void OnAttack()
    {
        comboTimer = 0;
        _manager._animator.GetComponent<Animator>().SetTrigger("Attack");

        // Rotate the attack collider based on the last movement direction
        
    }

    // Method to move the attack collider based on the last direction
public void MoveAttackCollider()
{
    // Calculate the offset based on the last direction
    Vector3 offset = _manager._animator.lastDirection;

    if (offset == Vector3.zero) return;

    if (offset.x != 0 && offset.y != 0)
    offset = offset.normalized * 0.7f;
    else
    offset = offset.normalized * 0.8f;

    // Set the position of the attack collider relative to the player's position
    attackArea.transform.position = transform.position + offset;
}

 void OnDrawGizmos()
    {
        // Get the BoxCollider component
        gizmosBoxCollider = GetComponentInChildren<BoxCollider2D>();
        
        // Store the current Gizmos color
        Color oldColor = Gizmos.color;
        
        // Set the Gizmos color
        Gizmos.color = Color.green;

        if(gizmosBoxCollider != null)
        {
        // Calculate the center and size of the BoxCollider in world coordinates
        Vector3 center = gizmosBoxCollider.transform.TransformPoint(gizmosBoxCollider.offset);
        Vector3 size = Vector3.Scale(gizmosBoxCollider.size, gizmosBoxCollider.transform.lossyScale);
        
        // Draw the wireframe cube
        Gizmos.DrawWireCube(center, size);
        
        // Restore the Gizmos color
        //Gizmos.color = oldColor;
        }
    }
}
