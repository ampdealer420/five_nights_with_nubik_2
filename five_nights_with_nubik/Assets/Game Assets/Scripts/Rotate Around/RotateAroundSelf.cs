using DG.Tweening;
using UnityEngine;

public class RotateAroundSelf : MonoBehaviour
{
    private void Start()
    {
        transform.DORotate(new Vector3(360f, 360f, 360f), 8.0f, RotateMode.FastBeyond360)
            .SetLoops(-1 , LoopType.Restart)
            .SetRelative()
            .SetEase(Ease.Linear);
    }
}
