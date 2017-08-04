using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HeartSystem : MonoBehaviour {

    private int maxHeart = 3;
    public int startHeart = 3;
    public int curHealth;
    private int maxHealth;
    private int livePerHeart = 1;

	public GameObject[] healthImages;
    public Sprite[] healthSprites;

	public static HeartSystem instance;

    // Use this for initialization
    void Start() {
        //curHealth = startHeart * livePerHeart;
        curHealth = livesManager.currentLives;
        maxHealth = maxHeart * livePerHeart;
		instance = this;
    }

    // Update is called once per frame
    void Update() {
        //CheckHealth();
    }

    public void CheckHealth()
    {
      

        if (livesManager.currentLives == 3) {
			healthImages[0].SetActive(true);
			healthImages[1].SetActive(true);
			healthImages[2].SetActive(true);
        }

        if (livesManager.currentLives == 2)
        {
			healthImages[0].SetActive(true);
			healthImages[1].SetActive(true);
			healthImages[2].SetActive(false);
        }

        if (livesManager.currentLives == 1)
        {
			healthImages[0].SetActive(true);
			healthImages[1].SetActive(false);
			healthImages[2].SetActive(false);
        }

        if (livesManager.currentLives == 0)
        {
			healthImages[0].SetActive(false);
			healthImages[1].SetActive(false);
			healthImages[2].SetActive(false);
        }

    }



    }



