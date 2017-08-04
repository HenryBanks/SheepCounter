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

    public Image[] healthImages;
    public Sprite[] healthSprites;

    // Use this for initialization
    void Start() {
        //curHealth = startHeart * livePerHeart;
        curHealth = livesManager.currentLives;
        maxHealth = maxHeart * livePerHeart;
    }

    // Update is called once per frame
    void Update() {
        CheckHealth();
    }

    void CheckHealth()
    {
      

        if (livesManager.currentLives == 3) {
            healthImages[0].enabled = true;
            healthImages[1].enabled = true;
            healthImages[2].enabled = true;
        }

        if (livesManager.currentLives == 2)
        {
            healthImages[0].enabled = true;
            healthImages[1].enabled = true;
            healthImages[2].enabled = false;
        }

        if (livesManager.currentLives == 1)
        {
            healthImages[0].enabled = true;
            healthImages[1].enabled = false;
            healthImages[2].enabled = false;
        }

        if (livesManager.currentLives == 0)
        {
            healthImages[0].enabled = false;
            healthImages[1].enabled = false;
            healthImages[2].enabled = false;
        }

    }



    }



