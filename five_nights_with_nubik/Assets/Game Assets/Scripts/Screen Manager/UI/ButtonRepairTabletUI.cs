using UnityEngine;
using UnityEngine.UI;
using NaughtyAttributes;

public class ButtonRepairTabletUI : MonoBehaviour
{
    [SerializeField] private bool _isOpenButton;
    [ShowIf("_isOpenButton"), EnableIf("_isOpenButton")]
    [SerializeField] private Button _openButton;

    [SerializeField] private bool _isCloseButton;
    [ShowIf("_isCloseButton"), EnableIf("_isCloseButton")]
    [SerializeField] private Button _closeButton;

    [SerializeField] private ScreenManager _screenManager;
    [SerializeField] private string _repairTabletScreenTag;

    [SerializeField] private float _endYPos;
    [SerializeField] private float _startYPos;

    private void OnEnable()
    {
        if (_isOpenButton)
            _openButton.AddEvent(OpenScreen);
        if (_isCloseButton)
            _closeButton.AddEvent(CloseScreen);
    }

    private void OnDisable()
    {
        if (_isOpenButton)
            _openButton.RemoveEvent(OpenScreen);
        if (_isCloseButton)
            _closeButton.RemoveEvent(CloseScreen);
    }

    private void OpenScreen()
    {
        _screenManager.OpenScreen(_repairTabletScreenTag, true, _endYPos, _startYPos);
    }

    private void CloseScreen()
    {
        _screenManager.CloseScreen(_repairTabletScreenTag);
    }
}
