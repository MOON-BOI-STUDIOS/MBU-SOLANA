using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ExperimentalManager : MonoBehaviour
{
    public TextMeshProUGUI text1;
    public TMP_InputField amountTxt;

    // Start is called before the first frame update
    void Start()
    {
        text1.text = "578818529252";
        amountTxt.text = "50000";
    }
    public void compare()
    {
        if (long.Parse(amountTxt.text) > long.Parse(text1.text))
        {
            Debug.Log("Not Enough funds");
        }
        else
        {
            Debug.Log("It is enough");
        }

    }
}
