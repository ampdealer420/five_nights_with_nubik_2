using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using NaughtyAttributes;

public class NubikEnemy : MonoBehaviour
{
    [SerializeField] private float _speedMovement;

    [Foldout("象螯")]
    [SerializeField] private Transform[] _waypoints;

    [Foldout("象螯")]
    [SerializeField] private Transform _roomWaypoint;

    [Foldout("象螯")]
    [SerializeField] private Transform _doorWaypoint;

    [Foldout("象螯")]
    [SerializeField] private Transform _playerTransform;

    [SerializeField] private NavMeshAgent _agent;
    [SerializeField] private Animator _animator;

    private Transform _waypointSelected;

    public event Action OnNubikStuckedFrontDoorEvent;

    private void Start()
    {
        _agent.speed = _speedMovement;
        StartCoroutine(StartMove());
    }

    public void SetupEnemy(float speed)
    {
        _speedMovement = speed;
        _agent.speed = _speedMovement;
    }

    private void Update()
    {
        if (_agent.pathStatus == NavMeshPathStatus.PathPartial)
        {
            _waypointSelected = SelectWaypoint();
            _agent.SetDestination(_waypointSelected.position);
        }

        if (Vector3.Distance(
                new Vector3(transform.position.x, 0, transform.position.z),
                new Vector3(_playerTransform.position.x, 0, _playerTransform.position.z)) <= 1.2f
           )
        {
            if (true)
            {
                Debug.Log("Dead");
            }
        }
    }

    private void SetIdleState()
    {
        _agent.speed = 0;
        _animator.SetBool("Move", false);
        _animator.SetBool("Idle", true);
    }

    private void SetMoveState()
    {
        _agent.speed = _speedMovement;
        _animator.SetBool("Move", true);
        _animator.SetBool("Idle", false);
    }

    private Transform SelectWaypoint()
    {
        return _waypoints[UnityEngine.Random.Range(0, _waypoints.Length)];
    }

    private void SetDestinationToPlayer()
    {
        _agent.speed = 5;
        _waypointSelected = _playerTransform;
        _agent.SetDestination(_playerTransform.position);
    }

    IEnumerator StartMove()
    {
        if (_waypointSelected != _roomWaypoint)
        {
            _waypointSelected = SelectWaypoint();
            _agent.SetDestination(_waypointSelected.position);
        }

        SetMoveState();

        while (Vector3.Distance(
                   new Vector3(transform.position.x, 0, transform.position.z),
                   new Vector3(_playerTransform.position.x, 0, _playerTransform.position.z)) >= 0.2f
                   && _waypointSelected != _doorWaypoint
               )
        {
            if (_agent.pathStatus == NavMeshPathStatus.PathPartial)
            {
                yield return new WaitForSeconds(0.25f);
            }

            if (Vector3.Distance(
                    new Vector3(_waypointSelected.position.x, 0, _waypointSelected.position.z),
                    new Vector3(transform.position.x, 0, transform.position.z)) <= 0.3f)
            {
                SetIdleState();
                yield return new WaitForSeconds(0.25f);
                break;
            }

            else
            {
                yield return new WaitForSeconds(0.25f);
            }
        }

        while (_waypointSelected == _doorWaypoint)
        {
            if (Vector3.Distance(
                new Vector3(transform.position.x, 0, transform.position.z),
                new Vector3(_waypointSelected.position.x, 0, _waypointSelected.position.z)) <= 0.5f)
            {
                SetIdleState();
                yield return new WaitForSeconds(2.5f);
                SetMoveState();
                _waypointSelected = _roomWaypoint;
                _agent.SetDestination(_roomWaypoint.position);
                yield return null;
            }

            else
            {
                yield return new WaitForSeconds(0.25f);
            }
        }

        if (_agent.pathStatus == NavMeshPathStatus.PathPartial || _agent.pathStatus == NavMeshPathStatus.PathInvalid && _agent.destination == _roomWaypoint.position)
        {
            OnNubikStuckedFrontDoorEvent?.Invoke();
        }

        yield return null;

        StartCoroutine(StartMove());
    }
}
