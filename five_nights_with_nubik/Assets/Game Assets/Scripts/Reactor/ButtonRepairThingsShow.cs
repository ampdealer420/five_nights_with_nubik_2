using UnityEngine;
using UnityEngine.UI;

public class ButtonRepairThingsShow : MonoBehaviour
{
    [SerializeField] private Button _button;

    [SerializeField] private GameObject _uiBlockRepair;

    [SerializeField] private bool _isOpenButton;
    [SerializeField] private bool _isCloseButton;

    private void Start()
    {
        _button = GetComponent<Button>();
    }

    private void OnEnable()
    {
        if(_isOpenButton)
            _button.AddEvent(ShowRepairBlock);
        else if(_isCloseButton)
            _button.AddEvent(HideRepairBlock);
    }

    private void OnDisable()
    {
        if(_isOpenButton)
            _button.RemoveEvent(ShowRepairBlock);
        else if(_isCloseButton)
            _button.RemoveEvent(HideRepairBlock);
    }

    private void ShowRepairBlock()
    {
        _uiBlockRepair.SetActive(true);
    }

    private void HideRepairBlock()
    {
        _uiBlockRepair.SetActive(false);
    }
}
