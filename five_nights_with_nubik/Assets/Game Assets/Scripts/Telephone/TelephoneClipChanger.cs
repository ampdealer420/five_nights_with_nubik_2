using UnityEngine;
using YG;

public class TelephoneClipChanger : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private AudioClip[] _telephoneClips;

    private void Start()
    {
        _audioSource.clip = _telephoneClips[YandexGame.savesData.DayOfGame];
    }
}
