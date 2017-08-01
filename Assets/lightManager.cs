using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lightManager : MonoBehaviour {

	private Light thisLight;

	private float duration=1f;

	// Use this for initialization
	void Start () {
		thisLight = GetComponent<Light> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (scoreManager.multiplier>5) {
			float t = Mathf.PingPong (Time.time, duration) / duration;
			thisLight.color = Color.Lerp (Color.white, Color.red, t);
		} else {
			thisLight.color = Color.white;
		}
	}
}
