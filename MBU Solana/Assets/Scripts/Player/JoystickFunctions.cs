using UnityEngine;
using UnityEngine.InputSystem;

public class JoystickFunctions : MonoBehaviour, IPlayerInput
{
    public CustomJoystick joystick;
    public Vector2 GetInputDirection()
    {
        if(joystick != null)
        {
            return joystick.GetJoystickDirection();
        }

        else
        {
            return Vector2.zero;
        }
    }
}
