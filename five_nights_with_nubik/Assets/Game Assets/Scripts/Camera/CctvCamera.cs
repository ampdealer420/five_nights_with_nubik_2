using UnityEngine;
using NaughtyAttributes;

public class CctvCamera : MonoBehaviour
{
    public string CameraTag => _cameraTag;
    [SerializeField] private string _cameraTag;

    [ShowNativeProperty]
    public Camera Camera => GetComponent<Camera>();

    [ShowNativeProperty]
    public AudioListener CameraAudioListener => GetComponent<AudioListener>();
}
