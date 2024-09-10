using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class DoorWorkStateController : MonoBehaviour
{
    [SerializeField] private DoorTransformChanger _doorController;

    [SerializeField] private float _minSecToBrokeDoor;
    [SerializeField] private float _maxSecToBrokeDoor;

    private float _nextTimeToBrokeDoor;
    private float _timeToRepairDoor;

    public event Action<bool> OnDoorWorkStateChanged;
    public event Action OnDoorWorkStateChanging;

    public void Initialize(float timeToRepairButton, float minTimeToBrokeDoor, float maxTimeToBrokeDoor)
    {
        _timeToRepairDoor = timeToRepairButton;

        _minSecToBrokeDoor = minTimeToBrokeDoor;
        _maxSecToBrokeDoor = maxTimeToBrokeDoor;

        _nextTimeToBrokeDoor += GetTimeToBrokeDoor();
    }

    private void Update()
    {
        if(Time.time >= _nextTimeToBrokeDoor)
        {
            _nextTimeToBrokeDoor = Time.time + GetTimeToBrokeDoor();

            BrokeDoor();
        }
    }

    private void BrokeDoor()
    {
        OnDoorWorkStateChanging?.Invoke();
        _doorController.SetDoorWorkState(false);
        OnDoorWorkStateChanged?.Invoke(false);
    }

    private float GetTimeToBrokeDoor()
    {
        return Random.Range(_minSecToBrokeDoor, _maxSecToBrokeDoor);
    }

    public IEnumerator RepairDoor()
    {
        OnDoorWorkStateChanging?.Invoke();
        yield return new WaitForSeconds(_timeToRepairDoor);
        _doorController.SetDoorWorkState(true);
        OnDoorWorkStateChanged?.Invoke(true);
    }
}
