using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreManager : MonoBehaviour {

	public Text scoreText;
	public Text multiplierText;

	private int score=0;
	private int multiplier=1;

	public static scoreManager instance;

	// Use this for initialization
	void Start () {
		instance = this;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void resetMultiplier(){
		multiplier = 1;
		updateText ();
	}

	public int getScore(){
		return score;
	}

	public void addToScore(int extraScore){
		score += extraScore*multiplier;
		if (multiplier < 10) {
			multiplier++;
		}
		updateText ();
	}

	void updateText(){
		string scoreString = "Score: " + score.ToString ();
		string multiplierString = "Multiplier: " + multiplier.ToString ();
		scoreText.text = scoreString;
		multiplierText.text = multiplierString;
	}
}
