using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class EnergyVisualizer : MonoBehaviour
{
    [SerializeField] private Energy _energy;
    [SerializeField] private EnergyPercentHandler _energyPercentHandler;

    [SerializeField] private Image _batteryImage;
    [SerializeField] private TMP_Text _batteryText;

    private void OnEnable()
    {
        _energy.OnEnergyValueChanged += UpdateBatteryImage;
        _energy.OnEnergyValueChanged += UpdateBatteryText;
        _energyPercentHandler.OnEnergyPercentShowStateChanged += ChangeVisibleStateOfText;
    }

    private void OnDisable()
    {
        _energy.OnEnergyValueChanged -= UpdateBatteryImage;
        _energy.OnEnergyValueChanged -= UpdateBatteryText;
        _energyPercentHandler.OnEnergyPercentShowStateChanged -= ChangeVisibleStateOfText;
    }

    private void UpdateBatteryImage(float energy)
    {
        _batteryImage.fillAmount = energy / 100;
    }

    private void UpdateBatteryText(float energy)
    {
        _batteryText.text = $"{Mathf.RoundToInt(energy)}%";
    }

    private void ChangeVisibleStateOfText(bool isVisible)
    {
        _batteryText.enabled = isVisible;
    }
}
