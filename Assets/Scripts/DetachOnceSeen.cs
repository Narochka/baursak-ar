using UnityEngine;
using Zappar;

public class DetachOnceSeen : MonoBehaviour
{
    public ZapparImageTrackingTarget imageTracker;
    public GameObject contentRoot;

    private bool hasDetached = false;

    void Update()
    {
        // Проверяем, есть ли якорь (anchor)
        if (!hasDetached && imageTracker.AnchorPoseCameraRelative() != Matrix4x4.zero)
        {
            // Отсоединяем контент
            contentRoot.transform.SetParent(null, true);

            // Отключаем сам трекер
            imageTracker.gameObject.SetActive(false);

            hasDetached = true;
            Debug.Log("🎉 Контент отсоединён и трекер отключён");
        }
    }
}
