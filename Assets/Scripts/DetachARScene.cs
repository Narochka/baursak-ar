using UnityEngine;
using Zappar;

public class DetachARScene : MonoBehaviour
{
    public ZapparImageTrackingTarget tracker;
    public GameObject trackedContent;

    private bool detached = false;

    void Update()
    {
        if (!detached && tracker.AnchorPoseCameraRelative() != Matrix4x4.zero)
        {
            trackedContent.transform.SetParent(null, true);
            tracker.gameObject.SetActive(false); // Можно отключить трекер
            detached = true;

            Debug.Log("🎯 Контент зафиксирован в мире");
        }
    }
}
