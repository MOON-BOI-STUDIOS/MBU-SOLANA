using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CodeMonkey.Utils;

public class ArrowHandler : MonoBehaviour
{
    [SerializeField] private QuestPointer _QuestPointer;

    private void Start()
    {
        _QuestPointer.Show(new Vector3(20, 45));

        int state = 0;
        FunctionUpdater.Create(() =>
        {
            switch (state)
            {
                case 0:
                    if (Vector3.Distance(Camera.main.transform.position, new Vector3(200, 45)) < 50)
                    {
                        state = 1;
                    }
                    break;
            }
        });
    }

}
