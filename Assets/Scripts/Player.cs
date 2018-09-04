using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	public float jumpForce = 10f;
	public Rigidbody2D circle;
	public string currentColor;

	// Use this for initialization
	void Start () {
		SetRandomColor();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonUp("Jump") || Input.GetMouseButtonDown(0))
		{
			circle.velocity = Vector2.up * jumpForce;
		}
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		Debug.Log(collision.tag);
	}

	void SetRandomColor() {
		int rand = Random.Range(0, 3);
		switch (rand) 
		{
			case 0:
				currentColor = "Blue";
				break;
			case 1:
				currentColor = "Yellow";
				break;
			case 2:
				currentColor = "Pink";
				break;
			case 3:
				currentColor = "Purple";
				break;								
		}
	}
}
