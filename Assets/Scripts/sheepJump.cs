using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sheepJump : MonoBehaviour {

    // How far the sheep will move
    public float upmove;
   

    public AudioClip[] JumpSound;
    public AudioSource source;
    private int soundselecter;

    // Use this for initialization
    void Start () {

	}



    private void OnTriggerEnter(Collider other)
    {
        if (other.transform) {
            print(other.transform.tag);
            if (other.transform.tag == "sheep") {
                soundselecter = Random.Range(0, JumpSound.Length -1);
                source.PlayOneShot(JumpSound[soundselecter]);
                other.GetComponent<Rigidbody>().AddForce(new Vector3(0, upmove, 0), ForceMode.Impulse);
            }

            if (other.transform.tag == "Wolf")
            {
                soundselecter = Random.Range(0, JumpSound.Length - 1);
                source.PlayOneShot(JumpSound[soundselecter]);
                other.GetComponent<Rigidbody>().AddForce(new Vector3(0, upmove, 0), ForceMode.Impulse);
            }
        }
    }
}
