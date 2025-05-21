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
        // Вызов метода AnchorPoseCameraRelative()
        if (!hasDetached && ImageTracker.AnchorPoseCameraRelative() != Matrix4x4.zero)
        {
            Debug.Log("🟢 Target detected — detaching content.");
            TrackedContent.transform.SetParent(WorldAnchor, true);
            hasDetached = true;
        }
    }
}
