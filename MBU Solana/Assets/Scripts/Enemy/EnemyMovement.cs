using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyMovement : MonoBehaviour
{
    public Transform player;
    public NavMeshAgent agent;
    private EnemyManager _manager;
    public float maxSearchDistance = 5;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        _manager = GetComponentInChildren<EnemyManager>();
        agent = GetComponent<NavMeshAgent>();

        if (agent == null)
        {
            Debug.LogError("NavMeshAgent component is missing.");
            return;
        }

        // Ensure the agent is on a NavMesh
        if (!agent.isOnNavMesh)
        {
            Debug.LogError("NavMeshAgent is not on a NavMesh.");
            NavMeshHit hit;
            if (NavMesh.SamplePosition(transform.position, out hit, 1.0f, NavMesh.AllAreas))
            {
                agent.Warp(hit.position); // Warp the agent to the nearest point on the NavMesh
            }
            else
            {
                Debug.LogError("Could not place the agent on a NavMesh.");
                return;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (agent == null || !agent.isActiveAndEnabled || !agent.isOnNavMesh)
        {
            return;
        }

        float distanceToPlayer = Vector3.Distance(transform.position, player.position);

        // If the player is within the max search distance, move towards them
        if (distanceToPlayer >= 1.5f && distanceToPlayer <= maxSearchDistance)
        {
            agent.destination = player.position;
        }
        else
        {
            // Stop moving
            agent.destination = transform.position;
        }

        // If close enough, trigger the attack
        if (distanceToPlayer <= 2 && distanceToPlayer >= 1)
        {
            _manager._animator._pigAnimator.SetTrigger("Attack");
        }
    }
}
