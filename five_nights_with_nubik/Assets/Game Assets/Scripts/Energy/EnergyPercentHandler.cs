using System;
using System.Collections;
using UnityEngine;

public class EnergyPercentHandler : MonoBehaviour
{
    private bool _percentIsShowing;

    private float _timeToRepair;

    public event Action<bool> OnEnergyPercentShowStateChanged;
    public event Action OnEnergyPercentShowStateChanging;

    public void Initialize(float timeToRepair)
    {
        _timeToRepair = timeToRepair;
    }

    public void BrokeBatteryText()
    {
        _percentIsShowing = false;
        OnEnergyPercentShowStateChanged?.Invoke(false);
    }

    public IEnumerator RepairBatteryText()
    {
        OnEnergyPercentShowStateChanging?.Invoke();
        yield return new WaitForSeconds(_timeToRepair);
        OnEnergyPercentShowStateChanged?.Invoke(true);
        _percentIsShowing = true;
    }
}
