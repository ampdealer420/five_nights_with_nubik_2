using UnityEngine;
using DG.Tweening;
using System;

public class CameraRotater : MonoBehaviour
{
    [SerializeField] private Transform _camera;

    [SerializeField] private float _leftCameraYRotation;
    [SerializeField] private float _rightCameraYRotation;

    [SerializeField] private float _timeToRotating;

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
            Vector3 vectorToRotate = new Vector3(_startCameraXRotation, _leftCameraYRotation, 0);
            _camera.DORotate(vectorToRotate, _timeToRotating);
            OnCameraLeftRotated?.Invoke();
        }
        if (_camera.eulerAngles.y == _rightCameraYRotation)
        {
            Vector3 vectorToRotate = new Vector3(_startCameraXRotation, _startCameraYRotation, 0);
            _camera.DORotate(vectorToRotate, _timeToRotating);
            OnCameraStandardRotated?.Invoke();
        }
    }

    public void RotateCameraToRight()
    {
        if (_camera.eulerAngles.y == _startCameraYRotation)
        {
            Vector3 vectorToRotate = new Vector3(_startCameraXRotation, _rightCameraYRotation, 0);
            _camera.DORotate(vectorToRotate, _timeToRotating);
            OnCameraRightRotated?.Invoke();
        }
        if(_camera.eulerAngles.y == _leftCameraYRotation)
        {
            Vector3 vectorToRotate = new Vector3(_startCameraXRotation, _startCameraYRotation, 0);
            _camera.DORotate(vectorToRotate, _timeToRotating);
            OnCameraStandardRotated?.Invoke();
        }
    }
}
