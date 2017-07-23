using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepCount : MonoBehaviour {

    public AudioClip coinClip;
    private AudioSource source;
    public float lowPitchRange; //.75F
    public float highPitchRange; // 1.5F

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown(){
		scoreManager.instance.addToScore (10);
        source.pitch = Random.Range(lowPitchRange, highPitchRange);
        source.PlayOneShot(coinClip);
		Destroy (this);
	}

    void Awake()
    {
        source = GetComponent<AudioSource>();
    }
}
