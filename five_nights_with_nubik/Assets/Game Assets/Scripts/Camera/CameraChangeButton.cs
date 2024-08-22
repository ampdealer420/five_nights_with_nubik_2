using UnityEngine;
using UnityEngine.UI;
using NaughtyAttributes;

public class CameraChangeButton : MonoBehaviour
{
    [SerializeField] private string _cameraTag;
    [SerializeField] private CctvManager _cctvManager;

    [ShowNativeProperty]
    [SerializeField] private Button _cameraChangeButton => GetComponent<Button>();

    private void OnEnable()
    {
        _cameraChangeButton.onClick.AddListener(ChangeCamera);
    }

    private void OnDisable()
    {
        _cameraChangeButton.onClick.RemoveListener(ChangeCamera);
    }

    private void ChangeCamera()
    {
        _cctvManager.EnableCctvCamera(_cameraTag);
    }
}
