using TMPro;
using UnityEngine;
using YG;

public class DoorRepairVisualizer : MonoBehaviour
{
    [SerializeField] private DoorWorkStateController _doorWorkStateController;

    [SerializeField] private TMP_Text _batteryRepairText;

    private Color _startTextColor;
    private Color _repairTextColor => Color.red;

    private string _language => YandexGame.lang;

    private void Start()
    {
        _startTextColor = _batteryRepairText.color;
        ChangeTextOnRepaired(true);
    }

    private void OnEnable()
    {
        _doorWorkStateController.OnDoorWorkStateChanging += ChangeTextOnRepairing;
        _doorWorkStateController.OnDoorWorkStateChanged += ChangeTextOnRepaired;
    }

    private void OnDisable()
    {
        _doorWorkStateController.OnDoorWorkStateChanging -= ChangeTextOnRepairing;
        _doorWorkStateController.OnDoorWorkStateChanged -= ChangeTextOnRepaired;
    }

    private void ChangeTextOnRepairing()
    {
        _batteryRepairText.color = _repairTextColor;
        if (_language == "ru")
        {
            _batteryRepairText.text = $"Чиним дверь...";
        }
        else
        {
            _batteryRepairText.text = $"Fixing the door...";
        }
    }

    private void ChangeTextOnRepaired(bool isWorked)
    {
        if(isWorked)
        {
            _batteryRepairText.color = _startTextColor;
            if (_language == "ru")
            {
                _batteryRepairText.text = $"Дверь работает";
            }
            else
            {
                _batteryRepairText.text = $"The door is working";
            }
        }

        else
        {
            _batteryRepairText.color = _repairTextColor;
            if (_language == "ru")
            {
                _batteryRepairText.text = $"Дверь сломана";
            }
            else
            {
                _batteryRepairText.text = $"The door is broken";
            }
        }
    }
}
