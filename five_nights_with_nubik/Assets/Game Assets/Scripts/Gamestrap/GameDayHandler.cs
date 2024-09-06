using System;
using UnityEngine;

public class GameDayHandler : MonoBehaviour
{
    [SerializeField] private NubikEnemy _nubikEnemy;
    [SerializeField] private Energy _energy;
    [SerializeField] private ScreenManager _screenManager;

    [SerializeField] private GameDayData[] _gameDayDatas;

    public void Initialize(int dayTime)
    {
        switch (dayTime)
        {
            case 1:
                SetDayData(1);
                break;
            case 2:
                SetDayData(2);
                break;
            case 3:
                SetDayData(3);
                break;
            case 4:
                SetDayData(4);
                break;
            case 5:
                SetDayData(5);
                break;
            case 6:
                SetDayData(6);
                break;
        }
    }

    private void SetDayData(int dayCount)
    {
        GameDayData dayData = _gameDayDatas[dayCount - 1];
        if(dayData.NewspaperTagScreen != null)
            OpenNewspaper(dayData.NewspaperTagScreen, dayData.TimeForNewspaperShow);

        _nubikEnemy.Initialize(dayData.NubikSpeed);
        _energy.Initialize(dayData.EnergyDoorDecreaser, dayData.EnergyCameraDecreaser);
    }

    private void OpenNewspaper(string newsPaperTag, float timeForShowNewspaper)
    {
        Time.timeScale = 0;
        _screenManager.OpenScreen(newsPaperTag, false);
        StartCoroutine(_screenManager.CloseScreenAfterSec(newsPaperTag, timeForShowNewspaper));
        Time.timeScale = 1;
    }

}
