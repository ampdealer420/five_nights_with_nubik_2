using UnityEngine;

public class TelephoneClipPlayer : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private AudioClip[] _telephoneClips;

    public void Initialize(int dayCount)
    {
        if(_telephoneClips[dayCount - 1] != null)
        {
            _audioSource.clip = _telephoneClips[dayCount - 1];
            _audioSource.Play();
        }
        else
            Debug.Log("That day not contain telephone guy");
    }
}