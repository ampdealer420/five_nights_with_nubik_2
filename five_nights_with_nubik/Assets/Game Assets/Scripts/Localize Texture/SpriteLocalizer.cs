using UnityEngine;
using UnityEngine.UI;
using YG;

public class SpriteLocalizer : MonoBehaviour
{
    [SerializeField] private Image _image;

    [SerializeField] private Sprite _ruSprite;
    [SerializeField] private Sprite _enSprite;

    private void OnEnable()
    {
        YandexGame.SwitchLangEvent += LocalizeSprite;
    }

    private void OnDisable()
    {
        YandexGame.SwitchLangEvent -= LocalizeSprite;
    }

    private void Start()
    {
        LocalizeSprite(YandexGame.lang);
    }

    void LocalizeSprite(string language)
    {
        if(language == "ru")
            _image.sprite = _ruSprite;
        else
            _image.sprite = _enSprite;
    }
}
