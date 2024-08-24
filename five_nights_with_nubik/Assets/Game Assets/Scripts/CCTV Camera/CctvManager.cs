using UnityEngine;

public class CctvManager : MonoBehaviour
{
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private AudioListener _audioListenerPlayerCamera;

    [SerializeField] private CctvCamera[] _cameras;

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
    }

    public void DisableAllCctvCameras()
    {
        foreach(CctvCamera camera in _cameras)
        {
            camera.Camera.enabled = false;
            camera.CameraAudioListener.enabled = false;
        }
    }

    public void EnablePlayerCamera()
    {
        _playerCamera.enabled = true;
        _audioListenerPlayerCamera.enabled = true;
    }
}
