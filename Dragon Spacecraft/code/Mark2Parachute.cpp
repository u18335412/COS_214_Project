#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

Mark2Parachute::Mark2Parachute() {
	setSuccessRate(calculateSuccessRate());
}

Mark2Parachute::Mark2Parachute(string name) {
	setId(name);
	setSuccessRate(calculateSuccessRate());
}
void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

int Mark2Parachute::calculateSuccessRate() {
	int SuccessRate= 0 + (rand() % 10);
	setSuccessRate(SuccessRate);
	return SuccessRate;
}

