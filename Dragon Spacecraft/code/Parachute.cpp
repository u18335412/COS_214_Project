#include "Parachute.h"

Parachute::Parachute() {

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

void Parachute::setSuccessRate(int a){
	this->successRate = a;
}