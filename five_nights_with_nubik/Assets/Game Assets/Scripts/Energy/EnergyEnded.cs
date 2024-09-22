using UnityEngine;

public class EnergyEnded : MonoBehaviour
{
    [SerializeField] private Energy _energy;

    [SerializeField] private ReactorRepairState _reactorRepairState;

    [SerializeField] private LightStateController _lightStateController;
    [SerializeField] private NubikEnemy _nubikEnemy;
    [SerializeField] private ScreenManager _screenManager;
    [SerializeField] private CctvManager _cctvManager;
    [SerializeField] private DoorTransformChanger _doorTransformChanger;
    [SerializeField] private DoorButtonVisualizer _doorButtonVisualizer;

    private void OnEnable()
    {
        _energy.OnEnergyWasEqualedZero += SetObjectToZeroEnrgyState;
        _reactorRepairState.OnReactorStoppedEvent += SetObjectToZeroEnrgyState;
    }

    private void OnDisable()
    {
        _energy.OnEnergyWasEqualedZero -= SetObjectToZeroEnrgyState;
        _reactorRepairState.OnReactorStoppedEvent -= SetObjectToZeroEnrgyState;
    }

    private void SetObjectToZeroEnrgyState()
    {
        _lightStateController.OffLights();
        _nubikEnemy.SetDestinationToPlayer();
        _screenManager.CloseAllScreens();
        _screenManager.CanEnableScreen = false;
        _cctvManager.DisableAllCctvCameras();
        _cctvManager.EnablePlayerCamera();
        _cctvManager.CanEnableCCTVCamera = false;
        _doorTransformChanger.OpenDoor();
        _doorButtonVisualizer.SetInactiveColor();
    }
}
