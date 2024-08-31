using UnityEngine;

public class NubikSoundPlayer : MonoBehaviour
{
    [SerializeField] private NubikEnemy _nubikEnemy;

    [SerializeField] private AudioSource _nubikAudioSource;
    [SerializeField] private AudioClip[] _stackedFrontDoorSounds;

    private void OnEnable()
    {
        _nubikEnemy.OnNubikStuckedFrontDoorEvent += PlayStuckedFrontDoorSound;
    }

    private void OnDisable()
    {
        _nubikEnemy.OnNubikStuckedFrontDoorEvent -= PlayStuckedFrontDoorSound;
    }

    private void PlayStuckedFrontDoorSound()
    {
        Debug.Log("Sound played");
        _nubikAudioSource.clip = _stackedFrontDoorSounds[Random.Range(0, _stackedFrontDoorSounds.Length)];
        _nubikAudioSource.Play();
    }
}
