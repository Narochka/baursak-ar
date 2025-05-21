using UnityEngine;
using Zappar;

public class DetachOnceVisible : MonoBehaviour
{
    public ZapparImageTrackingTarget tracker;
    public Transform trackedContent;

    private bool hasDetached = false;

    void Update()
    {
        if (tracker == null || trackedContent == null) return;

        var pose = tracker.AnchorPoseCameraRelative();

        Debug.Log("🔁 Tracker pose matrix:\n" + pose);

        if (!hasDetached && pose != Matrix4x4.identity)
        {
            // Открепляем от трекера
            trackedContent.SetParent(null, true);

            // Только отключаем компонент — НЕ весь объект!
            tracker.enabled = false;

            hasDetached = true;

            Debug.Log("✅ Контент откреплён от трекера и теперь независим");
        }
    }
}
