using System.Collections;
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
		// Give the answer a random movement direction. 
		// Direction x will be between 0.5 and 1 (positive or negative), anything between -0.5 and 0.5 is way too slow
		float directionX = Random.Range(0.5f,1f);
		int rnd = Random.Range(0,1);
		directionX = directionX * rnd == 0 ? -1f : 1f;
		float directionY = Random.Range(-1f,1f);
		direction = new Vector2(directionX, directionY);
		// Give the answer a random speed
		speed = Random.Range(1f, 3f);
		// Give the answer a random color
		this.SetAnswerColor();
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

	void SetAnswerColor() {
		int num = Random.Range(0, 8);
		if (num == 0) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.blue;
		} else if (num == 1) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.red;
		} else if (num == 2) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.yellow;
		} else if (num == 3) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.green;
		} else if (num == 4) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.white;
		} else if (num == 5) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.cyan;
		} else if (num == 6) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.magenta;
		} else if (num == 7) {
			gameObject.GetComponent<SpriteRenderer>().color = Color.grey;
		}
	}
		
}
