#include "Parachute.h"

Parachute::Parachute() {

}

Parachute::Parachute(string id){
	setId(id);
}

void Parachute::setStoppingPower(int stoppingPower) {
	this->stoppingPower = stoppingPower;
}

int Parachute::getStoppingPower() {
	return this->stoppingPower;
}

int Parachute::getSuccessRate(){
	return successRate;
}

void Parachute::setSuccessRate(int s){
	this->successRate = s;
}

void Parachute::setId(string id){
	this->id = id;
}

string Parachute::getId(){
	return this->id;
}