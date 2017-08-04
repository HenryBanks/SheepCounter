using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class menuManager : MonoBehaviour {

	public Text scoreText;

	// Use this for initialization
	void Start () {
		string scoreString = "Score: " + PlayerPrefs.GetInt ("score").ToString ();
		scoreText.text = scoreString;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeSceneToGame(){
		SceneManager.LoadScene ("testScene");
	}

    public void Retry() {
        SceneManager.LoadScene("testScene");
    }

    public void Quit()
    {
        Application.Quit();
    }
}
