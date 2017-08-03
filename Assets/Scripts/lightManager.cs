using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lightManager : MonoBehaviour {

	private Light thisLight;

	private float duration=1f;
    Renderer rend;
    public Transform background;
    Color colour;
    // Use this for initialization
    void Start () {
		thisLight = GetComponent<Light> ();
        colour = background.GetComponent<SpriteRenderer>().color;
        
    }
	
	// Update is called once per frame
	void Update () {
		if (scoreManager.instance.getScore()>500) {
			float t = Mathf.PingPong (Time.time, duration) / duration;
			thisLight.color = Color.Lerp (Color.white, Color.red, t);
            background.GetComponent<SpriteRenderer>().color = thisLight.color;
		} else if(scoreManager.instance.getScore() <= 500){
			thisLight.color = Color.white;
            background.GetComponent<SpriteRenderer>().color = colour;
        }
	}
}
