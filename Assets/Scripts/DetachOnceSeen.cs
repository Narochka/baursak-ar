using UnityEngine;
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
            Debug.Log("🟢 Target detected — detaching and deactivating tracker");

            // Открепляем контент от трекера
            TrackedContent.transform.SetParent(WorldAnchor, true);

            // Деактивируем сам трекер, чтобы он больше не прятал объекты
            ImageTracker.gameObject.SetActive(false);

            hasDetached = true;
        }
    }
}
