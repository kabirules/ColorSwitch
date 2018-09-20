using System.Collections;
using System.Collections.Generic;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
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

    public class HiScore
    {
        public string user;
        public int score;
        
        public HiScore(string user, int score)
        {
            this.user = user;
            this.score = score;
        }
    }	

	private void FirebaseInit() {
		FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
			var dependencyStatus = task.Result;
			if (dependencyStatus == Firebase.DependencyStatus.Available) {
				// Set a flag here indiciating that Firebase is ready to use by your
				// application.
				Debug.Log("Firebase ready!");
				FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://mathballs-0000.firebaseio.com/");
				DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
				HiScore hiscore1 = new HiScore("Manolo", 100);
				HiScore hiscore2 = new HiScore("Juanito", 200);
				HiScore hiscore3 = new HiScore("Rodolfito", 50);
				List<HiScore> hiscores = new List<HiScore>();
				hiscores.Add(hiscore1);
				hiscores.Add(hiscore2);
				hiscores.Add(hiscore3);
				string json = JsonUtility.ToJson(hiscore2);
				// reference.Child("hiscore").SetRawJsonValueAsync(json);
				string key = reference.Child("hiscore").Push().Key;
				Dictionary<string, object> hiscore1Dict = new Dictionary<string, object>();
				hiscore1Dict["user"] = hiscore1.user;
				hiscore1Dict["score"] = hiscore1.score;
				Dictionary<string, object> dict = new Dictionary<string, object>();
				dict["/hiscore/"+key] = hiscore1Dict;
				reference.UpdateChildrenAsync(dict);
				// Read data
				FirebaseDatabase.DefaultInstance
					.GetReference("hiscore")
					.GetValueAsync().ContinueWith(task1 => {
        				if (task1.IsFaulted) {
          					// Handle the error...
        				} else if (task1.IsCompleted) {
							DataSnapshot snapshot = task1.Result;
							// Do something with snapshot...
							Debug.Log(snapshot.GetRawJsonValue());
							HiScore oneHiscore = JsonUtility.FromJson<HiScore>(snapshot.GetRawJsonValue());
							Debug.Log(oneHiscore.score);
							Debug.Log(oneHiscore.user);
						}
      			});				
			} else {
				UnityEngine.Debug.LogError(System.String.Format(
				"Could not resolve all Firebase dependencies: {0}", dependencyStatus));
				// Firebase Unity SDK is not safe to use here.
			}
		});
	}
}

