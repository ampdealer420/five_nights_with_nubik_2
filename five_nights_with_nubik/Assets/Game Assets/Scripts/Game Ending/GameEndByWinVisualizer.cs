using UnityEngine;

public class GameEndByWinVisualizer : MonoBehaviour
{
    [SerializeField] private GameEndHandler _gameEndHandler;

    [SerializeField] private ScreenManager _screenManager;

    [SerializeField] private AudioSource _winSound;

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
        _winSound.Play();
    }
}
