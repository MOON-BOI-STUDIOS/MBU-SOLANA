using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MagicWebSolutions
{
public class SettingsButton : MonoBehaviour
{
    public GameObject settingsPanel, showingVideoManageUI;

    private bool isSettingsOpen = false;

    public void ClickedOnSettingsButton()
    {
        settingsPanel.SetActive(!isSettingsOpen);
        isSettingsOpen = !isSettingsOpen;
        GetComponent<Animation>().Play();

        showingVideoManageUI.GetComponent<ShowingVideoManagerUI>().canDisable = !isSettingsOpen;
    }
}
}