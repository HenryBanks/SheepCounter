using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class musicManager : MonoBehaviour {

    public AudioSource source;
    public AudioSource source2;
    private int selecter;

    void Start()
    {

        source.Play();
    }

   

     void Update()
    {
		if (scoreManager.multiplier > 5 && source.isPlaying)
        {
            selecter = 1;
            source.Stop();
            source2.Play();
        }

        if (scoreManager.multiplier <= 5 && source2.isPlaying)
        {
            selecter = 0;
            source.Play();
            source2.Stop();
        }
    }
}
