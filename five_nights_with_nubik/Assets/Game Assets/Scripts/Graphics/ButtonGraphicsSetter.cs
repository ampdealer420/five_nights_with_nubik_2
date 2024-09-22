using UnityEngine;
using UnityEngine.UI;

public class ButtonGraphicsSetter : MonoBehaviour
{
    [SerializeField] private int _graphicsPresetIndex;

    [SerializeField] private Button _graphicsSetButton;

    private void OnEnable()
    {
        _graphicsSetButton.AddEvent(SetGraphics);
    }

    private void OnDisable()
    {
        _graphicsSetButton.RemoveEvent(SetGraphics);
    }

    private void SetGraphics()
    {
        QualitySettings.SetQualityLevel(_graphicsPresetIndex);
    }
}
