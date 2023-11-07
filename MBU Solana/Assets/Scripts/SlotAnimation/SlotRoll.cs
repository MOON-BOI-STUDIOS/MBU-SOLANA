using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class SlotRoll: MonoBehaviour
{
    public Image m_SlotImage;
    public Sprite[] m_SlotArray;
    public Sprite[] m_SelectionSprite;
    public AudioSource audioData;

    public void InvokeSlotSpin(bool delay, float m_wait, int slotnumber, float manipulateSlotSpin)
    {
        if (delay)
        {
            StartCoroutine(DelaySpin(m_wait, slotnumber, manipulateSlotSpin));
        }
        else
        {
            StartCoroutine(SlotSpin(slotnumber, manipulateSlotSpin));
        }

        
    }

 
    IEnumerator DelaySpin(float m_wait, int slotnumber, float manipulateSlotSpin)
    {
        yield return new WaitForSeconds(m_wait);
        StartCoroutine(SlotSpin(slotnumber, manipulateSlotSpin));
    }

    IEnumerator SlotSpin(int slotNumber, float manipulateSlotSpin)
    {
        //slotone = Random.Range(0, 5);

        int m_IndexSprite = 0;
        audioData.Play(0);
        while (m_IndexSprite < m_SlotArray.Length)
        {
            m_SlotImage.sprite = m_SlotArray[m_IndexSprite];
            if (m_IndexSprite == slotNumber + 11)
                break;
            m_IndexSprite += 1;
            //speed = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite /manipulateSlotSpin );
        }

        for (int i = (slotNumber * 4); i < (slotNumber * 4) + 4; i++)
        {
            m_SlotImage.sprite = m_SelectionSprite[i];
            yield return new WaitForSeconds(0.5f);
        }
    }
}
