using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Intro_Text : MonoBehaviour {

    public float letterPause = 0.2f;
    string message;
    Text textComp;
    public bool message1;
    public bool message2;
    public bool message3;
    public bool message4;

    // Use this for initialization
    void Start()
    {
        textComp = GetComponent<Text>();
        message = textComp.text;
        textComp.text = "";
        StartCoroutine(TypeText());
    }

    IEnumerator TypeText()
    {
        foreach (char letter in message.ToCharArray())
        {
            textComp.text += letter; 
            yield return 0;
            yield return new WaitForSeconds(letterPause);
        }
    }
}
