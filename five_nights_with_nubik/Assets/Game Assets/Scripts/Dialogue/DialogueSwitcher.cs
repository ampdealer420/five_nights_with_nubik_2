using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace DialogueSystem
{
    public class DialogueSwitcher : MonoBehaviour
    {
        [SerializeField] private string[] _disableTags;
        private DialogueStory _dialogueStory;

        private void Start()
        {
            _dialogueStory = FindObjectOfType<DialogueStory>(true);
            _dialogueStory.ChangedStory += Disable;
        }

        private async void Disable(DialogueStory.Story story)
        {
            if (_disableTags.All(disableTag => story.Tag != disableTag)) return;
            StartCoroutine(ExitFromDialogue());
        }

        private void OnTriggerEnter(Collider other)
        {
            _dialogueStory.gameObject.SetActive(true);
        }

        IEnumerator ExitFromDialogue()
        {
            yield return new WaitForSecondsRealtime(1);
            SceneManager.LoadScene("Main Menu");
        }
    }
}