using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonYellow : MonoBehaviour {

	public void OnClick(){
		Debug.Log ("On Yellow Click");
	}
	public void OnOver(){
		Debug.Log ("On Yellow Over");
	}
	public void OnExit(){
		Debug.Log ("On Yellow Exit");
	}


	
	Animator anim;

	void Start()
	{
		anim = gameObject.GetComponent<Animator>();

	}
	void Update()
	{
		if (Input.GetMouseButtonDown (0)) 
		{
			anim.SetTrigger ("Active");
		}
	}

}

//	Animator anim;
//
//	void Start()
//	{
//		public void PlayAnimation()
//			
//		GetComponent<Animator> ().SetBool ("AnimYellow", true);
//		
//		anim.StartPlayback.AnimYellowPlay.<Animator>();
//	}
//	void Update()
//	{
//		if (Input.GetMouseButtonDown(0))
//		{
//			anim.SetTrigger("Active");
//		}
//	}

