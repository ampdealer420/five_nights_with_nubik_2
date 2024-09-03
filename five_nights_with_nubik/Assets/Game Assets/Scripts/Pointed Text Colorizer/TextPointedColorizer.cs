using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class TextPointedColorizer : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    [SerializeField] private Color _colorToColorize = Color.red;
    
    private TMP_Text _text;
    private Color _startTextColor;
    

    private void Start()
    {
        _text = GetComponent<TMP_Text>();
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        _startTextColor = _text.color;
        _text.color = _colorToColorize;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
         _text.color = _startTextColor;
    }
}