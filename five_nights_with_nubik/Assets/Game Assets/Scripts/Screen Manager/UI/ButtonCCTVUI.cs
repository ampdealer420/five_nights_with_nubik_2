using UnityEngine;
using UnityEngine.UI;
using NaughtyAttributes;

public class ButtonCCTVUI : MonoBehaviour
{
    [SerializeField] private bool _isOpenButton;
    [ShowIf("_isOpenButton"), EnableIf("_isOpenButton")]
    [SerializeField] private Button _openButton;

    [SerializeField] private bool _isCloseButton;
    [ShowIf("_isCloseButton"), EnableIf("_isCloseButton")]
    [SerializeField] private Button _closeButton;

    [SerializeField] private ScreenManager _screenManager;
    [SerializeField] private CctvManager _cctvManager;
    [SerializeField] private string _cctvScreenTag;

    private void OnEnable()
    {
        if (_isOpenButton)
            _openButton.AddEvent(OpenCCTVScreen);
        if (_isCloseButton)
            _closeButton.AddEvent(CloseCCTVScreen);
    }

    private void OnDisable()
    {
        if (_isOpenButton)
            _openButton.RemoveEvent(OpenCCTVScreen);
        if (_isCloseButton)
            _closeButton.RemoveEvent(CloseCCTVScreen);
    }

    private void OpenCCTVScreen()
    {
        _cctvManager.EnableCctvCamera("1");
        _screenManager.OpenScreen(_cctvScreenTag);
    }

    private void CloseCCTVScreen()
    {
        _cctvManager.DisableAllCctvCameras();
        _cctvManager.EnablePlayerCamera();
        _screenManager.CloseScreen(_cctvScreenTag);
    }
}