using UnityEngine;

public class GameTimeHandler : MonoBehaviour
{
    [SerializeField] private DayTime _dayTime;

    private void OnEnable()
    {
        _dayTime.OnGameEndHourNowEvent += FreezeGame;
    }

    private void OnDisable()
    {
        _dayTime.OnGameEndHourNowEvent -= FreezeGame;
    }

    private void FreezeGame()
    {
        Time.timeScale = 0;
    }

    private void UnfreezeGame()
    {
        Time.timeScale = 1;
    }
}
