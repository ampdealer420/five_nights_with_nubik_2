using UnityEngine;
using UnityEngine.UI;

public class ReactorRepairButtom : MonoBehaviour
{
    [SerializeField] private ReactorRepairState _reactorRepairState;
    [SerializeField] private Button _buttonToRepairButton;

    private void OnEnable()
    {
        _buttonToRepairButton.AddEvent(_reactorRepairState.RepairReactor);
    }

    private void OnDisable()
    {
        _buttonToRepairButton.RemoveEvent(_reactorRepairState.RepairReactor);
    }
}
