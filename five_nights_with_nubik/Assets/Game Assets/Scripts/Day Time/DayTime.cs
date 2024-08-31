using System;
using System.Collections;
using UnityEngine;

public class DayTime : MonoBehaviour
{
    [SerializeField] private int _secInOneHour;

    private int _secondsPassed;
    private int _hoursPassed;

    private int _timerRepeatEveryTime => Mathf.RoundToInt(1 * Time.deltaTime);

    public event Action<int> OnHourChangedEvent;

    private void Start()
    {
        OnHourChangedEvent?.Invoke(_hoursPassed);
        StartCoroutine(IncrementGameTime());
    }

    private void Update()
    {
        if(IsNewHour())
        {
            _hoursPassed = _secondsPassed / _secInOneHour;
            OnHourChangedEvent?.Invoke(_hoursPassed);
        }
    }

    private bool IsNewHour()
    {
        return _secondsPassed % _secInOneHour == 0;
    }

    IEnumerator IncrementGameTime()
    {
        _secondsPassed++;
        yield return new WaitForSeconds(_timerRepeatEveryTime);
    }
}
