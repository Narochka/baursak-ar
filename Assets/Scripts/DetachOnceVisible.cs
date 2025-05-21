using UnityEngine;
using Zappar;

public class DetachOnceVisible : MonoBehaviour
{
    public ZapparImageTrackingTarget tracker;     // Присвой вручную в инспекторе
    public Transform trackedContent;              // То, что открепляется от трекера

    private bool hasDetached = false;

    void Update()
    {
        if (tracker == null || trackedContent == null)
        {
            Debug.LogWarning("⚠️ tracker или trackedContent не назначены в инспекторе.");
            return;
        }

        // Получаем позу относительно камеры
        var pose = tracker.AnchorPoseCameraRelative();

        // Отладка: печатаем матрицу позы каждый кадр
        Debug.Log("🔁 Tracker pose matrix: " + pose.ToString());

        // Если трекер только что увидел маркер — и мы еще не открепили
        if (!hasDetached && pose != Matrix4x4.identity)
        {
            // Открепляем контент от трекера
            trackedContent.SetParent(null, true);

            // Отключаем сам трекер
            tracker.enabled = false;
            tracker.gameObject.SetActive(false);

            hasDetached = true;

            Debug.Log("✅ Контент откреплён от трекера и теперь независим.");
        }
    }
}
