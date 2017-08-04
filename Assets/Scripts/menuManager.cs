using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class menuManager : MonoBehaviour {



	// Use this for initialization
	void Start () {
		
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
