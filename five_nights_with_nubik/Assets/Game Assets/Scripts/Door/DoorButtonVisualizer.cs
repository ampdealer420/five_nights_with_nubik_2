using DG.Tweening;
using UnityEngine;

public class DoorButtonVisualizer : MonoBehaviour
{
    [SerializeField] private DoorTransformChanger _doorController;
    [SerializeField] private Material _buttonMaterial;

    [SerializeField] private Color32 _inactiveColor;
    [SerializeField] private Color32 _activeColor;

    [SerializeField] private AudioSource _doorSound;

    private void OnEnable()
    {
        _doorController.OnDoorStateChangedEvent += (bool state) => SetActiveColor();
        _doorController.OnDoorStateChangingEvent += SetInactiveColor;
        _doorController.OnDoorStateChangingEvent += PlayDoorSound;
        _doorController.OnDoorWorkStateChangedEvent += SetColorByDoorWorkState;
    }

    private void OnDisable()
    {
        _doorController.OnDoorStateChangedEvent -= (bool state) => SetActiveColor();
        _doorController.OnDoorStateChangingEvent -= SetInactiveColor;
        _doorController.OnDoorStateChangingEvent -= PlayDoorSound;
        _doorController.OnDoorWorkStateChangedEvent -= SetColorByDoorWorkState;
    }

    public void SetInactiveColor()
    {
        _buttonMaterial.DOColor(_inactiveColor, 0.5f);
    }

    private void SetActiveColor()
    {
        _buttonMaterial.DOColor(_activeColor, 0.5f);
    }

    private void SetColorByDoorWorkState(bool workState)
    {
        if (workState == true)
            SetActiveColor();
        else
            SetInactiveColor();
    }

    private void PlayDoorSound()
    {
        _doorSound.Play();
    }
}
