using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using System.Linq;
using UnityEngine.SceneManagement;

public class FirebaseManagement : MonoBehaviour {

	string strSnapshot;
	public DataSnapshot snapshot;

	public int HISCORE_ELEMENTS = 5; //Max number of elements in the hiscore list/table
	bool hiScore;
	Text name1;
	Text score1;
	Text name2;
	Text score2;
	Text name3;
	Text score3;
	Text name4;
	Text score4;
	Text name5;
	Text score5;

	bool renderOnce;
	DatabaseReference reference;
	List<Text> names;
	List<Text> scores;

	// Use this for initialization
	void Start () {
		this.renderOnce = true;
		this.hiScore = SceneManager.GetActiveScene().name == "HiScore";
		if (this.hiScore) {
			this.GetTexts();
		}
		// PlayerPrefs.DeleteKey("snapshot");
		// PlayerPrefs.DeleteKey("myhiscore");
		FirebaseInit();
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetString("snapshot") == "") {
			PlayerPrefs.SetString("snapshot", this.strSnapshot);
		}
		if (this.snapshot != null && this.hiScore && this.renderOnce) {
			this.RenderHiScores();
			this.renderOnce = false;
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

        public HiScore(){}
    }	

	private void FirebaseInit() {
		FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
			var dependencyStatus = task.Result;
			if (dependencyStatus == Firebase.DependencyStatus.Available) {
				// Set a flag here indiciating that Firebase is ready to use by your application.
				Debug.Log("Firebase ready!");
				FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://mathballs-0000.firebaseio.com/");
				this.reference = FirebaseDatabase.DefaultInstance.RootReference;
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
						}
      			});				
			} else {
				UnityEngine.Debug.LogError(System.String.Format(
				"Could not resolve all Firebase dependencies: {0}", dependencyStatus));
				// Firebase Unity SDK is not safe to use here.
			}
		});
	}

	// True if the passed score is top ten (or three, or five, or...)
	public bool IsHiScore(int myScore) {
		bool result = false;
		if (this.snapshot != null) {
			foreach(var rules in this.snapshot.Children) {
				foreach(var levels in rules.Children) {
					if (levels.Key == "score") {
						int score = (System.Convert.ToInt32(levels.Value)); 
						if (score < myScore) {
							return true;
						}
					}
				}
			}
		}
		return result;
	}

	// Saves the full list of hiscores, 
	// including the one passed by parameter
	public void SaveHiScore(string user, int score) {
		// First get the full list and add our HiScore
		HiScore myHiScore = new HiScore(user, score);
		List<HiScore> hiScores = this.GetSortedListFromSnapshot(true);
		hiScores.Add(myHiScore);
		// Sort the list
		List<HiScore> sortedHiScores = hiScores.OrderByDescending(o=>o.score).ToList();
		// Actually save the correctly sorted list
		this.InsertHiScores(sortedHiScores);
	}

	/*
		Renders the Text GameObject of names and scores list, with the values taken 
		from the DataSnapshot
	 */
	public void RenderHiScores() {
		List<HiScore> hiScores = this.GetSortedListFromSnapshot(true);
		int i = -1;
		foreach(var hiScore in hiScores) {
			i++;
			names[i].text = hiScore.user;
			scores[i].text = hiScore.score.ToString();
		}
	}

	// Creates and returns a list of HiScore from DataSnapshot and sort it
	public List<HiScore> GetSortedListFromSnapshot(bool sort) {
		List<HiScore> hiScores = new List<HiScore>();
		foreach(var rules in this.snapshot.Children) {
			HiScore newHiScore = new HiScore();
			foreach(var levels in rules.Children) {
				if (levels.Key == "score") {
					newHiScore.score = (System.Convert.ToInt32(levels.Value)); 
				} else if (levels.Key == "user") {
					newHiScore.user = (string)levels.Value; 
				}
			}
			hiScores.Add(newHiScore);
		}
		// Sort the list if requested
		if (sort)  {
			return hiScores.OrderByDescending(o=>o.score).ToList();
		} else {
			return hiScores;
		}
	}

	public void InsertHiScores(List<HiScore> sortedHiScores) {
		// Remove first all the elements of the list
		this.reference.Child("hiscore").SetRawJsonValueAsync("{}");		
		int i = 0;
		foreach(var hiScore in sortedHiScores) {
			i++;
			if (i <= this.HISCORE_ELEMENTS) {
				string key = this.reference.Child("hiscore").Push().Key;
				Dictionary<string, object> hiscoreDict = new Dictionary<string, object>();
				hiscoreDict["user"] = hiScore.user;
				hiscoreDict["score"] = hiScore.score;
				Dictionary<string, object> dict = new Dictionary<string, object>();
				dict["/hiscore/"+key] = hiscoreDict;
				this.reference.UpdateChildrenAsync(dict);
			}		
		}		
	}

	/* 
		Populates two lists of Text GameObjects, 
		one of HiScore names and other of HiScore scores.
		This are where the HiScores will be rendered.
	 */
	public void GetTexts() {
		this.names = new List<Text>();
		this.scores = new List<Text>();
		for (int i=1; i<=this.HISCORE_ELEMENTS; i++) {
			 this.names.Add(GameObject.Find("Name" + i.ToString()).GetComponent<Text>());
			 this.scores.Add(GameObject.Find("Score" + i.ToString()).GetComponent<Text>());
		}
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

	//Push
	/*		 
				HiScore hiscore1 = new HiScore("Manolo", 100);
				string key = reference.Child("hiscore").Push().Key;
				Dictionary<string, object> hiscore1Dict = new Dictionary<string, object>();
				hiscore1Dict["user"] = hiscore1.user;
				hiscore1Dict["score"] = hiscore1.score;
				Dictionary<string, object> dict = new Dictionary<string, object>();
				dict["/hiscore/"+key] = hiscore1Dict;
				reference.UpdateChildrenAsync(dict);
	*/	
}
