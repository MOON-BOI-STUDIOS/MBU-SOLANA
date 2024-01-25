using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This class is for all the collectables except weapons and melee weapons.
// It will consist of coins, special coins etc.
// This class will have fields which will indicate the amount advantage/disadvantage
// will the player achieve when collecting items like this.
[CreateAssetMenu(menuName = "MBU/CollectableItem")]
public class CollectableItemInfo : ItemInfo
{
    public float power;
}
