using UnityEngine;

public class ButtonCCTV : MonoBehaviour
{
    [SerializeField] private CameraRotater _cameraRotater;
    [SerializeField] private GameObject _cctvButton;

    private void OnEnable()
    {
        _cameraRotater.OnCameraStandardRotated += ShowButton;
        _cameraRotater.OnCameraLeftRotated += HideButton;
        _cameraRotater.OnCameraRightRotated += HideButton;
    }

    private void OnDisable()
    {
        _cameraRotater.OnCameraStandardRotated -= ShowButton;
        _cameraRotater.OnCameraLeftRotated -= HideButton;
        _cameraRotater.OnCameraRightRotated -= HideButton;
    }

    private void ShowButton()
    {
        _cctvButton.SetActive(true);
    }

    private void HideButton()
    {
        _cctvButton?.SetActive(false);
    }
}
