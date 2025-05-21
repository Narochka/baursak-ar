using UnityEngine;
using System.Collections;
using Zappar;

public class DetachOnceSeen : MonoBehaviour
{
    public ZapparImageTrackingTarget ImageTracker;
    public GameObject TrackedContent;
    public Transform WorldAnchor;

    private bool hasDetached = false;

    void Update()
    {
        if (!hasDetached && ImageTracker.AnchorPoseCameraRelative() != Matrix4x4.zero)
        {
            Debug.Log("🟢 Target detected — starting detach process");
            StartCoroutine(DetachNextFrame());
            hasDetached = true;
        }
    }

    IEnumerator DetachNextFrame()
    {
        // Ждём один кадр
        yield return null;

        // Открепляем объект и отключаем трекер
        TrackedContent.transform.SetParent(WorldAnchor, true);
        ImageTracker.gameObject.SetActive(false);
        Debug.Log("📦 Content detached and tracker deactivated");
    }
}
