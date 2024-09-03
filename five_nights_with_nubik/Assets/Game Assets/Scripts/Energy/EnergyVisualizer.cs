using UnityEngine;
using UnityEngine.UI;

public class EnergyVisualizer : MonoBehaviour
{
    [SerializeField] private Energy _energy;
    [SerializeField] private Image _batteryImage;

    private void OnEnable()
    {
        _energy.OnEnergyValueChanged += UpdateBatteryImage;
    }

    private void OnDisable()
    {
        _energy.OnEnergyValueChanged -= UpdateBatteryImage;
    }

    private void UpdateBatteryImage(float energy)
    {
        _batteryImage.fillAmount = energy / 100;
    }
}
