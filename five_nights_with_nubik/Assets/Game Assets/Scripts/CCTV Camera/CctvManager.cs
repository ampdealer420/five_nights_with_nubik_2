using System;
using UnityEngine;

public class CctvManager : MonoBehaviour
{
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private AudioListener _audioListenerPlayerCamera;

    [SerializeField] private Energy _energy;
    [SerializeField] private CctvCamera[] _cameras;

    public event Action<bool> OnCameraWasEnabledEvent;

    private void OnEnable()
    {
        _energy.OnEnergyWasEqualedZero += EnablePlayerCamera;
        _energy.OnEnergyWasEqualedZero += DisableAllCctvCameras;
    }

    private void OnDisable()
    {
        _energy.OnEnergyWasEqualedZero -= EnablePlayerCamera;
        _energy.OnEnergyWasEqualedZero -= DisableAllCctvCameras;
    }

    public void EnableCctvCamera(string cameraTag)
    {
        DisableAllCctvCameras();

        foreach (CctvCamera cctvCamera in _cameras)
        {
            if(cctvCamera.CameraTag == cameraTag)
            {
                _playerCamera.enabled = false;
                _audioListenerPlayerCamera.enabled = false;

                cctvCamera.Camera.enabled = true;
                cctvCamera.CameraAudioListener.enabled = true;
            }
        }
        OnCameraWasEnabledEvent?.Invoke(true);
    }

    public void DisableAllCctvCameras()
    {
        foreach(CctvCamera camera in _cameras)
        {
            camera.Camera.enabled = false;
            camera.CameraAudioListener.enabled = false;
        }
        OnCameraWasEnabledEvent?.Invoke(false);
    }

    public void EnablePlayerCamera()
    {
        _playerCamera.enabled = true;
        _audioListenerPlayerCamera.enabled = true;
    }
}
