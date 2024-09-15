using UnityEngine;
using TMPro;
using YG;

public class CurrentDayText : MonoBehaviour
{
    [SerializeField] private TMP_Text _dayText;

    private int _currentDay;

    private void OnEnable()
    {
        YandexGame.SwitchLangEvent += LocalizeText;
        LocalizeText(YandexGame.savesData.language);
    }

    private void OnDisable()
    {
        YandexGame.SwitchLangEvent -= LocalizeText;
    }

    private void LocalizeText(string language)
    {
        _currentDay = YandexGame.savesData.DayOfGame;
        if (language == "ru")
            _dayText.text = $"День: {_currentDay}";
        else
            _dayText.text = $"Day: {_currentDay}";
    }
}
