using DG.Tweening;
using UnityEngine;

public class DoorButtonVisualizer : MonoBehaviour
{
    [SerializeField] private DoorController _doorController;
    [SerializeField] private Material _buttonMaterial;

    [SerializeField] private Color32 _inactiveColor;
    [SerializeField] private Color32 _activeColor;

    private void OnEnable()
    {
        _doorController.DoorStateChanged += SetActiveColor;
        _doorController.DoorStateChanging += SetInactiveColor;
    }

    private void OnDisable()
    {
        _doorController.DoorStateChanged -= SetActiveColor;
        _doorController.DoorStateChanging -= SetInactiveColor;
    }

    private void SetInactiveColor()
    {
        _buttonMaterial.DOColor(_inactiveColor, 0.5f);
    }

    private void SetActiveColor()
    {
        _buttonMaterial.DOColor(_activeColor, 0.5f);
    }
}
