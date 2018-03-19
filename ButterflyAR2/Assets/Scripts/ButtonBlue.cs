using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonBlue : MonoBehaviour {

	public void OnClick(){
		Debug.Log ("On Blue Click");
	}
	public void OnOver(){
		Debug.Log ("On Blue Over");
	}
	public void OnExit(){
		Debug.Log ("On Blue Exit");
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