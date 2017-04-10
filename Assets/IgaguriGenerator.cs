﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IgaguriGenerator : MonoBehaviour {

	public GameObject igaguriPrefab;

	void Start () {
		
	}

	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			GameObject igaguri = Instantiate (igaguriPrefab) as GameObject;

			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			Vector3 worldDir = ray.direction;
			igaguri.GetComponent<IgaguriController> ().Shoot (worldDir.normalized * 2000);
		}
	}
}