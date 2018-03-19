using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonGreen : MonoBehaviour {

	public void OnClick(){
		Debug.Log ("On Green Click");
	}
	public void OnOver(){
		Debug.Log ("On Green Over");
	}
	public void OnExit(){
		Debug.Log ("On Green Exit");
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