using UnityEngine;
using System.Collections;

public class SpeedScript : MonoBehaviour
{
    public Animation anim;

    void Start()
    {

        // Walk at double speed
        anim["butterflyYellow4"].speed = 3.0f;
    }
}