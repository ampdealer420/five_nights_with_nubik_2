using DG.Tweening;
using System;
using System.Collections;
using UnityEngine;

public class DoorTransformChanger : MonoBehaviour
{
    public bool DoorIsWorked { get; private set; }

    [SerializeField] private GameObject _door;

    [SerializeField] private Transform _openedDoorTransform;
    [SerializeField] private Transform _closedDoorTransform;

    [SerializeField] private float _doorAnimationLength = 1.0f;

    private bool _doorOpened = false;   

    public event Action OnDoorStateChangingEvent;
    public event Action<bool> OnDoorStateChangedEvent;
    public event Action<bool> OnDoorWorkStateChangedEvent;

    private void Start()
    {
        SetDoorWorkState(true);
        ChangeDoorTransform();
    }

    public void ChangeDoorTransform()
    {
        if(DoorIsWorked == true)
        {
            if(_doorOpened == true)
            {
                CloseDoor();
            }

            else if(_doorOpened == false)
            {
                OpenDoor();
            }
        }
    }
    public void SetDoorWorkState(bool workState)
    {
        DoorIsWorked = workState;
        OnDoorWorkStateChangedEvent?.Invoke(DoorIsWorked);
    }

    public void OpenDoor()
    {
        OnDoorStateChangingEvent?.Invoke();
        _door.transform.DOMove(_openedDoorTransform.position, _doorAnimationLength);
        _doorOpened = true;
        StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
    }

    private void CloseDoor()
    {
        OnDoorStateChangingEvent?.Invoke();
        _door.transform.DOMove(_closedDoorTransform.position, _doorAnimationLength);
        _doorOpened = false;
        StartCoroutine(CallEventAfterAnimation(_doorAnimationLength));
    }

    IEnumerator CallEventAfterAnimation(float animationLength)
    {
        yield return new WaitForSeconds(animationLength);
        OnDoorStateChangedEvent?.Invoke(_doorOpened);
    }
}
