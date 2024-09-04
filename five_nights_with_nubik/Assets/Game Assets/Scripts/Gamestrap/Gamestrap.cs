using NaughtyAttributes;
using UnityEngine;
using UnityEngine.SceneManagement;
using YG;

public class Gamestrap : MonoBehaviour
{
    private int _dayOfGame => YandexGame.savesData.DayOfGame;
    private GameDayHandler _gameDayHandler;

    [Scene]
    [SerializeField] private string _gameScene;

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnGameSceneLoaded;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnGameSceneLoaded;
    }

    private void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    private void OnGameSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
    {
        if(scene.name == _gameScene)
        {
            Debug.Log("Scene Changed to: " + scene.name);
            _gameDayHandler = FindAnyObjectByType<GameDayHandler>();
            _gameDayHandler.Initialize(_dayOfGame);
        }
    }
}
