using UnityEngine;
using Zappar;

public class AnchorARContent : MonoBehaviour
{
    public ZapparImageTrackingTarget imageTracker;

    private bool hasAnchored = false;

    void Start()
    {
        imageTracker.OnSeenEvent.AddListener(HandleSeen);
    }

    void HandleSeen()
    {
        if (!hasAnchored)
        {
            transform.SetParent(null, true);
            hasAnchored = true;
        }
    }
}
