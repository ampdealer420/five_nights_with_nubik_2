using UnityEngine;

public class ScreenSettings : MonoBehaviour
{
    public string Tag => _tag;
    [SerializeField] private string _tag;

    public GameObject Screen => _screen;
    [SerializeField] private GameObject _screen;
}
