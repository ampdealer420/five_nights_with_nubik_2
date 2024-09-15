using UnityEngine;
using UnityEngine.UI;

public class SoundSlider : MonoBehaviour
{
    [SerializeField] private Slider _volumeSlider;

    private void OnEnable()
    {
        _volumeSlider.onValueChanged.AddListener(SetVolumeValue);
    }

    private void OnDisable()
    {
        _volumeSlider.onValueChanged.RemoveListener(SetVolumeValue);
    }

    private void SetVolumeValue(float value)
    {
        AudioListener.volume = value;
    }
}
