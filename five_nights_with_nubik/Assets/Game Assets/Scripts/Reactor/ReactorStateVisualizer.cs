using UnityEngine;
using UnityEngine.UI;

public class ReactorStateVisualizer : MonoBehaviour
{
    [SerializeField] private ReactorRepairState _reactorRepairState;
    [SerializeField] private Image _circleOfRepairAmount;

    private void OnEnable()
    {
        _reactorRepairState.OnReactorValueChanged += UpdateUI;
    }

    private void OnDisable()
    {
        _reactorRepairState.OnReactorValueChanged -= UpdateUI;
    }

    private void UpdateUI(float value)
    {
        _circleOfRepairAmount.fillAmount = value;
    }
}
