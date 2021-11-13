#include "SuperDraco.h"
#include <iostream>

using namespace std;

SuperDraco::SuperDraco() {
	turnOff();
	this->setPower(90);
}

SuperDraco::SuperDraco(string id) {
	this->setPower(90);
	this->setId(id);
	turnOff();
}

void SuperDraco::fireUp() {
	if(isOn() == true){
		cout<<"The Super-Draco Thruster turned on, firing up!"<<endl;
	}
	else{
		cout<<"The Super-Draco thruster is not turned on yet, please turn it on"<<endl;
	}	
}

void SuperDraco::shutDown() {
	this->turnOff();
	cout<<"The Super-Drago thruster has been shut down"<<endl;
}

