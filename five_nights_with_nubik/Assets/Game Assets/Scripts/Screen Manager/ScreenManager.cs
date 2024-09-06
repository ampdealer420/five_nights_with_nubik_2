using UnityEngine;
using DG.Tweening;
using System.Collections;

public class ScreenManager : MonoBehaviour
{
    public bool CanEnableScreen = true;

    [SerializeField] private ScreenSettings[] _screens; 

    public void OpenScreen(string screenTag, bool applyEaseMove = false, float endYPosition = 0, float startYPosition = 0)
    {
        if(CanEnableScreen == true)
        {
            for (int i = 0; i < _screens.Length; i++)
            {
                if (_screens[i].Tag == screenTag)
                {
                    _screens[i].Screen.SetActive(true);
                    if (applyEaseMove == true)
                    {
                        RectTransform rectTransform = _screens[i].GetComponent<RectTransform>();
                        rectTransform.DOAnchorPosY(endYPosition, 1, true)
                            .SetEase(Ease.InSine)
                            .From(new Vector2(0, startYPosition));
                    }
                }

                else
                {
                    Debug.Log($"{_screens[i].name} не подходит, проверено {i+1} из {_screens.Length} экранов");
                }
            }
        }
    }

    public void OpenScreen(string screenTag, bool ignoreCondition)
    {
        for (int i = 0; i < _screens.Length; i++)
        {
            if (_screens[i].Tag == screenTag)
            {
                _screens[i].Screen.SetActive(true);
            }

            else
            {
                Debug.Log($"{_screens[i].name} не подходит, проверено {i + 1} из {_screens.Length} экранов");
            }
        }
    }

    public void CloseScreen(string screenTag)
    {
        foreach (ScreenSettings screenSettings in _screens)
        {
            if (screenSettings.Tag == screenTag)
            {                               
                screenSettings.Screen.SetActive(false);
            }
        }
    }

    public void CloseAllScreens()
    {
        foreach(ScreenSettings screenSettings in _screens)
            screenSettings.Screen.SetActive(false);
    }

    public IEnumerator CloseScreenAfterSec(string screenTag, float sec)
    {
        yield return new WaitForSecondsRealtime(sec);
        foreach (ScreenSettings screenSettings in _screens)
        {
            if (screenSettings.Tag == screenTag)
            {
                screenSettings.Screen.SetActive(false);
            }
        }
    }
}
