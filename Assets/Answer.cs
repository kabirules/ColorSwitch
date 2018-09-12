﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Answer : MonoBehaviour {

	Vector2 direction;
	float speed;
	GameObject player; // we need to know player position to instantiate answers in the right Y position
	float playerY;

	// Use this for initialization
	void Start () {
		// Get current player Y position
		player = GameObject.Find("Player");
		playerY = player.transform.position.y;
		// Set the answer in a random position
		float rndX = Random.Range(-2.4f, 2.4f);
		float rndY = Random.Range(playerY + 6f, playerY + 8f);
		transform.position = new Vector3(rndX, rndY, 0f);
		// Give the answer a random movement direction
		float directionX = Random.Range(-1f,1f);
		float directionY = Random.Range(-1f,1f);
		direction = new Vector2(directionX, directionY);
		// Give the answer a random speed
		speed = Random.Range(1f, 3f);
	}
	
	// Update is called once per frame
	void Update () {
		// move the answer
		gameObject.GetComponent<Rigidbody2D>().velocity = direction * speed;
		// make sure the answer stay in the bounds
		playerY = player.transform.position.y;
		if (transform.position.x > 2.4f) {
			direction = new Vector2(System.Math.Abs(direction.x) * -1f, direction.y);
		}
		if (transform.position.x < -2.4f) {
			direction = new Vector2(System.Math.Abs(direction.x), direction.y);
		}
		if (transform.position.y > playerY + 4f) {
			direction = new Vector2(direction.x, System.Math.Abs(direction.y) * -1f);
		}
		if (transform.position.y < playerY + 0f) {
			direction = new Vector2(direction.x, System.Math.Abs(direction.y));
		}
	}
}
