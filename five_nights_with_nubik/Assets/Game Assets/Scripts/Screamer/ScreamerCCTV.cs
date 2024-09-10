using UnityEngine;

public class ScreamerCCTV : MonoBehaviour
{
    [SerializeField] private string _screamerTag;

    [SerializeField] private ScreenScreamerShower _screenScreamerShower;

    [SerializeField] private float _minTimeToShowScreamer;
    [SerializeField] private float _maxTimeToShowScreamer;

    private float _nextTimeToShowScreamer;

    private void Start()
    {
        _nextTimeToShowScreamer += Random.Range(_minTimeToShowScreamer, _maxTimeToShowScreamer);
    }

    private void Update()
    {
        if(Time.time >= _nextTimeToShowScreamer)
        {
            _screenScreamerShower.ShowScreamer(_screamerTag);
            _nextTimeToShowScreamer = Time.time + Random.Range(_minTimeToShowScreamer, _maxTimeToShowScreamer);
        }
    }

    [ContextMenu("ShowScreamer")]
    private void ShowScreamer()
    {
        _screenScreamerShower.ShowScreamer(_screamerTag);
    }
}
