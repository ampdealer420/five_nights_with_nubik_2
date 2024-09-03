using UnityEngine;
using UnityEngine.SceneManagement;
using NaughtyAttributes;
using UnityEngine.UI;

public class ButtonSceneChanger : MonoBehaviour
{
    [Scene]
    [SerializeField] private string _sceneName;

    [SerializeField] private Button _uiButton;

    private void OnEnable() => _uiButton.AddEvent(ChangeScene);

    private void OnDisable() => _uiButton.RemoveEvent(ChangeScene);

    private void ChangeScene() => SceneManager.LoadScene(_sceneName);
}
