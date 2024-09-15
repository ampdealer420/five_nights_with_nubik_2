using TMPro;
using UnityEngine;
using YG;

public class EnergyStateVisualizer : MonoBehaviour
{
    [SerializeField] private BatteryViewHandler _energyPercentHandler;

    [SerializeField] private TMP_Text _repairButtonText;

    private Color _startColor;
    private Color _brokeColor => Color.red;

    private string _language => YandexGame.lang;

    private void Start()
    {
        _startColor = _repairButtonText.color;
        UpdateUI(true);
    }

    private void OnEnable()
    {
        _energyPercentHandler.OnBatteryPercentShowStateChanged += UpdateUI;
        _energyPercentHandler.OnBatteryPercentShowStateChanging += UpdateUIOnRepair;
    }

    private void OnDisable()
    {
        _energyPercentHandler.OnBatteryPercentShowStateChanged -= UpdateUI;
        _energyPercentHandler.OnBatteryPercentShowStateChanging -= UpdateUIOnRepair;
    }

    private void UpdateUIOnRepair()
    {
        _repairButtonText.color = _brokeColor;
        if (_language == "ru")
        {
            _repairButtonText.text = "Чиним батарею...";
        }

        else
        {
            _repairButtonText.text = "Fixing the battery...";
        }
    }

    private void UpdateUI(bool batteryIsWorked)
    {
        if(batteryIsWorked == true)
        {
            _repairButtonText.color = _startColor;
            if (_language == "ru")
            {
                _repairButtonText.text = "Батарея работает";
            }

            else
            {
                _repairButtonText.text = "The battery is working";
            }
        }

        else
        {
            _repairButtonText.color = _brokeColor;
            if (_language == "ru")
            {
                _repairButtonText.text = "Батарея сломана";
            }

            else
            {
                _repairButtonText.text = "The battery is broken";
            }
        }
    }
}
