using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerUI : MonoBehaviour
{
    #region Private Fields
    private PlayerManager target;

    [Tooltip("UI Text to display Player's Name")]
    [SerializeField]
    private TextMeshProUGUI playerNameText;

    [Tooltip("UI Slider to display Player's Health")]
    [SerializeField]
    private Slider playerHealthSlider;

    [Tooltip("UI text to display player's chpice1")]
    [SerializeField]
    private TextMeshProUGUI playerChpice1;

    [Tooltip("UI text to display player's chpice2")]
    [SerializeField]
    private TextMeshProUGUI playerChpice2;

    [Tooltip("UI text to display player's chpice3")]
    [SerializeField]
    private TextMeshProUGUI playerChpice3;

    Transform targetTransform;
    CanvasGroup _canvasGroup;
    Vector3 targetPosition;

    private bool doOnce = false;

    #endregion

    #region Public Fields Region
    [Tooltip("Pixel offset from the player target")]
    [SerializeField]
    private Vector3 screenOffset = new Vector3(0f, 10f, 0f);
    #endregion

    #region MonoBehaviour Callbacks

    void Awake()
    {
        this.transform.SetParent(GameObject.Find("Canvas").GetComponent<Transform>(), false);

        _canvasGroup = this.GetComponent<CanvasGroup>();
    }

    private void Update()
    {
        //Reflects the Player Health
        if (playerHealthSlider != null)
        {
            playerHealthSlider.value = target.health;
        }
        // Show Choices;
        ShowChoices();

        // Destroy itself if the target is null, It's a fail safe when Photon is destroying Instances of a Player over the network
        if (target == null)
        {
            Destroy(this.gameObject);
            return;
        }
    }

    private void LateUpdate()
    {
        // #Critical
        // Follow the Target GameObject on screen.
        if (targetTransform != null)
        {
            targetPosition = targetTransform.position;
            targetPosition.y += 2f;
            if (Camera.main == null)
            {
                Debug.Log("Camera is null");
                return;
            }
            this.transform.position = Camera.main.WorldToScreenPoint(targetPosition) + screenOffset;
        }
    }

    private void ShowChoices()
    {
        if (playerChpice1 != null && playerChpice2 != null && playerChpice3 != null && RoundManager.InstRoundManager.infoisShown == true)
        {
            if (!doOnce)
            {
                //Change alpha to 1
                playerChpice1.alpha = 1.0f;
                playerChpice2.alpha = 1.0f;
                playerChpice3.alpha = 1.0f;

                playerChpice1.text = target.Phase1Options.ToString();
                playerChpice2.text = target.Phase2Options.ToString();
                playerChpice3.text = target.Phase3Options.ToString();

                doOnce = true;
            }
        }
        else if(RoundManager.InstRoundManager.infoisShown == false)
        {
            doOnce = false;
        }
    }

    #endregion

    #region Public Methods

    public void SetTarget(PlayerManager _target)
    {
        if (_target == null)
        {
            Debug.LogError("<Color=Red><a>Missing</a></Color> PlayMakerManager target for PlayerUI.SetTarget.", this);
            return;
        }
        // Cache references for efficiency
        target = _target;
        if (playerNameText != null)
        {
            playerNameText.text = target.photonView.Owner.NickName;
        }
        if (playerChpice1 != null && playerChpice2 != null && playerChpice3 != null)
        {
            playerChpice1.alpha = 0.0f;
            playerChpice2.alpha = 0.0f;
            playerChpice3.alpha = 0.0f;
        }

        targetTransform = this.target.GetComponent<Transform>();
    }

    #endregion
}
