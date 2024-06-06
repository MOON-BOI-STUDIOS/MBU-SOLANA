//Interface for objects (at the moment RaceGaming) interactions, such as Boost and oil floor
using UnityEngine;

public interface IInteractable
{
    public abstract void OnInteract(GameObject target);
    public abstract void OnRemoveInteract();
    public abstract void OnBubble(GameObject target);

}
