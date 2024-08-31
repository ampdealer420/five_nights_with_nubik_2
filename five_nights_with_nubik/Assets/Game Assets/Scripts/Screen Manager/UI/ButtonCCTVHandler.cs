using UnityEngine;
public class ButtonCCTVHandler : MonoBehaviour
{
    [SerializeField] private CameraRotater _cameraRotater;
    [SerializeField] private GameObject[] _buttonOnStandardSide;
    [SerializeField] private GameObject[] _buttonOnLeftSide;
    [SerializeField] private GameObject[] _buttonOnRightSide;

    private void OnEnable()
    {
        _cameraRotater.OnCameraStandardRotated += () => ShowButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraLeftRotated += () => ShowButton(_buttonOnLeftSide);
        _cameraRotater.OnCameraRightRotated += () => ShowButton(_buttonOnRightSide);

        _cameraRotater.OnCameraStandardRotated += () => HideButton(_buttonOnLeftSide);
        _cameraRotater.OnCameraStandardRotated += () => HideButton(_buttonOnRightSide);

        _cameraRotater.OnCameraLeftRotated += () => HideButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraLeftRotated += () => HideButton(_buttonOnRightSide);

        _cameraRotater.OnCameraRightRotated += () => HideButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraRightRotated += () => HideButton(_buttonOnLeftSide);
    }

    private void OnDisable()
    {
        _cameraRotater.OnCameraStandardRotated -= () => ShowButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraLeftRotated -= () => ShowButton(_buttonOnLeftSide);
        _cameraRotater.OnCameraRightRotated -= () => ShowButton(_buttonOnRightSide);

        _cameraRotater.OnCameraStandardRotated -= () => HideButton(_buttonOnLeftSide);
        _cameraRotater.OnCameraStandardRotated -= () => HideButton(_buttonOnRightSide);

        _cameraRotater.OnCameraLeftRotated -= () => HideButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraLeftRotated -= () => HideButton(_buttonOnRightSide);

        _cameraRotater.OnCameraRightRotated -= () => HideButton(_buttonOnStandardSide);
        _cameraRotater.OnCameraRightRotated -= () => HideButton(_buttonOnLeftSide);
    }

    private void ShowButton(GameObject[] buttons)
    {
        foreach (GameObject button in buttons)
        {
            button.SetActive(true);
        }
    }

    private void HideButton(GameObject[] buttons)
    {
        foreach (GameObject button in buttons)
        {
            button.SetActive(false);
        }
    }
}
