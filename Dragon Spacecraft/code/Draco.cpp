#include "Draco.h"
#include <iostream>

using namespace std;

Draco::Draco() {
	turnOff();
	this->setPower(80);
}

Draco::Draco(string id) {
	this->setPower(80);
	this->setId(id);
	turnOff();
}

void Draco::fireUp() {
	if(isOn() == true){
		cout<<"The Draco Thruster turned on, firing up!"<<endl;
	}
	else{
		cout<<"The Draco thruster is not turned on yet, please turn it on"<<endl;
	}	
}

void Draco::shutDown() {
	this->turnOff();
	cout<<"The Drago thruster has been shut down"<<endl;
}
