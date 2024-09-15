using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class EnergyCountVisualizer : MonoBehaviour
{
    [SerializeField] private Energy _energy;
    [SerializeField] private BatteryViewHandler _energyPercentHandler;

    [SerializeField] private Image _batteryPercentImage;
    [SerializeField] private TMP_Text _batteryPercentText;

    private void OnEnable()
    {
        _energy.OnEnergyValueChanged += UpdateBatteryPercentImage;
        _energy.OnEnergyValueChanged += UpdateBatterytPercentText;
        _energyPercentHandler.OnBatteryPercentShowStateChanged += ChangeBatteryVisualsState;
    }

    private void OnDisable()
    {
        _energy.OnEnergyValueChanged -= UpdateBatteryPercentImage;
        _energy.OnEnergyValueChanged -= UpdateBatterytPercentText;
        _energyPercentHandler.OnBatteryPercentShowStateChanged -= ChangeBatteryVisualsState;
    }

    private void UpdateBatteryPercentImage(float energy)
    {
        _batteryPercentImage.fillAmount = energy / 100;
    }

    private void UpdateBatterytPercentText(float energy)
    {
        _batteryPercentText.text = $"{Mathf.RoundToInt(energy)}%";
    }

    private void ChangeBatteryVisualsState(bool isVisible)
    {
        _batteryPercentText.enabled = isVisible;
        _batteryPercentImage.enabled = isVisible;
    }
}
