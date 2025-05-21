using UnityEngine;
using Zappar;

public class DetachOnceVisible : MonoBehaviour
{
    public ZapparImageTrackingTarget tracker;
    public Transform trackedContent;

    private bool hasDetached = false;

    void Update()
    {
        var anchorPose = tracker.AnchorPoseCameraRelative();

        // Проверка: трекер обнаружил изображение
        if (!hasDetached && anchorPose != Matrix4x4.identity)
        {
            // Открепляем контент от трекера
            trackedContent.SetParent(null, true);

            // Отключаем сам трекер, если не нужен
            tracker.enabled = false;
            tracker.gameObject.SetActive(false);

            hasDetached = true;
            Debug.Log("✅ Контент откреплён от трекера и теперь независим");
        }
    }
}
