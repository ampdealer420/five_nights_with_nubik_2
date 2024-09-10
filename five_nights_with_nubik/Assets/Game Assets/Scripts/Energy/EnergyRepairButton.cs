using UnityEngine;
using UnityEngine.UI;

public class EnergyRepairButton : MonoBehaviour
{
    [SerializeField] private EnergyPercentHandler _energyPercentHandler;

    [SerializeField] private Button _repairButton;

    private void OnEnable()
    {
        _repairButton.AddEvent(RepairButton);
    }

    private void OnDisable()
    {
        _repairButton.RemoveEvent(RepairButton);
    }

    private void RepairButton()
    {
        StartCoroutine(_energyPercentHandler.RepairBatteryText());
    }
}
