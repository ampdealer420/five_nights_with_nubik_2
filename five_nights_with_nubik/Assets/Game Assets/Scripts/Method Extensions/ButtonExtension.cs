using UnityEngine.Events;
using UnityEngine.UI;

public static class ButtonExtension
{
    public static void AddEvent(this Button button, UnityAction action)
        => button.onClick.AddListener(action);

    public static void RemoveEvent(this Button button, UnityAction action)
        => button.onClick.RemoveListener(action);

    public static void RemoveAllEvents(this Button button, UnityAction action)
        => button.onClick.RemoveAllListeners();
}
