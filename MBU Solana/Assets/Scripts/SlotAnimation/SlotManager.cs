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
    public Sprite[] m_SelectionSprite;
    public float m_Speed = 1f;
    public float s_slotOne;
    public float s_slotTwo;
    public float s_slotThree;
    public float m_wait;
    public GameObject spinAgaintext;
    //public Text Infotext;
    public AudioSource audioData;
    
    private int slotone;
    private int slotTwo;
    private Dictionary<int, int> slotNumbers = new Dictionary<int, int>();
    private int countCall;
    
    private int spinTimes = 0;

    private void Start()
    {
        //Infotext = spinAgaintext.GetComponent<TextMeshProUGUI>();
    }

    public void Func_PlayUIAnim()
    {
        if (spinTimes <= 5)
        {
            spinAgaintext.SetActive(false);
            spinTimes += 1; // To stop second Spin
            lever.SetActive(true);
            StartCoroutine(Func_PlayAnimUI());
            StartCoroutine(SlotOneSpin());
            StartCoroutine(DelayBetweenSlots());
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
        m_SlotOneImage.sprite = m_SlotOneArray[12];
        m_SlotTwoImage.sprite = m_SlotTwoArray[14];
        m_SlotThreeImage.sprite = m_SlotThreeArray[16];
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
        audioData.Play(0);
        while (m_IndexSprite < m_SlotOneArray.Length)
        {
            m_SlotOneImage.sprite = m_SlotOneArray[m_IndexSprite];
            if(m_IndexSprite == slotone + 11)
                break;
            m_IndexSprite += 1;
            //speed = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/s_slotOne);
        }

        for (int i = (slotone * 4); i < (slotone * 4) + 4; i++)
        {
            m_SlotOneImage.sprite = m_SelectionSprite[i];
            yield return new WaitForSeconds(0.5f);
        }
        //Debug.Log("SlotOne Added");
        AddtoDictionary(slotone);
        
    }
    IEnumerator SlotTwoSpin()
    {
        slotTwo = Random.Range(slotone, 5);
        int m_IndexSprite = 0;
        float speedTwo = 0.0f;
        audioData.Play(0);
        while (m_IndexSprite < m_SlotTwoArray.Length)
        {
            m_SlotTwoImage.sprite = m_SlotTwoArray[m_IndexSprite];
            if(m_IndexSprite == slotTwo + 11)
                break;
            m_IndexSprite += 1;
            //speedTwo = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/s_slotTwo);
        }
        for (int i = (slotTwo * 4); i < (slotTwo * 4) + 4; i++)
        {
            m_SlotTwoImage.sprite = m_SelectionSprite[i];
            yield return new WaitForSeconds(0.5f);
        }
        //Debug.Log("SlotTwo added");
        AddtoDictionary(slotTwo);
        
    }
    IEnumerator SlotThreeSpin()
    {
        int slotThree = Random.Range(0, 5);
        int m_IndexSprite = 0;
        float speedThree = 0.0f;
        audioData.Play(0);
        while (m_IndexSprite < m_SlotThreeArray.Length)
        {
            m_SlotThreeImage.sprite = m_SlotThreeArray[m_IndexSprite];
            if(m_IndexSprite == slotThree + 11)
                break;
            m_IndexSprite += 1;
            //speedThree = m_IndexSprite / (m_IndexSprite + 1);
            yield return new WaitForSeconds(m_IndexSprite/s_slotThree);
        }
        for (int i = (slotThree * 4); i < (slotThree * 4) + 4; i++)
        {
            m_SlotThreeImage.sprite = m_SelectionSprite[i];
            yield return new WaitForSeconds(0.5f);
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
        bool unique = true;
        //Debug.Log("Rewarding Player");
        foreach (int key in slotNumbers.Keys)
        {
            //Debug.Log("Key" + key);
            //Debug.Log("Value" + slotNumbers[key]);
            if (slotNumbers[key] > 1)
            {
                unique = false;
                StateOfReward(key, slotNumbers[key]);
                break;
            }
        }

        if (unique)
        {
            spinAgaintext.SetActive(true);
        }
    }

    void StateOfReward(int key, int freq)
    {
        switch (key)
        {
            case 0:
                //Infotext.text = "Sword Up!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 7);
                }
                else if(freq == 3)
                {
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 14);
                }
                break;
            case 1:
                //Infotext.text = "Spin Again!!";
                //Spin again
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") - 50);
                }
                else if (freq == 3)
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") - 50);
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") - 4);
                }
                break;
            case 2:
                //Bonk win
                //Infotext.text = "BONK!!!";
                break;
            case 3:
                //Infotext.text = "Health UP!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") + 50);
                }
                else if( freq == 3)
                {
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 100);
                }
                break;
            case 4:
                //Infotext.text = "Coins!!";
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
                //Infotext.text = "Special Power!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("SpecialPower", PlayerPrefs.GetInt("SpecialPower") + 20);
                }
                else if(freq == 3)
                {
                    PlayerPrefs.SetInt("SpecialPower", PlayerPrefs.GetInt("SpecialPower") + 30);
                }
                break;
        }
        spinAgaintext.SetActive(true);
        slotNumbers.Clear();
    }

    IEnumerator DelayBetweenSlots()
    {
        yield return new WaitForSeconds(m_wait);
        SlotTwo();
    }

    IEnumerator DelayBetweenSlotsThree()
    {
        yield return new WaitForSeconds(m_wait);
        SlotThree();
    }

    private void SlotTwo()
    {
        StartCoroutine(SlotTwoSpin());
        StartCoroutine(DelayBetweenSlotsThree());
    }

    private void SlotThree()
    {
        StartCoroutine(SlotThreeSpin());
    }
}
