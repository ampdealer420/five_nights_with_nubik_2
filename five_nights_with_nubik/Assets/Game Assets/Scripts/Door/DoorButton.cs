using UnityEngine;

public class DoorButton : MonoBehaviour, IClickable
{
    private const float DelayButtonWork = 1.25f;

    [SerializeField] private DoorTransformChanger _doorController;
    [SerializeField] private Energy _energy;
    private float _nextButtonWorkTime = 0.0f;
    
    public void Click()
    {
        if(Time.time >= _nextButtonWorkTime && _doorController.DoorIsWorked == true && _energy.EnergyCount > 0)
        {
            _doorController.ChangeDoorTransform();
            _nextButtonWorkTime = Time.time + DelayButtonWork; 
        }
    }
}
