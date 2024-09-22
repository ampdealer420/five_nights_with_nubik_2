using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class ReactorRepairState : MonoBehaviour
{
    [SerializeField] private float _reactorRepairedStateValue;

    private float _reactorRepairDecreaser = 0.015f;

    private float _maxRepairedStateValue = 1;
    private float _minRepairedStateValue = 0;

    public event Action OnReactorStoppedEvent;
    public event Action<float> OnReactorValueChanged;

    private void Start()
    {
        _reactorRepairedStateValue = 1;
    }

    private void Update()
    {
        _reactorRepairedStateValue = Mathf.Clamp(_reactorRepairedStateValue, _minRepairedStateValue, _maxRepairedStateValue);

        _reactorRepairedStateValue -= _reactorRepairDecreaser * Time.deltaTime;
        OnReactorValueChanged?.Invoke(_reactorRepairedStateValue);

        if(_reactorRepairedStateValue <= 0)
            OnReactorStoppedEvent?.Invoke();
    }

    public void RepairReactor()
    {
        _reactorRepairedStateValue += Random.Range(0.05f, 0.15f);
    }
}
