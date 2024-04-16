using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[CreateAssetMenu(fileName ="New Dialogue", menuName = "DialogueOption")]
public class DialogueOptions : DialoguebaseFishing
{
    [TextArea(2, 18)]
    public string questionText;

    [System.Serializable]
    public class options
    {
        public string buttonName;
        public DialoguebaseFishing nextdialogue;
        public UnityEvent Event;
    }
    public options[] optionsinfo;

  

}
