using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepJump : MonoBehaviour {

    // How far the sheep will move
    public float upmove;
    

    // Use this for initialization
    void Start () {
		
	}



    private void OnTriggerEnter(Collider other)
    {
        if (other.transform) {
            print(other.transform.tag);
            if (other.transform.tag == "sheep") {
                other.GetComponent<Rigidbody>().AddForce(new Vector3(0, upmove, 0), ForceMode.Impulse);
                
            }
        }
    }
}
