using UnityEngine;
using UnityEngine.UI;

public class CameraRotateButton : MonoBehaviour 
{
    [SerializeField] private CameraRotater _cameraRotater;
    [SerializeField] private Button _leftButtonRotate, _rightButtonRotate;

    private void OnEnable()
    {
        _leftButtonRotate.onClick.AddListener(_cameraRotater.RotateCameraToLeft);
        _rightButtonRotate.onClick.AddListener(_cameraRotater.RotateCameraToRight);
    }

    private void OnDisable()
    {
        _leftButtonRotate.onClick.RemoveListener(_cameraRotater.RotateCameraToLeft);
        _rightButtonRotate.onClick.RemoveListener(_cameraRotater.RotateCameraToRight);
    }
}
