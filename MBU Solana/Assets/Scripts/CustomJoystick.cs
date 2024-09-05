using UnityEngine;
using UnityEngine.EventSystems;

public class CustomJoystick : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private RectTransform joystickTransform;
    [SerializeField] private GameObject joystickParent; // Parent object to enable/disable
    [SerializeField] private float joystickRadius = 100f;
    [SerializeField] private float sensitivity = 0.5f; // Adjust sensitivity (lower values = less sensitive)

    private RectTransform joystickParentRectTransform;
    private Vector2 joystickDirection;
    private bool isDragging = false;

    private void Awake()
    {
        joystickParentRectTransform = joystickParent.GetComponent<RectTransform>();
        joystickParent.SetActive(false); // Ensure joystick is hidden at start
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!isDragging)
            return;

        RectTransformUtility.ScreenPointToLocalPointInRectangle(joystickParentRectTransform, eventData.position, eventData.pressEventCamera, out Vector2 localPosition);

        // Apply sensitivity
        Vector2 position = localPosition * sensitivity;

        // Clamp position within joystick radius
        position = ClampPosition(position);

        // Update the joystick position relative to the parent (gamepad)
        joystickTransform.anchoredPosition = position;

        UpdateJoystickDirection();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isDragging = true;
        joystickParent.SetActive(true); // Show joystick

        // Move the joystick parent (base) to the pointer's position relative to the transparent image
        RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventData.position, eventData.pressEventCamera, out Vector2 localPosition);

        // Offset the joystickParent by half of its size to center it on the click/touch point
        Vector2 offset = new Vector2(joystickParentRectTransform.rect.width / 2, joystickParentRectTransform.rect.height / 2);
        joystickParentRectTransform.anchoredPosition = localPosition - offset;

        // Set the joystick handle to the center of the base initially
        joystickTransform.anchoredPosition = Vector2.zero;

        UpdateJoystickDirection();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isDragging = false;
        joystickTransform.anchoredPosition = Vector2.zero;
        joystickDirection = Vector2.zero;
        joystickParent.SetActive(false); // Hide joystick
    }

    private void UpdateJoystickDirection()
    {
        Vector2 delta = joystickTransform.anchoredPosition / joystickRadius;
        joystickDirection = delta.magnitude > 1f ? delta.normalized : delta;
    }

    private Vector2 ClampPosition(Vector2 position)
    {
        if (position.magnitude > joystickRadius)
        {
            position = position.normalized * joystickRadius;
        }
        return position;
    }

    public Vector2 GetJoystickDirection()
    {
        return joystickDirection;
    }
}
