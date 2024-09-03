using System;
using System.Collections;
using UnityEngine;
using YG;

public class DayTime : MonoBehaviour
{
    public const int EndGameHour = 6;

    [SerializeField] private int _secInOneHour;

    private int _secondsPassed;
    private int _hoursPassed;

    private int _timerRepeatEveryTime => Mathf.RoundToInt(1 * Time.deltaTime);

    public event Action<int> OnHourChangedEvent;
    public event Action OnGameEndHourNowEvent;

    private void Start()
    {
        OnHourChangedEvent?.Invoke(_hoursPassed);
        InvokeRepeating("IncrementGameTime", 0, 1);
    }

    private void Update()
    {
        if(IsNewHour())
        {
            _hoursPassed = _secondsPassed / _secInOneHour;
            OnHourChangedEvent?.Invoke(_hoursPassed);
            if(_hoursPassed == EndGameHour)
            {
                YandexGame.savesData.DayOfGame += Mathf.RoundToInt(1 * Time.deltaTime);
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
