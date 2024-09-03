using UnityEngine;
using YG;

public class Gamestrap : MonoBehaviour
{
    private int _dayOfGame => YandexGame.savesData.DayOfGame;

    [SerializeField] private NubikEnemy _nubikEnemy;

    private void Awake()
    {
        _nubikEnemy.Initialize(_dayOfGame);
    }
}
