using System.Collections;
using UnityEngine;

public class GameDayHandler : MonoBehaviour
{
    public int DayOfGame {get; private set;}

    [SerializeField] private NubikEnemy _nubikEnemy;

    [SerializeField] private Energy _energy;
    [SerializeField] private BatteryViewHandler _energyPercentHandler;
    [SerializeField] private EnergyBroke _energyBroke;
    [SerializeField] private DoorWorkStateController _doorWorkStateController;
    [SerializeField] private ScreenManager _screenManager;
    [SerializeField] private TelephoneClipPlayer _telephoneClipPlayer;

    [SerializeField] private GameDayData[] _gameDayDatas;

    public void Initialize(int dayTime)
    {
        SetDayData(dayTime);
    }

    private void SetDayData(int dayCount)
    {
        DayOfGame = dayCount;
        GameDayData dayData = _gameDayDatas[dayCount - 1];
        if(dayData.NewspaperTagScreen != null)
            OpenNewspaper(dayData.NewspaperTagScreen, dayData.TimeForNewspaperShow);

        _energyPercentHandler.Initialize(dayData.TimeToRepairEnergyBatteryText);
        _energy.Initialize(dayData.EnergyDoorDecreaser, dayData.EnergyCameraDecreaser);
        _energyBroke.Initialize(
            _energyPercentHandler, 
            dayData.MinTimeToBrokeBattery, 
            dayData.MaxTimeToBrokeBattery
        );
        
        _nubikEnemy.Initialize(dayData.NubikSpeed);
        _doorWorkStateController.Initialize(dayData.TimeToRepairDoorButton, dayData.MinTimeToBrokeDoor, dayData.MaxTimeToBrokeDoor);

        _telephoneClipPlayer.Initialize(dayCount);
    }

    private void OpenNewspaper(string newsPaperTag, float timeForShowNewspaper)
    {
        Time.timeScale = 0;
        _screenManager.OpenScreen(newsPaperTag, false);
        StartCoroutine(_screenManager.CloseScreenAfterSec(newsPaperTag, timeForShowNewspaper));
        StartCoroutine(ReturnTimeScaleInNormal(timeForShowNewspaper));
    }

    IEnumerator ReturnTimeScaleInNormal(float secAfterReturn)
    {
        yield return new WaitForSecondsRealtime(secAfterReturn);
        Time.timeScale = 1;
    }
}
