using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wolfCount : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (transform.position.x <= -10)
        {
            livesManager.instance.loseLife();
            Destroy(this);
        }
    }

    void OnMouseDown()
    {
        if () {
            this.GetComponent<Rigidbody>().AddForce(new Vector3(0.00001f, 0, 0), ForceMode.Impulse);
            scoreManager.instance.minusToScore(50);
            Destroy(this);
        }
    }
}
