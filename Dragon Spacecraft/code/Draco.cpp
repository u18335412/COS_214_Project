#include "Draco.h"

Draco::Draco() {
	turnOff();
}

Draco::Draco(int p) {
	this->setPower(p);
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
