using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MagicWebSolutions
{
public class LoadingCircle : MonoBehaviour
{
    IEnumerator Start()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(true);

            yield return new WaitForSeconds(transform.childCount * 0.0065f);
        }
    }
}
}