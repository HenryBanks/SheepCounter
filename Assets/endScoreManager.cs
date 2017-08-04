using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class endScoreManager : MonoBehaviour {

	public Text scoreText;

	// Use this for initialization
	void Start () {
		string scoreString = "Score: " + PlayerPrefs.GetInt ("score").ToString ();
		scoreText.text = scoreString;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
