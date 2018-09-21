using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;

public class FirebaseManagement : MonoBehaviour {

	string strSnapshot;
	public DataSnapshot snapshot;

	// Use this for initialization
	void Start () {
		// PlayerPrefs.DeleteKey("snapshot");
		// PlayerPrefs.DeleteKey("myhiscore");
		FirebaseInit();
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetString("snapshot") == "") {
			PlayerPrefs.SetString("snapshot", this.strSnapshot);
		}
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
				// Set a flag here indiciating that Firebase is ready to use by your application.
				Debug.Log("Firebase ready!");
				FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://mathballs-0000.firebaseio.com/");
				DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
				HiScore hiscore1 = new HiScore("Manolo", 100);
				string key = reference.Child("hiscore").Push().Key;
				Dictionary<string, object> hiscore1Dict = new Dictionary<string, object>();
				hiscore1Dict["user"] = hiscore1.user;
				hiscore1Dict["score"] = hiscore1.score;
				Dictionary<string, object> dict = new Dictionary<string, object>();
				dict["/hiscore/"+key] = hiscore1Dict;
				// reference.UpdateChildrenAsync(dict);
				// Read data
				FirebaseDatabase.DefaultInstance
					.GetReference("hiscore")
					.GetValueAsync().ContinueWith(task1 => {
        				if (task1.IsFaulted) {
          					// Handle the error...
        				} else if (task1.IsCompleted) {
							this.snapshot = task1.Result;
							// Do something with snapshot...
							this.strSnapshot = this.snapshot.GetRawJsonValue();
							foreach(var rules in this.snapshot.Children) {
								Debug.LogFormat("Key = {0}", rules.Key);
								foreach(var levels in rules.Children) {
									Debug.Log(levels.Key);
									Debug.Log(levels.Value);
								}
							}
						}
      			});				
			} else {
				UnityEngine.Debug.LogError(System.String.Format(
				"Could not resolve all Firebase dependencies: {0}", dependencyStatus));
				// Firebase Unity SDK is not safe to use here.
			}
		});
	}

	// True if the passed score is top ten (or three?)
	public bool IsHiScore(int myScore) {
		bool result = false;
		foreach(var rules in this.snapshot.Children) {
			foreach(var levels in rules.Children) {
				int score = levels.Value; // TODO get only score, avoid user!!
				if (System.Convert.ToInt32(levels.Value) < myScore) {
					result = true;
				}
			}
		}
		Debug.Log("IsHiscore: " + result);
		return result;
	}	

	//Insert
	/*
				HiScore hiscore1 = new HiScore("Manolo", 100);
				HiScore hiscore2 = new HiScore("Juanito", 200);
				HiScore hiscore3 = new HiScore("Rodolfito", 50);
				List<HiScore> hiscores = new List<HiScore>();
				hiscores.Add(hiscore1);
				hiscores.Add(hiscore2);
				hiscores.Add(hiscore3);
				string json = JsonUtility.ToJson(hiscore2);
				reference.Child("hiscore").SetRawJsonValueAsync(json);	
	 */
}
