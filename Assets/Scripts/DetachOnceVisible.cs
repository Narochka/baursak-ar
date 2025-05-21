using UnityEngine;
using Zappar;

public class DetachOnceVisible : MonoBehaviour
{
    public ZapparImageTrackingTarget tracker;
    public Transform trackedContent;

    private bool hasDetached = false;

    void Update()
    {
        if (!hasDetached && tracker.AnchorPoseCameraRelative() != Matrix4x4.identity)
        {
            trackedContent.SetParent(null, true);
            tracker.enabled = false;
            tracker.gameObject.SetActive(false);
            hasDetached = true;

            Debug.Log("✅ Откреплено от трекера");
        }
    }
}
