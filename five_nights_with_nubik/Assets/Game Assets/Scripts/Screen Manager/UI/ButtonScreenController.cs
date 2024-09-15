using UnityEngine;
using NaughtyAttributes;
using UnityEngine.UI;

public class ButtonScreenChanger : MonoBehaviour
{
    [SerializeField] private ScreenManager _screenManager;
    [SerializeField] private string _screenTag;

    [SerializeField] private Button _button;

    [SerializeField] private bool _isCloseButton;
    [SerializeField] private bool _isOpenButton;

    private void OnEnable()
    {
        if(_isCloseButton == true)
            _button.AddEvent(CloseScreen);
        else if(_isOpenButton == true)
            _button.AddEvent(OpenScreen);
    }


    private void OnDisable()
    {
        if(_isCloseButton == true)
            _button.RemoveEvent(CloseScreen);
        else if(_isOpenButton == true)
            _button.RemoveEvent(OpenScreen);
    }

    private void OpenScreen()
    {
        _screenManager.CloseAllScreens();
        _screenManager.OpenScreen(_screenTag, true);
    }

    private void CloseScreen()
    {
        _screenManager.CloseScreen(_screenTag);
    }
}
