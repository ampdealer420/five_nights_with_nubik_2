using UnityEngine;
using UnityEngine.UI;

public class DoorRepiarButton : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private DoorWorkStateController _doorWorkStateController;

    private void OnEnable()
    {
        _button.AddEvent(StartRepairDoor);
    }

    private void OnDisable()
    {
        _button.RemoveEvent(StartRepairDoor);
    }

    public void StartRepairDoor()
    {
        StartCoroutine(_doorWorkStateController.RepairDoor());
    }
}
