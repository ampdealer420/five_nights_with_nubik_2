using UnityEngine;

public class ScreenManager : MonoBehaviour
{
    [SerializeField] private ScreenSettings[] _screens;

    public void OpenScreen(string screenTag)
    {
        foreach(ScreenSettings screenSettings in _screens)
        {
            if(screenSettings.Tag == screenTag)
            {
                screenSettings.Screen.SetActive(true);
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
}
