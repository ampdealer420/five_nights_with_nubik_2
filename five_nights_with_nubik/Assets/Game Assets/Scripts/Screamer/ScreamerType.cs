using UnityEngine;

public class ScreenScreamerType : MonoBehaviour
{
    public string ScreamerTag => _screamerTag;

    public GameObject ScreamerObject => _screamer;

    public float TimeToShow => _timeToShow;

    public AudioSource ScreamerSound => _screamerSound;

    public float StartTransparent => _startTransparent;

    [SerializeField] private string _screamerTag;

    [SerializeField] private GameObject _screamer;

    [SerializeField] private AudioSource _screamerSound;
    
    [SerializeField] private float _timeToShow;

    [SerializeField] private float _startTransparent;
}
