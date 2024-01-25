using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using UnityEngine;

public class TogglingUI : MonoBehaviour, IToggleUI
{
    public GameObject wallet;

    public GameObject slotsMachine;
    // Start is called before the first frame update

    public void ToggleSlotsMachine(bool visualise)
    {
        slotsMachine.SetActive(visualise);
    }

    public void ToggleWalletUI(bool visualise)
    {
        wallet.SetActive(visualise);
    }

}
