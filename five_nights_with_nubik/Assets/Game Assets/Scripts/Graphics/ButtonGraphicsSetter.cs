using UnityEngine;
using UnityEngine.UI;

public class ButtonGraphicsSetter : MonoBehaviour
{
    [SerializeField] private int _graphicsPresetIndex;

    [SerializeField] private Button _graphicsSetButton;

    private void OnEnable()
    {
        _graphicsSetButton.onClick.AddListener(SetGraphics);
    }

    private void OnDisable()
    {
        _graphicsSetButton.onClick.RemoveListener(SetGraphics);
    }

    private void SetGraphics()
    {
        QualitySettings.SetQualityLevel(_graphicsPresetIndex);
    }
}
