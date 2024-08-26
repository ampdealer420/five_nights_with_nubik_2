using DG.Tweening;
using System;
using System.Collections;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    [SerializeField] private GameObject _door;

    [SerializeField] private Transform _openedDoorTransform;
    [SerializeField] private Transform _closedDoorTransform;

    [SerializeField] private float _doorAnimationLength = 1.0f;

    private bool _doorOpened = false;

    public event Action DoorStateChanging;
    public event Action DoorStateChanged;

    private void Start()
    {
        ChangeDoorState();
    }

    public void ChangeDoorState()
    {
        if(_doorOpened == true)
        {
            DoorStateChanging?.Invoke();
            _door.transform.DOMove(_closedDoorTransform.position, _doorAnimationLength);
            StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
            _doorOpened = false;
        }

        else if(_doorOpened == false)
        {
            DoorStateChanging?.Invoke();
            _door.transform.DOMove(_openedDoorTransform.position, _doorAnimationLength);
            StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
            _doorOpened = true;
        }
    }

    IEnumerator CallEventAfterAnimation(float animationLength)
    {
        yield return new WaitForSeconds(animationLength);
        DoorStateChanged?.Invoke();
    }
}
