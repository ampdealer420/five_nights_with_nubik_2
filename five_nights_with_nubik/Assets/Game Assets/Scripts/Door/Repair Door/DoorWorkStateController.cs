using UnityEngine;

public class DoorWorkStateController : MonoBehaviour
{
    [SerializeField] private DoorTransformChanger _doorController;

    [SerializeField] private float _minSecToBrokeDoor;
    [SerializeField] private float _maxSecToBrokeDoor;

    private float _timeToBrokeDoor;
    private float _nextTimeToBrokeDoor;

    private void Start()
    {
        _timeToBrokeDoor = Random.Range(_minSecToBrokeDoor, _maxSecToBrokeDoor);
        _nextTimeToBrokeDoor += _timeToBrokeDoor;
    }

    private void Update()
    {
        if(Time.time >= _nextTimeToBrokeDoor)
        {
            _timeToBrokeDoor = Random.Range(_minSecToBrokeDoor, _maxSecToBrokeDoor);
            _nextTimeToBrokeDoor = Time.time + _timeToBrokeDoor;

            BrokeDoor();
        }
    }
    private void BrokeDoor()
    {
        _doorController.SetDoorWorkState(false);
    }

    private void RepairDoor()
    {
        _doorController.SetDoorWorkState(true);
    }
}
