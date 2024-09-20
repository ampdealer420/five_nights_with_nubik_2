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
        Time.timeScale = 1;
    }

}
