using System;
using UnityEngine;

public class Energy : MonoBehaviour
{
    private float _energyCount = 100;

    [SerializeField] private DoorController _doorController;
    [SerializeField] private CctvManager _cctvManager;

    private bool _doorIsOpened = true;
    private bool _cameraIsOpened = false;


    public event Action<float> OnEnergyValueChanged;

    private void OnEnable()
    {
        _doorController.OnDoorStateChangedEvent += ChangeDoorState;
        _cctvManager.OnCameraWasEnabledEvent += ChangeCameraState;
    }

    private void OnDisable()
    {
        _doorController.OnDoorStateChangedEvent -= ChangeDoorState;
        _cctvManager.OnCameraWasEnabledEvent -= ChangeCameraState;
    }

    private void Update()
    {
        if(_doorIsOpened == false)
        {
            _energyCount -= 0.25f * Time.deltaTime;
            OnEnergyValueChanged?.Invoke(_energyCount);
        }

        if(_cameraIsOpened == true)
        {
            _energyCount -= 0.125f * Time.deltaTime;
            OnEnergyValueChanged?.Invoke(_energyCount);
        }
    }

    public void ChangeDoorState(bool state)
    {
        _doorIsOpened = state;
    }

    public void ChangeCameraState(bool state)
    {
        _cameraIsOpened = state;
    }
}
