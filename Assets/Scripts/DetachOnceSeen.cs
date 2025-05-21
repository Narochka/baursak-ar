using UnityEngine;
using Zappar;

public class DetachOnceSeen : MonoBehaviour
{
    public ZapparImageTrackingTarget imageTracker;  // перетащи свой трекер
    public GameObject trackedContent;              // AR-сцена в трекере
    public Transform worldAnchor;                  // пустой якорь вне трекера

    private bool hasCopied = false;

    void Start()
    {
        imageTracker.OnSeenEvent.AddListener(CopyAndDetach);
    }

    void CopyAndDetach()
    {
        if (hasCopied) return;

        // Клонируем контент
        GameObject clone = Instantiate(trackedContent, trackedContent.transform.position, trackedContent.transform.rotation);
        clone.transform.SetParent(worldAnchor, true);

        // Отключаем оригинал
        trackedContent.SetActive(false);

        hasCopied = true;
    }
}
