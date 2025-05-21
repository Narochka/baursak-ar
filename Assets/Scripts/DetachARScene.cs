using UnityEngine;
using System.Collections;
using Zappar;

public class DetachARScene : MonoBehaviour
{
    public ZapparImageTrackingTarget imageTracker;
    public GameObject contentRoot;
    private bool sceneStarted = false;

    void Update()
    {
        if (!sceneStarted && imageTracker.AnchorPoseCameraRelative() != Matrix4x4.zero)
        {
            StartCoroutine(DetachAndFreeze());
            sceneStarted = true;
        }
    }

    IEnumerator DetachAndFreeze()
    {
        yield return null; // ждём 1 кадр, чтобы Unity успел отрендерить

        // Копируем мировую позицию
        contentRoot.transform.SetParent(null, true);
        imageTracker.gameObject.SetActive(false);

        Debug.Log("✅ Контент отсоединён, трекер выключен");
    }
}
