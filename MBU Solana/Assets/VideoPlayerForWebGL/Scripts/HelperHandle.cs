using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MagicWebSolutions
{
    public class HelperHandle : MonoBehaviour
    {
        public Transform realHandle;

        void LateUpdate()
        {
            transform.position = realHandle.position;
        }
    }
}
