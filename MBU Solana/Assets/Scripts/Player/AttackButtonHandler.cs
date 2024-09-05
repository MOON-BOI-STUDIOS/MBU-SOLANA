using UnityEngine;
using UnityEngine.EventSystems;

public class AttackButtonHandler : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public GameObject attackButton; // Reference to the attack button
    public Transform playerTransform; // Reference to the player
    private PlayerCombat playerCombat; // Reference to the PlayerCombat script

    private bool isTouching = false;

    void Start()
    {
        // Get the PlayerCombat component from the player GameObject
        playerCombat = playerTransform.GetComponent<PlayerCombat>();

        // Ensure the attack button is initially hidden
        attackButton.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isTouching = true;

        // Convert the touch/click position to a position relative to the parent RectTransform
        RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventData.position, eventData.pressEventCamera, out Vector2 localPosition);

        // Move the attack button to the touch/click position
        attackButton.GetComponent<RectTransform>().anchoredPosition = localPosition;

        // Show the attack button
        attackButton.SetActive(true);

        // Trigger the attack through the PlayerCombat script
        playerCombat.OnAttack();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isTouching = false;

        // Hide the attack button when the touch/click ends
        attackButton.SetActive(false);
    }
}
