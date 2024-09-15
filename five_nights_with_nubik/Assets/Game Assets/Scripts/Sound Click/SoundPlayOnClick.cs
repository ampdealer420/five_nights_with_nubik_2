using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class SoundPlayOnClick : MonoBehaviour
{
    [SerializeField] private AudioSource _clickSound;

    private Button _button;

    private void OnEnable()
    {
        _button.AddEvent(_clickSound.Play);
    }

    private void OnDisable()
    {
        _button.RemoveEvent(_clickSound.Play);
    }

    private void Awake()
    {
        _button = GetComponent<Button>();
    }
}