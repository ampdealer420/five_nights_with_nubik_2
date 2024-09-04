using System;
using UnityEngine;

public class Energy : MonoBehaviour
{
    public const float MaxEnergyValue = 100;
    public const float MinEnergyValue = 0;
    
    public float EnergyCount { get; private set; }

    [SerializeField] private DoorTransformChanger _doorController;
    [SerializeField] private CctvManager _cctvManager;

    private float _energyDoorDecreaser;
    private float _energyCameraDecreaser;

    private bool _doorIsOpened = true;
    private bool _cameraIsOpened = false;

    private bool _energyIsDowned;

    public event Action<float> OnEnergyValueChanged;
    public event Action OnEnergyWasEqualedZero;

    private void OnEnable()
    {
        _doorController.OnDoorStateChangedEvent += CheckDoorIsClosed;
        _cctvManager.OnCameraWasEnabledEvent += CheckCameraIsOpened;
    }

    private void OnDisable()
    {
        _doorController.OnDoorStateChangedEvent -= CheckDoorIsClosed;
        _cctvManager.OnCameraWasEnabledEvent -= CheckCameraIsOpened;
    }

    private void Start()
    {
        EnergyCount = MaxEnergyValue;
        OnEnergyValueChanged?.Invoke(EnergyCount);
    }

    public void Initialize(float energyDoorDecreaser, float energyCameraDecraser)
    {
        _energyDoorDecreaser = energyDoorDecreaser;
        _energyCameraDecreaser = energyCameraDecraser;
    }

    private void Update()
    {
        if(_doorIsOpened == false)
        {
            DecreaseEnergy(_energyDoorDecreaser);
            OnEnergyValueChanged?.Invoke(EnergyCount);
        }

        if(_cameraIsOpened == true)
        {
            DecreaseEnergy(_energyCameraDecreaser);
            OnEnergyValueChanged?.Invoke(EnergyCount);
        }

        if(EnergyCount <= 0 && _energyIsDowned == false)
        {
            _energyIsDowned = true;
            OnEnergyWasEqualedZero?.Invoke();
        }
    }

    private void DecreaseEnergy(float valueToDecrease)
    {
        if(valueToDecrease >= 0)
        {
            EnergyCount -= valueToDecrease * Time.deltaTime;
            EnergyCount = Mathf.Clamp(EnergyCount, 0, 100);
        }
    }

    public void CheckDoorIsClosed(bool state)
    {
        _doorIsOpened = state;
    }

    public void CheckCameraIsOpened(bool state)
    {
        _cameraIsOpened = state;
    }
}
