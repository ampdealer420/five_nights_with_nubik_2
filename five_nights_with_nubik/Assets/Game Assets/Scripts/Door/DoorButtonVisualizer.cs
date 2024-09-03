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
        _doorController.OnDoorStateChangedEvent += (bool state) => SetActiveColor();
        _doorController.OnDoorStateChangingEvent += SetInactiveColor;
    }

    private void OnDisable()
    {
        _doorController.OnDoorStateChangedEvent -= (bool state) => SetActiveColor();
        _doorController.OnDoorStateChangingEvent -= SetInactiveColor;
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
