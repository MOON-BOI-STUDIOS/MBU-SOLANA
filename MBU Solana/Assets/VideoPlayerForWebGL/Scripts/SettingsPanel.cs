using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace MagicWebSolutions
{
public class SettingsPanel : MonoBehaviour
{
    public TextMeshProUGUI playbackSpeedText, speedSliderText;
    private Animation anim;

    private bool canUpdateText = false;

    private void OnEnable()
    {
        if (canUpdateText)
            UpdatePlaybackSpeedText();
    }

    public void UpdatePlaybackSpeedText()
    {
        playbackSpeedText.text = speedSliderText.text;
        if (playbackSpeedText.text == "x1")
            playbackSpeedText.text = "Normal";
    }

    void Start()
    {
        anim = GetComponent<Animation>();

        if (Time.timeSinceLevelLoad < 0.2f)
        {
            gameObject.SetActive(false);
        }
    }

    public void EnablePlaybackSpeedPanel()
    {
        anim.Play("PlaybackSpeedPanelOn");
    }

    public void DisablePlaybackSpeedPanel()
    {
        anim.Play("SettingsPanelBack");
    }
}
}
