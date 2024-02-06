using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This is the interface to check the name of the tag on the object so that different fuctions 
// can be invoked according to the tag
public interface ICollisiontype
{
    string GetTag();
    Transform GetGameObjectPosition{get;}
    void callUIFunctions();
}
