﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

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
	public int targetValue = 0;
	public int endValue = 100;	
	public Text targetText;

	public GameObject[] obstacles;
	public GameObject colorChanger;

	// Use this for initialization
	void Start () {
		SetRandomColor();
		PlayerInit();
		this.GenerateRandomNumber();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonUp("Jump") || Input.GetMouseButtonDown(0))
		{
			circle.velocity = Vector2.up * jumpForce;
		}
		//scoreText.text = score.ToString();
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.tag == "Scored") {
			score++;
			Destroy(collision.gameObject);
			int rand = Random.Range(0, 2);
			Instantiate(obstacles[rand], new Vector2(transform.position.x, transform.position.y+7f), transform.rotation);
			return;
		}
		if (collision.tag == "ColorChanger") {
			SetRandomColor();
			Destroy(collision.gameObject);
			Instantiate(colorChanger, new Vector2(transform.position.x, transform.position.y+7f), transform.rotation);
			return;
		}
		if (collision.tag != currentColor) {
			Debug.Log("You died!");
			SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
			score = 0;
		}
	}

	void SetRandomColor() {
		int rand = Random.Range(0, 4);
		switch (rand) 
		{
			case 0:
				currentColor = "Blue";
				sr.color = blue;
				break;
			case 1:
				currentColor = "Yellow";
				sr.color = yellow;
				break;
			case 2:
				currentColor = "Pink";
				sr.color = pink;
				break;
			case 3:
				currentColor = "Purple";
				sr.color = purple;
				break;								
		}
	}

	//////////////////////////////
	// Math
	//////////////////////////////
	public void PlayerInit() {
		this.initalValue = 0;
		GameObject.Find("Player").GetComponentInChildren<TextMesh>().text = this.initalValue.ToString();
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

}
