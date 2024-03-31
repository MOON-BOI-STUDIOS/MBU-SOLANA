using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This interface is used to understand if the transfer is successful or not
//It is implemented by three scripts Arcade Manager in Bonk Arcade
// Game Manager in Shop Interior
// Game Manager in Bonk Battle Arena
public interface ITransferInfo
{
    public void TransferSuccessful(string quried);
    public void TransferUnsuccessful();
}
