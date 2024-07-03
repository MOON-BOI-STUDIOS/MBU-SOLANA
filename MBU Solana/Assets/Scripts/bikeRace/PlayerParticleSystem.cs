using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerParticleSystem : MonoBehaviour
{
    [SerializeField]
    private ParticleSystem _smoke;
    public void ParticleEngineOn()
    {
        _smoke.Emit(1);
    }
}
