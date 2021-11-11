#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

Mark3Parachute::Mark3Parachute() {
	
}

void Mark3Parachute::deploy() {
	cout<<"Now deploying Mark3Parachute."<<endl;
}

int Mark3Parachute::calculateSuccessRate() {
	setSuccessRate(10);
	return 10;
}
