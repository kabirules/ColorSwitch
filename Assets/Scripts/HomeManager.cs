using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour {

	public GameObject answerPrefab;
	GameObject answer1;
	GameObject answer2;
	GameObject answer3;	

	// Use this for initialization
	void Start () {
		FirebaseInit();
		GenerateAnswers();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKey("escape"))
        {
            Application.Quit();
        }
	}

	public void OpenMain() {
		SceneManager.LoadScene("Main");
	}

	public void GenerateAnswers() {
		answer1 = Instantiate(answerPrefab, new Vector2(0f, 0f), transform.rotation);
		answer2 = Instantiate(answerPrefab, new Vector2(-3f, 3f), transform.rotation);
		answer3 = Instantiate(answerPrefab, new Vector2(3f, -3f), transform.rotation);
	}

	////////////////
	/// FIREBASE ///
	////////////////

	private void FirebaseInit() {
		Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
			var dependencyStatus = task.Result;
			if (dependencyStatus == Firebase.DependencyStatus.Available) {
				// Set a flag here indiciating that Firebase is ready to use by your
				// application.
				Debug.Log("Firebase ready!");
			} else {
				UnityEngine.Debug.LogError(System.String.Format(
				"Could not resolve all Firebase dependencies: {0}", dependencyStatus));
				// Firebase Unity SDK is not safe to use here.
			}
		});
	}
}

