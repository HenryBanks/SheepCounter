using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class sheepGenerator : MonoBehaviour {

	public GameObject sheepPrefab;
	public GameObject wolfPrefab;
	public Vector3 spawnPos;
	public bool isSpawning;
	public bool flyingSheep;

    private float timeAtStart;
	private float timeToNextSheep=1.0f;
	public float initialSpawnDelay = 0.5f;
	public float randomDelay=0.05f;
    private static float difficulty = 1;
    private int IntAsDiff = Mathf.FloorToInt(difficulty);

    void generateSheep(){
        int sheepSelecter = Random.Range(1,10);
        
		if (sheepSelecter <= 8) {

			GameObject sheep = Instantiate (sheepPrefab, spawnPos, Quaternion.identity);

			sheep.GetComponent<sheepMove> ().moveSpeed *= IntAsDiff;
			if (flyingSheep) {
				sheep.GetComponent<Rigidbody> ().useGravity=false;
			}

		} else {
			GameObject wolf = Instantiate (wolfPrefab, spawnPos, Quaternion.identity);

			wolf.GetComponent<sheepMove> ().moveSpeed *= IntAsDiff;
			if (flyingSheep) {
				wolf.GetComponent<Rigidbody> ().useGravity=false;
			}
		}
    }

	float getSpawnDelay(){
		//Debug.Log (Time.time - timeAtStart);
		 difficulty = Mathf.Log10 (Time.time - timeAtStart+10);
		return (initialSpawnDelay + randomDelay * Random.Range (0, 10))/difficulty;

	}


	// Use this for initialization
	void Start () {
		timeAtStart = Time.time;
	}

	// Update is called once per frame
	void Update () {
		if (Time.time > timeToNextSheep && isSpawning) {
			float currentSpawnDelay = getSpawnDelay ();
			timeToNextSheep = Time.time + currentSpawnDelay;
			generateSheep ();
		}
	}
}
