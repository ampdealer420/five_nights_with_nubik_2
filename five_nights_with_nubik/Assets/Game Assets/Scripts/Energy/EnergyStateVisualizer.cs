using TMPro;
using UnityEngine;
using YG;

public class EnergyStateVisualizer : MonoBehaviour
{
    [SerializeField] private EnergyPercentHandler _energyPercentHandler;

    [SerializeField] private TMP_Text _repairButtonText;

    private Color _startColor;
    private Color _brokeColor => Color.red;

    private string _language => YandexGame.lang;

    private void Start()
    {
        _startColor = _repairButtonText.color;
    }

    private void OnEnable()
    {
        _energyPercentHandler.OnEnergyPercentShowStateChanged += UpdateUI;
        _energyPercentHandler.OnEnergyPercentShowStateChanging += UpdateUIOnRepair;
    }

    private void OnDisable()
    {
        _energyPercentHandler.OnEnergyPercentShowStateChanged -= UpdateUI;
        _energyPercentHandler.OnEnergyPercentShowStateChanging -= UpdateUIOnRepair;
    }

    private void UpdateUIOnRepair()
    {
        _repairButtonText.color = _brokeColor;
        if (_language == "ru")
        {
            _repairButtonText.text = "����� �������...";
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
                _repairButtonText.text = "������� ��������";
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
                _repairButtonText.text = "������� �������";
            }

            else
            {
                _repairButtonText.text = "The battery is broken";
            }
        }
    }
}
