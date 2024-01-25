using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Second level class, which inherits from Item abstract class.
// This class holds the fields and methods used by the third level classes.
// This is made so that coin type and special coin type can be segregated from combat weapons
public abstract class Collectables : Item, IDestruct
{
    public abstract override void Use();
    public abstract void Destroyable();
    public ParticleSystem particleImpactPrefab;
}
