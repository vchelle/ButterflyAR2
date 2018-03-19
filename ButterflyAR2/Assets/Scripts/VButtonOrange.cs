using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class VButtonOrange : MonoBehaviour, IVirtualButtonEventHandler {

	public GameObject vbBtnObj;
	public Animator butterflyAni;

	// Use this for initialization
	void Start () {
		vbBtnObj = GameObject.Find("OrangeBtn");
		vbBtnObj.GetComponent<VirtualButtonBehaviour>().RegisterEventHandler(this);
		butterflyAni.GetComponent<Animator>();
	}

	public void OnButtonPressed(VirtualButtonBehaviour vb)
	{
		butterflyAni.Play("cube_animation");
		Debug.Log("Button pressed");
	}

	public void OnButtonReleased(VirtualButtonBehaviour vb)
	{
		butterflyAni.Play("none");
		Debug.Log("Button released");
	}
}﻿