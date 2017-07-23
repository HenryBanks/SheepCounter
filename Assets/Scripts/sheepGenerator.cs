using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepGenerator : MonoBehaviour {

	public GameObject[] sheepPrefab;
	public Vector3 spawnPos;

    private int sheepselecter;
    private float timeAtStart;
	private float timeToNextSheep=1.0f;
	public float initialSpawnDelay = 0.5f;
	public float randomDelay=0.05f;

	void generateSheep(){
        sheepselecter = Random.RandomRange(0, sheepPrefab.Length - 1);
        
        Instantiate (sheepPrefab[sheepselecter], spawnPos, Quaternion.identity);
	}

	float getSpawnDelay(){
		Debug.Log (Time.time - timeAtStart);
		float difficulty = Mathf.Log10 (Time.time - timeAtStart+10);
		return (initialSpawnDelay + randomDelay * Random.Range (0, 10))/difficulty;
	}


	// Use this for initialization
	void Start () {
		timeAtStart = Time.time;
	}

	// Update is called once per frame
	void Update () {
		if (Time.time > timeToNextSheep) {
			generateSheep ();
			float currentSpawnDelay = getSpawnDelay ();
			timeToNextSheep = Time.time + currentSpawnDelay;
		}
	}
}
