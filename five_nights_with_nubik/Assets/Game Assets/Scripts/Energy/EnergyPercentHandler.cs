using System;
using System.Collections;
using UnityEngine;

public class BatteryViewHandler : MonoBehaviour
{
    private bool _batteryVisualsIsShowing;

    private float _timeToRepair;

    public event Action<bool> OnBatteryPercentShowStateChanged;
    public event Action OnBatteryPercentShowStateChanging;

    public void Initialize(float timeToRepair)
    {
        _timeToRepair = timeToRepair;
    }

    public void HideBatteryVisuals()
    {
        _batteryVisualsIsShowing = false;
        OnBatteryPercentShowStateChanged?.Invoke(_batteryVisualsIsShowing);
    }

    public IEnumerator RepairBatteryVisuals()
    {
        OnBatteryPercentShowStateChanging?.Invoke();
        yield return new WaitForSeconds(_timeToRepair);
        _batteryVisualsIsShowing = true;
        OnBatteryPercentShowStateChanged?.Invoke(_batteryVisualsIsShowing);
    }
}
