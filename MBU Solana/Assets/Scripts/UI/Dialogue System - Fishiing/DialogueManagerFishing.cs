using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;

// https://www.youtube.com/watch?v=Yri0C-E7xG4&list=PL32dY9P_7YSpifhyXmDgi_Zn1fuuNKZ8V - by Bev!Bird - link is to whole playlist
public class DialogueManagerFishing : MonoBehaviour
{
    // bools in game
    [Header("bools")]
    public bool inDialogue;
    private bool isCurrentlyTyping;
    // dialogue text reference
    [Header("texts")]
    public TextMeshProUGUI dialogueText;
    // dialogue image
    //[Header("images")]
    //public Image dialoguePortrait;
    // delay in typing
    [Header("Float")]
    public float delay;
    // game object for dialogue
    [Header("game Objects")]
    public GameObject dialogueBox;
    // string for dialogue
    [Header("string")]
    private string completeText;
    // references for dialgoue system
    [Header("references")]
    private DialoguebaseFishing.Info currentDialogue;
    public static DialogueManagerFishing instance;

    //public PlayerManager controller;
    public bool Interact;

    public GameObject DialogueOptionUI;
    public GameObject[] optionButtons;
    private int OptionsAmount;
    public TextMeshProUGUI questiontext;

    public GameObject nextButton;

    private void Awake()
    {
        // creates singleton
        if(instance != null)
        {
            Debug.LogWarning("Fix This" + gameObject.name);
        }
        else
        {
            instance = this;
        }
    }


    // new queue
    public Queue<DialoguebaseFishing.Info> dialogueInfo = new Queue<DialoguebaseFishing.Info>();

    public bool isDialogueOption;


    public void OnEnable()
    {
        dialogueInfo = new Queue<DialoguebaseFishing.Info>(); // sets list
    }

    /// <summary>
    /// put's dialogue in queue
    /// </summary>
    /// <param name="db"></param>
    public void EnqueueDialogue(DialoguebaseFishing db)
    {
        if (inDialogue) return;
        inDialogue = true;
        // if there is dialogue set box active
        dialogueBox.SetActive(true);
        //controller.enabled = false;
        // old dialogue is clears
        dialogueInfo.Clear();

        if(db is DialogueOptions)
        {
            isDialogueOption = true;
            DialogueOptions dialogueOptions = db as DialogueOptions;
            OptionsAmount = dialogueOptions.optionsinfo.Length;
            questiontext.text = dialogueOptions.questionText;

            for(int i = 0; i < optionButtons.Length; i++)
            {
                optionButtons[i].SetActive(false);
            }

            for(int i = 0; i< OptionsAmount; i++)
            {
                optionButtons[i].SetActive(true);
                optionButtons[i].transform.GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = dialogueOptions.optionsinfo[i].buttonName;
                UnityEventHandler eventHandler = optionButtons[i].GetComponent<UnityEventHandler>();
                eventHandler.eventHandler = dialogueOptions.optionsinfo[i].Event;
                if(dialogueOptions.optionsinfo[i].nextdialogue != null)
                {
                    eventHandler.dialoguebase = dialogueOptions.optionsinfo[i].nextdialogue;
                }
                else
                {
                    eventHandler.dialoguebase = null;
                }

            }

        }
        else
        {
            isDialogueOption = false;
        }
       
        foreach(DialoguebaseFishing.Info info in db.dialogueInfo)
        {
            dialogueInfo.Enqueue(info);
        }

        DequeueDialog(); // take out current dalogue of queue

    }
    /// <summary>
    ///  complete text is set to true
    /// </summary>
    public void  CompleteText()
    {
        dialogueText.text = completeText;
        
    }

    /// <summary>
    /// removing dialogue from queue
    /// </summary>
    public void DequeueDialog()
    {
        // checks if count is 0
        if(dialogueInfo.Count == 0)
        {
            endOfDialogue();
            return;
        }
        // checks if bool is true
        if(isCurrentlyTyping == true)
        {
            // everything is stopped
            CompleteText();
            StopAllCoroutines();
            isCurrentlyTyping = false;
            //AudioManager.instance.Stop(currentDialogue.audioClip);
            return;
        }
        //  everthing is reset to then start typing new text
        DialoguebaseFishing.Info info = currentDialogue = dialogueInfo.Dequeue();
        completeText = info.text;

        dialogueText.text = info.text;
        //dialoguePortrait.sprite = info.profile.myPortrait;

        dialogueText.text = "";
        StartCoroutine(TypeText(info));
    }

    /// <summary>
    /// typing text out aytomatically
    /// </summary>
    /// <param name="info"></param>
    /// <returns></returns>
    public IEnumerator TypeText(DialoguebaseFishing.Info info)
    {
        // plays voice line
        //AudioManager.instance.Play(info.audioClip);

        isCurrentlyTyping = true;
        foreach(char c in info.text.ToCharArray())
        {
            // delays writing out next letter
            yield return new WaitForSeconds(delay);
            dialogueText.text += c;
            
        }
        isCurrentlyTyping = false;
    }

    /// <summary>
    /// when end of dialogue , dialogue box is set invactive/ audio stopped and indialogue set to false
    /// </summary>
    public void endOfDialogue()
    {
        dialogueBox.SetActive(false);
        inDialogue = false;
        Interact = true;
        OptionsLogic();
  
       
    //AudioManager.instance.Stop(currentDialogue.audioClip);
    ////Move to next Act in game
    //LevelController.Instance.playerControl.enabled = true;
    //LevelController.Instance.timer = LevelController.Instance.maxIntermissionTime;
    }

    /// <summary>
    /// Call every frame.
    /// </summary>
    private void Update()
    {
        ////If enter pressed in dialogue, move to next box.
        //if (Input.GetKeyDown("return") && inDialogue && dialogueBox.activeSelf) DequeueDialog();
    }

    public void OptionsLogic()
    {
        if(isDialogueOption == true)
        {
            DialogueOptionUI.SetActive(true);


        }
    }

    public void CloseOptions()
    {
        DialogueOptionUI.SetActive(false);
        isDialogueOption = false;
     

    }
}
