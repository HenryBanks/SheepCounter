using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class livesManager : MonoBehaviour {

	public int maxLives=3;
	public static int currentLives;
	public Text livesText;

	public static livesManager instance;

	// Use this for initialization
	void Start () {
		currentLives = maxLives;
		instance = this;
		updateText ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void loseLife(){
		currentLives--;
		HeartSystem.instance.CheckHealth();
		if (currentLives <= 0) {
			Debug.Log ("Game Over");
			SceneManager.LoadScene("Scenes/GameOver");
		}
		updateText ();
	}

	void updateText(){
		string livesString = "Lives: " + currentLives.ToString ();
		livesText.text = livesString;
	}

}
