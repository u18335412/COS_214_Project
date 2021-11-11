#include "Parachute.h"

Parachute::Parachute() {
	// TODO - implement Parachute::Parachute
	throw "Not yet implemented";
}

void Parachute::setStoppingPower(int stoppingPower) {
	this->stoppingPower = stoppingPower;
}

int Parachute::getStoppingPower() {
	return this->stoppingPower;
}

void Parachute::setStoppingPower(int stoppingPower)
{
	this->stoppingPower=stoppingPower;
}

int Parachute::getStoppingPower()
{
	return stoppingPower;
}

int Parachute::getSuccessRate(){
	return successRate;
}

void Parachute::setSuccessRate(int a){
	this->successRate = a;
}