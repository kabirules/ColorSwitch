using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HiScoreManager : MonoBehaviour {

	public GameObject answerPrefab;
	GameObject answer1;
	GameObject answer2;
	GameObject answer3;
	AdMob adMobScript;

	// Use this for initialization
	void Start () {
		adMobScript = gameObject.GetComponent<AdMob>();
		GenerateAnswers();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKey("escape"))
        {
			adMobScript.RemoveBanner();
            SceneManager.LoadScene("Home");
        }
	}

	public void OpenHome() {
		adMobScript.RemoveBanner();
		SceneManager.LoadScene("Home");
	}

	public void GenerateAnswers() {
		answer1 = Instantiate(answerPrefab, new Vector2(0f, 0f), transform.rotation);
		answer2 = Instantiate(answerPrefab, new Vector2(-3f, 3f), transform.rotation);
		answer3 = Instantiate(answerPrefab, new Vector2(3f, -3f), transform.rotation);
	}
}

