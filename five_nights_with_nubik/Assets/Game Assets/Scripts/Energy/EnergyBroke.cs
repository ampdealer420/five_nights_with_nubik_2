using UnityEngine;

public class EnergyBroke : MonoBehaviour
{
    private BatteryViewHandler _energyPercentHandler;

    private float _minTimeToBroke;
    private float _maxTimeToBroke;

    private float _nextTimeToBroke;

    public void Initialize(BatteryViewHandler energyPercentHandler, float minTimeToBroke, float maxTimeToBroke)
    {
        _energyPercentHandler = energyPercentHandler;

        _minTimeToBroke = minTimeToBroke;
        _maxTimeToBroke = maxTimeToBroke;

        _nextTimeToBroke = GetTimeToBroke();
    }

    private void Update()
    {
        if(Time.time >= _nextTimeToBroke)
        {
            _energyPercentHandler.HideBatteryVisuals();
            _nextTimeToBroke = Time.time + GetTimeToBroke();
        }
    }

    private float GetTimeToBroke()
    {
        return Random.Range(_minTimeToBroke, _maxTimeToBroke);
    }
}
