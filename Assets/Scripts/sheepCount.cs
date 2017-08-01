using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepCount : MonoBehaviour {

    public  AudioClip[] coinClip;
    public  AudioSource source;
    public  float lowPitchRange; //.75F
    public  float highPitchRange; // 1.5F
    private  int soundselecter;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.x <= -10) {
			livesManager.instance.loseLife ();
			Destroy (this);
		}
	}

	void OnMouseDown(){
		scoreManager.instance.addToScore (10);
        CoinSound();
		Destroy (this);
	}

    void Awake()
    {
        source = GetComponent<AudioSource>();
    }

    public  void CoinSound() {
        source.pitch = Random.Range(lowPitchRange, highPitchRange);
        soundselecter = Random.Range(0, coinClip.Length - 1);
        source.PlayOneShot(coinClip[soundselecter]);
    }
}
