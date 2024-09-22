using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using NaughtyAttributes;
using YG;

public class StartCustomNightButton : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private GameObject _loadingScreen;
    [SerializeField] private Gamestrap _gamestrap;
    [Scene]
    [SerializeField] private string _gameScene;
    [SerializeField] private int _dayValue;

    private void OnEnable()
    {
        _button.AddEvent(StartCustomNight);
    }

    private void OnDisable()
    {
        _button.RemoveEvent(StartCustomNight);
    }

    private void StartCustomNight()
    {
        _gamestrap.SetCustomDayParam(_dayValue);
        StartCoroutine(LoadingSceneAsync());
        YandexGame.FullscreenShow();
    }

    IEnumerator LoadingSceneAsync()
    {
        AsyncOperation loadSceneAsync = SceneManager.LoadSceneAsync(_gameScene);
        loadSceneAsync.allowSceneActivation = false;

        _loadingScreen.SetActive(true);

        while (loadSceneAsync.isDone == false)
        {
            if(loadSceneAsync.progress >= 0.9f && loadSceneAsync.allowSceneActivation == false)
            {
                yield return new WaitForSecondsRealtime(1.5f);
                loadSceneAsync.allowSceneActivation = true;
            }           
            yield return null;
        }
        _loadingScreen.SetActive(false);
    }
}
