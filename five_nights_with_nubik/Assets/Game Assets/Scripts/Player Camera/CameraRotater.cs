using UnityEngine;
using DG.Tweening;
using System;

public class CameraRotater : MonoBehaviour
{
    [SerializeField] private Transform _camera;

    [SerializeField] private float _leftCameraYRotation;
    [SerializeField] private float _rightCameraYRotation;

    private float _startCameraXRotation;
    private float _startCameraYRotation;

    public event Action OnCameraLeftRotated;
    public event Action OnCameraStandardRotated;
    public event Action OnCameraRightRotated;

    private void Awake()
    {
        _startCameraXRotation = _camera.eulerAngles.x;
        _startCameraYRotation = _camera.eulerAngles.y;
    }

    public void RotateCameraToLeft()
    {
        if (_camera.eulerAngles.y == _startCameraYRotation)
        {
            _camera.DORotate(new Vector3(_startCameraXRotation, _leftCameraYRotation, 0), 1f);
            OnCameraLeftRotated?.Invoke();
        }
        if (_camera.eulerAngles.y == _rightCameraYRotation)
        {
            _camera.DORotate(new Vector3(_startCameraXRotation, _startCameraYRotation, 0), 1f);
            OnCameraStandardRotated?.Invoke();
        }
    }

    public void RotateCameraToRight()
    {
        if (_camera.eulerAngles.y == _startCameraYRotation)
        {
            _camera.DORotate(new Vector3(_startCameraXRotation, _rightCameraYRotation, 0), 1f);
            OnCameraRightRotated?.Invoke();
        }
        if(_camera.eulerAngles.y == _leftCameraYRotation)
        {
            _camera.DORotate(new Vector3(_startCameraXRotation, _startCameraYRotation, 0), 1f);
            OnCameraStandardRotated?.Invoke();
        }
    }
}
