using UnityEngine;

public class GameEndByWinVisualizer : MonoBehaviour
{
    [SerializeField] private GameEndHandler _gameEndHandler;

    [SerializeField] private ScreenManager _screenManager;

    private void OnEnable()
    {
        _gameEndHandler.OnGameEndingByWinEvent += EndGame;
    }

    private void OnDisable()
    {
        _gameEndHandler.OnGameEndingByWinEvent -= EndGame;
    }

    private void EndGame()
    {
        _screenManager.OpenScreen("Win Screen");
    }
}
