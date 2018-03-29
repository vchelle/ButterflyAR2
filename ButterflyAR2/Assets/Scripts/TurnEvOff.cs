using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnEvOff : MonoBehaviour 
{

    public GameObject Thing1;
    public GameObject Thing2;
    public GameObject Thing3;
    //public GameObject Thing4;
    //public GameObject Thing5;

    public GameObject ThingToMove;
    public GameObject EndLocation;

	// Use this for initialization
	public void OnClick() 
    {
        Thing1.SetActive(false);
        Thing2.SetActive(false);
        Thing3.SetActive(false);
        //Thing4.SetActive(false);
        //Thing5.SetActive(false);

	}

    public void OnClickMoveTo()
    {
        Vector3 newPos = new Vector3(EndLocation.transform.position.x, EndLocation.transform.position.y, EndLocation.transform.position.z);
        ThingToMove.transform.position = newPos;
    }

}
