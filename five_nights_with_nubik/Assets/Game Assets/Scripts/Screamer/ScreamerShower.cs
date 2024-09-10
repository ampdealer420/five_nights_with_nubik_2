using System.Collections;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class ScreenScreamerShower : MonoBehaviour
{
    [SerializeField] private ScreenScreamerType[] _screamerTypes;

    public void ShowScreamer(string screamerTag)
    {
        foreach(ScreenScreamerType screamerType in _screamerTypes)
        {
            if(screamerType.ScreamerTag == screamerTag)
            {
                screamerType.GetComponent<Image>().DOFade(screamerType.StartTransparent, 0.5f);
                screamerType.ScreamerSound.Play();
                StartCoroutine(CloseScreamerWithDelay(screamerType.TimeToShow, screamerType));
            }
        }
    }

    IEnumerator CloseScreamerWithDelay(float delay, ScreenScreamerType screamerType)
    {
        yield return new WaitForSeconds(delay);
        screamerType.ScreamerObject.GetComponent<Image>().DOFade(0, 1);
    }
}