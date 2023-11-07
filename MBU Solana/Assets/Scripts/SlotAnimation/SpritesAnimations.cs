using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpritesAnimations : MonoBehaviour
{
    public Sprite[] m_spriteArray;

    public Image SpriteImage;

    public float speed;
    
    public bool leverObject;

    public bool DelayStart;
    // Start is called before the first frame update
    void Start()
    {
    }
    public void InvokeAnimation()
    {
        if (DelayStart)
        {
            StartCoroutine(DelayStartingAnimation());
        }
        else
        {
            StartCoroutine(spriteAnimationCoroutine());
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator DelayStartingAnimation()
    {
        yield return new WaitForSeconds(2.0f);
        StartCoroutine(spriteAnimationCoroutine());
    }
    
    IEnumerator spriteAnimationCoroutine()
    {
        int m_IndexSprite = 0;
        //audioData.Play(0);
        while (m_IndexSprite < m_spriteArray.Length)
        {
            SpriteImage.sprite = m_spriteArray[m_IndexSprite];
            m_IndexSprite += 1;
            //speed = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(speed);
        }
        if (leverObject)
        {
            gameObject.SetActive(false);
        }
    }
}
