using NaughtyAttributes;
using UnityEngine;
using UnityEngine.SceneManagement;
using YG;

public class Gamestrap : MonoBehaviour
{
    private bool _isCustomNight;
    private int _dayOfGame => YandexGame.savesData.DayOfGame;
    private GameDayHandler _gameDayHandler;

    private int _customNightValue;

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

    public void SetCustomDayParam(int day)
    {
        _customNightValue = day;
        _isCustomNight = true;
    }

    public void SetToClassicGame()
    {
        _isCustomNight = false;
    }

    private void OnGameSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
    {
        if(scene.name == _gameScene)
        {
            Debug.Log("Scene Changed to: " + scene.name);
            _gameDayHandler = FindAnyObjectByType<GameDayHandler>();
            if(_isCustomNight == false)
                _gameDayHandler.Initialize(_dayOfGame);
            else
                _gameDayHandler.Initialize(_customNightValue);
        }
    }
}
