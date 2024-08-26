using UnityEngine;

public class ClickHandler : MonoBehaviour
{
    [SerializeField] private Camera _camera;

    private RaycastHit _hit;
    private Ray _ray;

    private void Update()
    {
        _ray = _camera.ScreenPointToRay(Input.mousePosition);
        if(Physics.Raycast(_ray, out _hit) && Input.GetMouseButtonDown(0))
        {
            if(_hit.collider.TryGetComponent(out IClickable clickable))
                clickable.Click();
        }
    }
}
