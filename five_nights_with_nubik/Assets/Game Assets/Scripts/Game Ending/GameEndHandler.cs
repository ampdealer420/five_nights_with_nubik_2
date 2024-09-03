using System;
using UnityEngine;
using YG;

public class GameEndHandler : MonoBehaviour
{
    [SerializeField] private DayTime _dayTime;
    [SerializeField] private NubikEnemy _nubikEnemy;

    private bool _playerIsDead = false;

    public event Action OnGameEndingByDeathEvent;
    public event Action OnGameEndingByWinEvent;

    private void OnEnable()
    {
        _dayTime.OnGameEndHourNowEvent += () => EndGame(false);
        _nubikEnemy.OnNubikCaughtPlayerEvent += () => EndGame(true);
    }

    private void OnDisable()
    {
        _dayTime.OnGameEndHourNowEvent -= () => EndGame(false);
        _nubikEnemy.OnNubikCaughtPlayerEvent -= () => EndGame(true);
    }

    private void EndGame(bool gameEndedByDeath)
    {
        if(_playerIsDead == false)
        {
            if(gameEndedByDeath == true)
            {
                OnGameEndingByDeathEvent();
                SaveGameData();
            }

            else
            {            
                OnGameEndingByWinEvent();
                SaveGameData();
            }
            _playerIsDead = true;
        }
    }

    private void SaveGameData()
    {
        YandexGame.SaveProgress();
    }
}
