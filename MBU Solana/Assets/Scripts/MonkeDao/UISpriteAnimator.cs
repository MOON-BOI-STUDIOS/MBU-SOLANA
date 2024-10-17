using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class UISpriteAnimator : MonoBehaviour
{
    public Image uiImage; // The UI Image component to animate
    public Sprite[] animationSprites; // Array of sprites for the animation
    public float framesPerSecond = 10f; // Speed of the animation in frames per second

    private int currentFrame;
    private float timer;

    void Start()
    {
        if (animationSprites.Length > 0)
        {
            currentFrame = 0;
            uiImage.sprite = animationSprites[currentFrame];
        }
    }

    void Update()
    {
        // Increment timer by time passed since the last frame
        timer += Time.deltaTime;

        // Calculate when to switch to the next frame based on framesPerSecond
        if (timer >= 1f / framesPerSecond)
        {
            timer -= 1f / framesPerSecond; // Reset timer for next frame
            currentFrame = (currentFrame + 1) % animationSprites.Length; // Loop through frames
            uiImage.sprite = animationSprites[currentFrame]; // Update the sprite
        }
    }
}
