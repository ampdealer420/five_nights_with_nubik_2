using UnityEngine;
using TMPro;
using YG;

public class DayTimeVisualizer : MonoBehaviour
{
    [SerializeField] private DayTime _dayTime;
    [SerializeField] private TMP_Text _hourText;

    private string _language => YandexGame.lang;

    private void OnEnable() => _dayTime.OnHourChangedEvent += UpdateHourText;

    private void OnDisable() => _dayTime.OnHourChangedEvent -= UpdateHourText;

    private void UpdateHourText(int hour)
    {
        if (_language == "ru")
        {
            _hourText.text = hour.ToString("0:'00");
        }

        else if(_language == "en")
        {
            _hourText.text = hour.ToString("0:'00");
        }
    }
}
