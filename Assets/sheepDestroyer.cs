using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepDestroyer : MonoBehaviour {

    void OnTriggerEnter(Collider other)
    {
        if (other.transform) {
            Destroy(other.gameObject, 0.1f);
        }
    }
}
