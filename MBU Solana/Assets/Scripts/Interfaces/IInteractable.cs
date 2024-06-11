//Interface for objects (at the moment RaceGaming) interactions, such as Boost and oil floor
using UnityEngine;

public interface IInteractable
{
    public bool available { get; set; }

    public abstract void OnInteract(GameObject target);
    public abstract void OnDeInteract();
    public abstract void OnBubble(GameObject target);

}
