using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerCombat : MonoBehaviour
{
    private PlayerManager _manager;
    public float comboTimer;
    public int comboCounter;
    public int numberOfComboHits;
    float comboInterval;
    public float comboIntervalMax;
    public TextMeshProUGUI comboText;
    public Transform comboIndicatorParent;

    //Attack area update
    public GameObject attackArea;
    BoxCollider2D gizmosBoxCollider;


    void Start()
    {
        _manager = GetComponent<PlayerManager>();
        comboInterval = comboIntervalMax;
    }

    void Update()
    {
        // Clamping the comboTimer to ensure it stays within 0 and comboIntervalMax
        comboTimer = Mathf.Clamp(comboTimer + Time.deltaTime, 0, comboInterval);

        // Reset combo counter if comboTimer exceeds comboIntervalMax
        if (comboTimer >= comboInterval)
        {
            comboCounter = 0;
            comboTimer = 0;
        }

        // Update combo text
        comboText.text = comboCounter.ToString("00");

        // Update combo indicator scale
        comboIndicatorParent.localScale = new Vector3((float)comboCounter / numberOfComboHits, comboIndicatorParent.localScale.y, comboIndicatorParent.localScale.z);

        // PC Controls
#if UNITY_STANDALONE || UNITY_WEBGL
        if (Input.GetMouseButtonDown(0) && !PaymentInfo.UIActive)
        {
            OnAttack(); // Handle the attack input
        }
#endif
    }

    public void OnAttack()
    {
        _manager._animator.GetComponent<Animator>().SetTrigger("Attack");
    }

    // New method to be called by the enemy when it is killed
    public void IncrementCombo()
    {
        comboCounter++;
        comboTimer = 0;
        comboInterval = comboIntervalMax;

        // Ensure comboCounter doesn't exceed numberOfComboHits
        comboCounter = Mathf.Clamp(comboCounter, 0, numberOfComboHits);
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


    //Gizmos representation for Dre's basic attack
    void OnDrawGizmos()
    {
        // Get the BoxCollider component
        gizmosBoxCollider = GetComponentInChildren<BoxCollider2D>();

        // Store the current Gizmos color
        Color oldColor = Gizmos.color;

        // Set the Gizmos color
        Gizmos.color = Color.green;

        if (gizmosBoxCollider != null)
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