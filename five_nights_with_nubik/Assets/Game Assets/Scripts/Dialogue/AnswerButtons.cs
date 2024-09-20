using TMPro;
using UnityEngine;
using UnityEngine.UI;
using YG;

namespace DialogueSystem
{
    public class AnswerButtons : MonoBehaviour
    {
        [SerializeField] private Image _nubikImage;
        [SerializeField] private Button[] _buttons;
        private TMP_Text[] _buttonsText;
        private string[] _currentReplyTags;
        private DialogueStory _dialogueStory;
        private DialogueStory.Story _story;

        private string _language;
        
        private void Awake()
        {
            _language = YandexGame.savesData.language;
            _dialogueStory = FindObjectOfType<DialogueStory>();
            _dialogueStory.ChangedStory += ChangeAnswers;
            
            _currentReplyTags = new string[_buttons.Length];
            _buttonsText = new TMP_Text[_buttons.Length];
            
            for (int i = 0; i < _buttons.Length; i++)
            {
                int button = i;
                _buttons[i].onClick.AddListener(() => SendAnswer(button));
                _buttonsText[i] = _buttons[i].gameObject.GetComponentInChildren<TMP_Text>();
            }
        }

        private void ChangeAnswers(DialogueStory.Story story)
        {
            _story = story;
            story.EventStart?.Invoke();
            for(int i = 0; i < _buttonsText.Length; i++)
            {
                if (story.Answers.Length <= i)
                {
                    _buttonsText[i].text = null;
                    _buttons[i].interactable = false;
                    continue;
                }
                if(_language == "ru")
                    _buttonsText[i].text = story.Answers[i].RuText;
                else
                    _buttonsText[i].text = story.Answers[i].EnText;
                _currentReplyTags[i] = story.Answers[i].ReposeText;
                _nubikImage.sprite = story.NubikSprite;
                _buttons[i].interactable = true;
            }
        }

        private void SendAnswer(int button)
        {
            _story.EventEnd?.Invoke();
            _dialogueStory.ChangeStory(_currentReplyTags[button]);
        }
    }
}