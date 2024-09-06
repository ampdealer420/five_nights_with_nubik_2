using UnityEngine;

public class LightStateController : MonoBehaviour
{
    [SerializeField] private Light[] _lights;

    public void OffLights()
    {
        foreach(Light light in _lights)
        {
            light.enabled = false;
        }
    }
}
