using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NaughtyAttributes;

public class ButtonStartClassicNight : MonoBehaviour
{
    [SerializeField] private Gamestrap _gamestrap;
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
        SceneManager.LoadScene(_gameScene);
    }
}
