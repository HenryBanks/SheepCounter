using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepMove : MonoBehaviour {

	public  int moveSpeed;
    public int[] speedselector;
    private int randomizer;

    // Use this for initialization
    void Start () {
        RandomSpeed();
		Destroy (this.gameObject, 5f);
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate (new Vector3 (-1, 0, 0)*moveSpeed*Time.deltaTime);
	}

    void RandomSpeed() {
        randomizer = Random.Range(0, speedselector.Length - 1);
        moveSpeed = speedselector[randomizer];
    }
}
