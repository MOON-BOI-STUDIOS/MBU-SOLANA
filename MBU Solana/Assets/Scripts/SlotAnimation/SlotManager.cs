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
    [Header("Slots, Lever and Machine")]
    public SlotRoll[] slots;
    public GameObject _lever;
    public SpritesAnimations[] _Animations;
    
    [Header("Slot Speed")]
    public float s_slotOne;
    public float s_slotTwo;
    public float s_slotThree;
    public GameObject spinAgaintext;
    public TMP_Text Infotext;
    public int limit = 2;

    private int slotone;
    private int slotTwo;
    private int slotThree;
    private Dictionary<int, int> slotNumbers = new Dictionary<int, int>();
    private int countCall;
    
    private int spinTimes = 0;

    private IPaymentHandler _paymentHandler;
    //private ICreditBalance _creditBalance;

    private bool IsSpinning = false;

    private void Start()
    {
        //Infotext = spinAgaintext.GetComponent<TextMeshProUGUI>();
        _paymentHandler = GetComponent<IPaymentHandler>();
        //_creditBalance = GetComponent<ICreditBalance>();
        Spin();

    }

    public void Spin()
    {
        if (spinTimes < limit && !IsSpinning)
        {
            //Debug.Log("spinTimes <= limit" + spinTimes);
            spinTimes += 1;
            IsSpinning = true;
            _Animations[0].InvokeAnimation();
            StartCoroutine(DelayStartingAnimation());
        }
        else
        {
            //Debug.Log("spinTimes > limit" + spinTimes);
            _paymentHandler.TryAndProcessTransaction();
        }
    }

    IEnumerator DelayStartingAnimation()
    {
        yield return new WaitForSeconds(2.0f);
        _lever.SetActive(true);
        _Animations[1].InvokeAnimation();
        Func_PlayUIAnim();
    }

    public void Func_PlayUIAnim()
    {
        slotone =  Random.Range(0, 5);
        slotTwo = Random.Range(slotone, 5);
        slotThree = Random.Range(0, 5);
        spinAgaintext.SetActive(false);
        slots[0].InvokeSlotSpin(false,0.0f,slotone,s_slotOne);
        AddtoDictionary(slotone);
        slots[1].InvokeSlotSpin(true, 1.0f,slotTwo,s_slotTwo);
        AddtoDictionary(slotTwo);
        slots[2].InvokeSlotSpin(true,2.0f,slotThree,s_slotThree);
        StartCoroutine(DelayRewards());
        
    }
    
    IEnumerator DelayRewards()
    {
        yield return new WaitForSeconds(10.0f);
        AddtoDictionary(slotThree);
    }

    public void nextRound()
    {
        spinTimes = 0;
        limit = 2;
        spinAgaintext.SetActive(false);
    }

    void AddtoDictionary(int key)
    {
        //Debug.Log("Add to dictionary");
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
          countCall = 0;
        }
    }

    void RewardPlayer()
    {
        //Debug.Log("Reward Player");
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
            ResetSlot();
        }
    }

    void StateOfReward(int key, int freq)
    {
        //Debug.Log("Reached here state of reward");
        switch (key)
        {
            case 0:
                //Infotext.text = "Sword PowerUp!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 7);
                }
                else 
                {
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 14);
                }
                break;
            case 1:
                //Infotext.text = "Health Power!!";
                //Spin again
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") - 50);
                }
                else
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") - 50);
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") - 4);
                }
                break;
            case 2:
                //Bonk win
                //Infotext.text = "BONK!!!";
                //Debug.Log("Bonk Win");
                //_creditBalance.TryCreditBalance();
                break;
            case 3:
                //Infotext.text = "Health UP!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") + 50);
                }
                else
                {
                    PlayerPrefs.SetInt("MaxHealth", PlayerPrefs.GetInt("MaxHealth") + 50);
                    PlayerPrefs.SetInt("SwordPower", PlayerPrefs.GetInt("SwordPower") + 100);
                }
                break;
            case 4:
                //Infotext.text = "Coins!!";
                if (freq == 2)
                {
                    PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 10);
                }
                else 
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
                else
                {
                    PlayerPrefs.SetInt("SpecialPower", PlayerPrefs.GetInt("SpecialPower") + 30);
                }
                break;
        }
        ResetSlot();
    }

     public void ResetSlot()
    {
        if (spinTimes < limit)
        {
            Infotext.text = Math.Abs(limit - spinTimes) + " spin(s) left";
        }
        else
        {
            Infotext.text = "0 spin(s) left";
        }

        spinAgaintext.SetActive(true);
        slotNumbers.Clear();
        IsSpinning = false;
        Debug.Log("IsSpinning:" + IsSpinning);
    }
     
     
}
