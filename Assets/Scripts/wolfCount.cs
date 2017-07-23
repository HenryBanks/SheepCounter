using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wolfCount : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnMouseDown()
    {
        scoreManager.instance.minusToScore(10);
        Destroy(this);
    }
}
