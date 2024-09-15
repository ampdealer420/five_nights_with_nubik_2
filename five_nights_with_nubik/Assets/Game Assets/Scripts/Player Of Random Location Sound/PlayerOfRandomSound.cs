using NaughtyAttributes;
using UnityEngine;
using UnityEngine.Internal;

public class PlayerOfRandomSound : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private AudioClip[] _sounds;

    [SerializeField] private int _minDelayBetweenSoundPlayed;
    [SerializeField] private int _maxDelayBetweenSoundPlayed;

    private float _playSoundNextTime;

    private void Start()
    {
        _playSoundNextTime += Random.Range(_minDelayBetweenSoundPlayed, _maxDelayBetweenSoundPlayed);
    }

    private void Update()
    {
        if(Time.time >= _playSoundNextTime)
        {
            SetRandomSound();
            _audioSource.Play();

            _playSoundNextTime = Time.time + Random.Range(_minDelayBetweenSoundPlayed, _maxDelayBetweenSoundPlayed);
        }
    }

    private void SetRandomSound()
    {
        AudioClip randomedClip = _sounds[Random.Range(0, _sounds.Length)];
        while (randomedClip != _audioSource.clip)
            _audioSource.clip = randomedClip;
    }
}
