using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameEndByDeathVisualizer : MonoBehaviour
{
    [SerializeField] private GameEndHandler _gameEndHandler;
    [SerializeField] private ScreenManager _screenManager;

    [SerializeField] private CctvManager _cctvManager;
    [SerializeField] private Camera _deathCamera;
    [SerializeField] private Camera _playerCamera;

    [SerializeField] private AudioSource _deathSound;
    [SerializeField] private AudioClip[] _deathSoundClips;


    private void OnEnable()
    {
        _gameEndHandler.OnGameEndingByDeathEvent += EndGame;
    }

    private void OnDisable()
    {
        _gameEndHandler.OnGameEndingByDeathEvent -= EndGame;
    }

    private void EndGame()
    {
        _cctvManager.DisableAllCctvCameras();
        _playerCamera.enabled = false;
        _deathCamera.enabled = true;

        _deathSound.clip = _deathSoundClips[Random.Range(0, _deathSoundClips.Length)];
        _deathSound.Play();
    }

    IEnumerator OpenLoseScreen()
    {
        yield return new WaitForSecondsRealtime(1.5f);
        _screenManager.OpenScreen("Lose Screen");
    }
}
