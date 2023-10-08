using UnityEngine;
using UnityEngine.InputSystem;

public class JoystickFunctions : MonoBehaviour, IPlayerInput
{
    public CustomJoystick joystick;
    public Vector2 GetInputDirection()
    {
        return joystick.GetJoystickDirection();
    }
}
