using DG.Tweening;
using System.Collections;
using UnityEngine;

public class GameEndByDeathVisualizer : MonoBehaviour
{
    [SerializeField] private GameEndHandler _gameEndHandler;
    [SerializeField] private ScreenManager _screenManager;

    [SerializeField] private CctvManager _cctvManager;
    [SerializeField] private Camera _playerCamera;

    [SerializeField] private Camera _deathCamera;
    [SerializeField] private Light _nubikHeadLight;
    [SerializeField] private AudioListener _deathCameraListener;

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
        _screenManager.CloseAllScreens();
        _cctvManager.DisableAllCctvCameras();
        _playerCamera.enabled = false;
        _deathCamera.enabled = true;
        _deathCamera.DOShakePosition(1.5f, 0.0025f, 3, 90, true, ShakeRandomnessMode.Full);
        _nubikHeadLight.enabled = true;
        _deathCameraListener.enabled = true;

        _deathSound.clip = _deathSoundClips[Random.Range(0, _deathSoundClips.Length)];
        _deathSound.Play();
        StartCoroutine(OpenLoseScreen());
    }

    IEnumerator OpenLoseScreen()
    {     
        yield return new WaitForSecondsRealtime(3f);
        _deathSound.Stop();
        Time.timeScale = 0;
        _screenManager.OpenScreen("Lose Screen", true);
    }
}
