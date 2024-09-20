using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;

namespace DialogueSystem
{
    public class DialogueStory : MonoBehaviour
    {
        [SerializeField] private Story[] _stories;
        private Dictionary<string, Story> _storiesDictionary;
        public event Action<Story> ChangedStory;

        [Serializable]
        public struct Story
        {
            [field: SerializeField] public string Tag {get; private set;}
            [field: SerializeField] public string RuText {get; private set;}
            [field: SerializeField] public string EnText {get; private set;}
            [field: SerializeField] public Sprite NubikSprite {get; private set;}
            
            [field: SerializeField] public UnityEvent EventStart {get; private set;}
            
            [field: SerializeField] public UnityEvent EventEnd {get; private set;}
            [field: SerializeField] public Answer[] Answers {get; private set;}
        }
        
        [Serializable]
        public struct Answer
        {
            [field: SerializeField] public string RuText {get; private set;}
            [field: SerializeField] public string EnText {get; private set;}
            [field: SerializeField] public string ReposeText {get; private set;}
        }

        private void Start()
        {
            _storiesDictionary = _stories.ToDictionary(key => key.Tag, element => element);
            ChangeStory(_stories[0].Tag);
        }

        public void ChangeStory(string tag)
        {
            ChangedStory?.Invoke(_storiesDictionary[tag]);
        }
    }
}