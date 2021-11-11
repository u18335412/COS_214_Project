#include "Thruster.h"
#include <iostream>

Thruster::Thruster() {
	this->thrusterSwitch = false;
}

void Thruster::setPower(int power) {
	this->power = power;
}

int Thruster::getPower() {
	return this->power;
}

// void Thruster::fireUp() {
// 	if(this->thrusterSwitch == true){
// 		cout<<"Thruster turned on, firing up!"<<endl;
// 	}
// 	else{
// 		cout<<"The thruster is not turned on yet, please turn it on"<<endl;
// 	}	
// }

// void Thruster::shutDown() {
// 	this->thrusterSwitch = false;
// 	cout<<"Thruster has been shut down"<<endl;
// }

void Thruster::turnOff(){
	this->thrusterSwitch = false;
}

void Thruster::turnOn(){
	this->thrusterSwitch = true;
}
