using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Linq;

public class Player : MonoBehaviour {

	public float jumpForce = 10f;
	public Rigidbody2D circle;
	public string currentColor;
	public SpriteRenderer sr;
	public Color blue;
	public Color yellow;
	public Color pink;
	public Color purple;
	public static int score = 0;
	public Text scoreText;

	// Math
	public int initalValue = 0;
	public int upLimit = 10; // Random generated numbers must equal or lower than upLimit
	public int downLimit = 1; // Random generated numbers must equal or higher than downLimit
	public int currentValue = 0;
	public int generatedValue = 0;
	public int generatedWrongValue1 = 0; // Random generated number, it will be the wrong answer 1
	public int generatedWrongValue2 = 0; // Random generated number, it will be the wrong answer 2
	public int targetValue = 0;
	public int endValue = 100;	
	public Text targetText;
	public GameObject answerPrefab;
	GameObject answer1;
	GameObject answer2;
	GameObject answer3;
	public GameObject explosion;
	GameObject panel;
	float maxY; // the highest point the player every got

	public GameObject[] obstacles;
	public GameObject colorChanger;

	// Use this for initialization
	void Start () {
		panel = GameObject.Find("Panel");
		panel.SetActive(false);
		PlayerInit();
		this.newAnswer();
		for (int i=0; i<4000; i++) {
			// just a delay...
			Debug.Log(i);
		}		
	}

	void newAnswer() {
		gameObject.GetComponentInChildren<TextMesh>().text = this.currentValue.ToString();
		this.GenerateRandomNumber();
		this.GenerateRandomWrongNumbers();
		this.GenerateAnswers();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonUp("Jump") || Input.GetMouseButtonDown(0))
		{
			circle.velocity = Vector2.up * jumpForce;
		}
		if (this.maxY < transform.position.y) {
			this.maxY = transform.position.y;
		}
		// Kill the Player if gets too low
		if (transform.position.y < this.maxY -5f) {
			this.KillPlayer();
		}
        if (Input.GetKey("escape"))
        {
            SceneManager.LoadScene("Home");
        }		
	}




	//////////////////////////////
	// Math
	//////////////////////////////
	public void PlayerInit() {
		this.initalValue = 0;
		this.maxY = transform.position.y;
		gameObject.GetComponentInChildren<TextMesh>().text = this.initalValue.ToString();
	}

	// Create a random number with this conditions
	// 1. Higher than the current value, but not between downLimit or upLimit + currentValue
	// 2. Lower or equals than the end value
	public void GenerateRandomNumber() {
		int aux = Random.Range(downLimit, upLimit);
		if (aux + this.currentValue > this.endValue) {
			aux = this.endValue - this.currentValue;
		}
		this.generatedValue = aux;
		this.targetValue = aux + this.currentValue;
		this.targetText.text = this.targetValue.ToString();
	}

	// Create three different numbers for the answers
	public void GenerateRandomWrongNumbers() {
		this.generatedWrongValue1 = this.generatedValue;
		this.generatedWrongValue2 = this.generatedValue;
		while (this.generatedWrongValue1 == this.generatedValue)
		{
			int aux = Random.Range(downLimit, upLimit);
			this.generatedWrongValue1 = aux;
		}
		while (this.generatedWrongValue2 == this.generatedValue ||
			   this.generatedWrongValue2 == this.generatedWrongValue1) 
		{
			int aux = Random.Range(downLimit, upLimit);
			this.generatedWrongValue2 = aux;
		}
	}

	// Instantite three diffent answers with the numbers
	public void GenerateAnswers() {
		answer1 = Instantiate(answerPrefab, new Vector2(transform.position.x, transform.position.y+3f), transform.rotation);
		answer2 = Instantiate(answerPrefab, new Vector2(transform.position.x, transform.position.y+3f), transform.rotation);
		answer3 = Instantiate(answerPrefab, new Vector2(transform.position.x, transform.position.y+3f), transform.rotation);
		// Set the numbers randomly in the answers
		int[] array = { this.generatedWrongValue1, this.generatedWrongValue2, this.generatedValue };
		int aux = Random.Range(0, 3);
		answer1.GetComponentInChildren<TextMesh>().text = array[aux].ToString();
		array = array.Except(new int[]{array[aux]}).ToArray();
		aux = Random.Range(0, 2);
		answer2.GetComponentInChildren<TextMesh>().text = array[aux].ToString();
		array = array.Except(new int[]{array[aux]}).ToArray();
		answer3.GetComponentInChildren<TextMesh>().text = array[0].ToString();
	}

	private void OnTriggerEnter2D(Collider2D collision)	{
		if (collision.tag == "Answer") {
			string answer = collision.GetComponentInChildren<TextMesh>().text;
			AudioSource answerAudioData = collision.GetComponent<AudioSource>();
			if (answer == this.generatedValue.ToString()) {
				answerAudioData.Play();
				Debug.Log("Play");
				this.currentValue = this.currentValue + this.generatedValue;
				Instantiate(explosion, new Vector2(answer1.transform.position.x, answer1.transform.position.y), transform.rotation);
				Destroy(answer1);
				Instantiate(explosion, new Vector2(answer2.transform.position.x, answer2.transform.position.y), transform.rotation);
				Destroy(answer2);
				Instantiate(explosion, new Vector2(answer3.transform.position.x, answer3.transform.position.y), transform.rotation);
				Destroy(answer3);
				this.newAnswer();
			} else {
				this.KillPlayer();
			}
		}
	}

	void KillPlayer() {
		AudioSource playerAudioData = GetComponent<AudioSource>();
		playerAudioData.Play();
		Debug.Log("Play");
		Instantiate(explosion, new Vector2(transform.position.x, transform.position.y), transform.rotation);
		gameObject.SetActive(false);
		panel.SetActive(true);
	}

	public void ReloadScene() {
		Scene scene = SceneManager.GetActiveScene(); 
		SceneManager.LoadScene(scene.name);
	}

	public void BackHome() {
		SceneManager.LoadScene("Home");
	}	
}
