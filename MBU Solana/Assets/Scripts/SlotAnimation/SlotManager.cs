using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

// This is the Slot Machine Manager that will animate the machine as it appears on the screen 
// It will also be responsible for spinning of the slots and animation of the lever 

public class SlotManager : MonoBehaviour
{
    /*public GameObject slotMachine;
    public Vector3 startPositionSlot;
    public Vector3 positionToMoveTo;

    // Start is called before the first frame update
    void Start()
    {
        //transform. = startPositionSlot;
        StartCoroutine(LerpPosition(positionToMoveTo, 5));
    }

    // Update is called once per frame
    void Update()
    {

    }
    
    IEnumerator LerpPosition(Vector3 targetPosition, float duration)
    {
        float time = 0;
        Vector3 startPosition = slotMachine.transform.position;
        while (time < duration)
        {
            slotMachine.transform.position = Vector3.Lerp(startPosition, targetPosition, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        slotMachine.transform.position = targetPosition;
    }*/
    public GameObject lever;
    public Image m_Image;
    public Image m_SlotOneImage;
    public Image m_SlotTwoImage;
    public Image m_SlotThreeImage;

    public Sprite[] m_SpriteArray;
    public Sprite[] m_SlotOneArray;
    public Sprite[] m_SlotTwoArray;
    public Sprite[] m_SlotThreeArray;
    public float m_Speed = 1f;
    public GameObject spinAgaintext;
    
    private int slotone;
    private int slotTwo;
    private Dictionary<int, int> slotNumbers = new Dictionary<int, int>();
    private int countCall;
    
    private int spinTimes = 0;
    
    public void Func_PlayUIAnim()
    {
        if (spinTimes == 0)
        {
            spinTimes += 1; // To stop second Spin
            lever.SetActive(true);
            StartCoroutine(Func_PlayAnimUI());
            StartCoroutine(SlotOneSpin());
            StartCoroutine(SlotTwoSpin());
            StartCoroutine(SlotThreeSpin());
        }
        else
        {
            spinTimes += 1;
        }

    }

    public void nextRound()
    {
        spinTimes = 0;
        spinAgaintext.SetActive(false);
    }

    IEnumerator Func_PlayAnimUI()
    {
        int m_IndexSprite = 0;
        while (m_IndexSprite < m_SpriteArray.Length)
        {
            m_Image.sprite = m_SpriteArray[m_IndexSprite];
            m_IndexSprite += 1;
            yield return new WaitForSeconds(m_Speed);
        }
        
        lever.SetActive(false);
    }
    IEnumerator SlotOneSpin()
    {
        slotone = Random.Range(0, 5);
        
        int m_IndexSprite = 0;
        float speed = 0.0f;
        while (m_IndexSprite < m_SlotOneArray.Length)
        {
            m_SlotOneImage.sprite = m_SlotOneArray[m_IndexSprite];
            if(m_IndexSprite == slotone + 11)
                break;
            m_IndexSprite += 1;
            //speed = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/17.0f);
        }
        //Debug.Log("SlotOne Added");
        AddtoDictionary(slotone);
        
    }
    IEnumerator SlotTwoSpin()
    {
        slotTwo = Random.Range(slotone, 5);
        int m_IndexSprite = 0;
        float speedTwo = 0.0f;
        while (m_IndexSprite < m_SlotTwoArray.Length)
        {
            m_SlotTwoImage.sprite = m_SlotTwoArray[m_IndexSprite];
            if(m_IndexSprite == slotTwo + 11)
                break;
            m_IndexSprite += 1;
            //speedTwo = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/16.8f);
        }
        //Debug.Log("SlotTwo added");
        AddtoDictionary(slotTwo);
        
    }
    IEnumerator SlotThreeSpin()
    {
        int slotThree = Random.Range(0, 5);
        int m_IndexSprite = 0;
        float speedThree = 0.0f;
        while (m_IndexSprite < m_SlotThreeArray.Length)
        {
            m_SlotThreeImage.sprite = m_SlotThreeArray[m_IndexSprite];
            if(m_IndexSprite == slotThree + 11)
                break;
            m_IndexSprite += 1;
            //speedThree = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/16.7f);
        }
        //Debug.Log("SlotThree added");
        AddtoDictionary(slotThree);
    }

    void AddtoDictionary(int key)
    {
        countCall += 1;
        if (slotNumbers.ContainsKey(key))
        {
            slotNumbers[key] += 1;
        }
        else
        {
            slotNumbers[key] = 1;
        }

        if (countCall == 3)
        {
          RewardPlayer();  
        }
    }

    void RewardPlayer()
    {
        //Debug.Log("Rewarding Player");
        foreach (int key in slotNumbers.Keys)
        {
            if (slotNumbers[key] > 1)
            {
                StateOfReward(key, slotNumbers[key]);
                break;
            }
            //Debug.Log("Key" + key);
            //Debug.Log("Value" + slotNumbers[key]);
        }
    }

    void StateOfReward(int key, int freq)
    {
        switch (key)
        {
            case 0:
                PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 7);
                break;
            case 1:
                spinAgaintext.SetActive(true);
                //Spin again
                break;
            case 2:
                //Bonk win
                
                break;
            case 3:
                PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") + 100);
                break;
            case 4:
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 10);
                }
                else if (freq == 3)
                {
                    PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 50);
                }
                break;
            case 5:
                PlayerPrefs.SetInt("SpecialPower", PlayerPrefs.GetInt("SpecialPower") + 20);
                break;
            
        }
        slotNumbers.Clear();
    }
}
