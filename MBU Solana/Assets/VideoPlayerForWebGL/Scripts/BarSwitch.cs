using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

namespace MagicWebSolutions
{
    public class BarSwitch : MonoBehaviour
    {
        public UnityEvent OnSwitchEnabledEvent, OnSwitchDisabledEvent;

        private Animation anim;
        private bool isEnabled = true;

        void Start()
        {
            anim = GetComponent<Animation>();

            if (PlayerPrefs.GetInt("IsLooping" + GetComponentInParent<VideoPlayerWebGL>().videoId.ToString(), 0) == 0)
                isEnabled = true;
            else
                isEnabled = false;

            Invoke("ChangeSwitch", 0.1f);
        }

        public void ChangeSwitch()
        {
            if (isEnabled)
            {
                anim.Play("BarSwitchOff");
                OnSwitchDisabledEvent.Invoke();
            }
            else
            {
                anim.Play("BarSwitchOn");
                OnSwitchEnabledEvent.Invoke();
            }

            isEnabled = !isEnabled;
        }

        public bool IsEnabled()
        {
            return isEnabled;
        }
    }
}