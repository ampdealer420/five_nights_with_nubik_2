using System;
using TMPro;
using UnityEngine;
using YG;

namespace DialogueSystem
{
    public class DialogueWindow : MonoBehaviour
    {
        private TMP_Text _text;
        private DialogueStory _dialogueStory;
        private string _language;

        private void Awake()
        {
            _language = YandexGame.lang;
            _text = GetComponent<TMP_Text>();
            _dialogueStory = FindObjectOfType<DialogueStory>();
            _dialogueStory.ChangedStory += ChangeAnswers;
        }

        private void ChangeAnswers(DialogueStory.Story story)
        {
            if(_language == "ru")
                _text.text = story.RuText;
            else
                _text.text = story.EnText;
        }
    }
}