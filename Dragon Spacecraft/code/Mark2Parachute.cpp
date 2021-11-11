#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

Mark2Parachute::Mark2Parachute() {
	
}

void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

int Mark2Parachute::calculateSuccessRate() {
	int SuccessRate= 0 + (rand() % 10);
	setSuccessRate(SuccessRate);
	return SuccessRate;
}

void Mark2Parachute::setStoppingPower(int stoppingPower)
{
	this->stoppingPower=stoppingPower;
}

int Mark2Parachute::getStoppingPower()
{
	return stoppingPower;
}
