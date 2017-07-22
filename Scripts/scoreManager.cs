using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreManager : MonoBehaviour {

	private Text scoreText;
	private int score=0;

	public static scoreManager instance;

	// Use this for initialization
	void Start () {
		instance = this;
		scoreText = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void addToScore(int extraScore){
		score += extraScore;
		updateText ();
	}

	void updateText(){
		string scoreString = "Score: " + score.ToString ();
		scoreText.text = scoreString;
	}
}
