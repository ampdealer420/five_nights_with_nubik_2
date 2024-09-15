using NaughtyAttributes;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartCustomNightButton : MonoBehaviour
{
    [SerializeField] private Button _button;
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
        SceneManager.LoadScene(_gameScene);
    }
}
