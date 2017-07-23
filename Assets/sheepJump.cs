using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepJump : MonoBehaviour {

    // How far the sheep will move
    public float upmove;
    public Transform endPos;

    private float height;
    public float time;
    private float timer;

    // Use this for initialization
    void Start () {
        timer += Time.deltaTime / time;
    }

    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        timer = 0.0f;

        if (other.transform) {
            print(other.transform.tag);
            if (other.transform.tag == "sheep") {
                    height = Mathf.Sin(Mathf.PI) * upmove;
                    //other.GetComponent<Rigidbody>().AddForce(new Vector3(0, upmove, 0), ForceMode.Force);
                    other.GetComponent<Rigidbody>().AddForce( new Vector3(0, upmove, 0), ForceMode.Impulse);

                    
                
            }
        }
    }
}
