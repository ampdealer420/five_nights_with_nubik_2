using System;
using UnityEngine;

public class DayTime : MonoBehaviour
{
    public const int EndGameHour = 6;

    [SerializeField] private int _secInOneHour;

    private int _secondsPassed;
    private int _hoursPassed;

    private int _timerRepeatEveryTime = 1;

    public event Action<int> OnHourChangedEvent;
    public event Action OnGameEndHourNowEvent;

    private void Start()
    {
        OnHourChangedEvent?.Invoke(_hoursPassed);
        InvokeRepeating("IncrementGameTime", 0, _timerRepeatEveryTime);
    }

    private void Update()
    {
        if(IsNewHour())
        {
            _hoursPassed = _secondsPassed / _secInOneHour;
            OnHourChangedEvent?.Invoke(_hoursPassed);
            if(_hoursPassed == EndGameHour)
            {
                OnGameEndHourNowEvent?.Invoke();
            }
        }
    }

    private bool IsNewHour()
    {
        return _secondsPassed % _secInOneHour == 0;
    }

    private void IncrementGameTime()
    {
        _secondsPassed++;
    }
}
