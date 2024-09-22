using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NaughtyAttributes;
using YG;

public class ButtonStartClassicNight : MonoBehaviour
{
    [SerializeField] private Gamestrap _gamestrap;
    [SerializeField] private GameObject _loadingScreen;
    [SerializeField] private Button _button;

    [Scene]
    [SerializeField] private string _gameScene;

    private void OnEnable()
    {
        _button.AddEvent(StartGame);
    }

    private void OnDisable()
    {
        _button.RemoveEvent(StartGame);
    }

    private void StartGame()
    {
        _gamestrap.SetToClassicGame();
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
