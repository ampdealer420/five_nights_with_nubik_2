using UnityEngine;

public class DoorButton : MonoBehaviour, IClickable
{
    private const float DelayButtonWork = 1.25f;

    [SerializeField] private DoorController _doorController;
    private float _nextButtonWorkTime = 0.0f;
    
    public void Click()
    {
        if(Time.time >= _nextButtonWorkTime)
        {
            _doorController.ChangeDoorState();
            _nextButtonWorkTime = Time.time + DelayButtonWork; 
        }
    }
}
