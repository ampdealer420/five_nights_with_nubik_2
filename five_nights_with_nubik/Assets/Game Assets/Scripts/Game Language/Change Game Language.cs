using UnityEngine;
using UnityEngine.UI;
using YG;

public class ChangeGameLanguage : MonoBehaviour
{
    [SerializeField] private Button _changeLanguageButton;

    [SerializeField] private string _language;

    private void OnEnable()
    {
        _changeLanguageButton.AddEvent(() => YandexGame.SwitchLanguage(_language));
    }

    private void OnDisable()
    {
        _changeLanguageButton.RemoveEvent(() => YandexGame.SwitchLanguage(_language));
    }
}
