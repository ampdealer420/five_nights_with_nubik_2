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

    public event Action OnDoorStateChangingEvent;
    public event Action<bool> OnDoorStateChangedEvent;

    private void Start()
    {
        ChangeDoorState();
    }

    public void ChangeDoorState()
    {
        if(_doorOpened == true)
        {
            OnDoorStateChangingEvent?.Invoke();
            _door.transform.DOMove(_closedDoorTransform.position, _doorAnimationLength);
            _doorOpened = false;
            StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
        }

        else if(_doorOpened == false)
        {
            OnDoorStateChangingEvent?.Invoke();
            _door.transform.DOMove(_openedDoorTransform.position, _doorAnimationLength);
            _doorOpened = true;
            StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
        }
    }

    IEnumerator CallEventAfterAnimation(float animationLength)
    {
        yield return new WaitForSeconds(animationLength);
        OnDoorStateChangedEvent?.Invoke(_doorOpened);
    }
}
