using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreManager : MonoBehaviour {

	
	private int score=0;
    public Text scoreText;
 	public Text multiplierText;

    private int multiplier = 1;
	public static scoreManager instance;

   
    // Use this for initialization
    void Start () {
		instance = this;
		//scoreText = GetComponent<Text> ();
        
    }

    // Update is called once per frame
    void Update() {
        if (scoreText == null) {
            print("NULL");
        }

        //scoreText = GetComponent<Text>();
    }

    public void resetMultiplier()
    {
        multiplier = 1;
        updateText();
          }
 
 	public int getScore()
    {
              return score;
          }

    public void addToScore(int extraScore){
		score += extraScore * multiplier;
		updateText ();
              if (multiplier < 10)
        {
            multiplier++;
                  }
    }

    public void minusToScore(int scoreToLose)
    {
	score -= scoreToLose;
	multiplier = 1;
        updateText();
    }

    void updateText(){
        string scoreString = "Score: " + score.ToString ();
        scoreText.text = scoreString;
        string multiplierString = "Multiplier: " + multiplier.ToString();
        multiplierText.text = multiplierString;
	}
}
