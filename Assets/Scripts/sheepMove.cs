﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepMove : MonoBehaviour {

	float moveSpeed=5;

	// Use this for initialization
	void Start () {
		Destroy (this, 5f);
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate (new Vector3 (-1, 0, 0)*moveSpeed*Time.deltaTime);
	}
}
