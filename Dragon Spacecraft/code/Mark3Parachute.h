#ifndef MARK3PARACHUTE_H
#define MARK3PARACHUTE_H
#include "Parachute.h"
#include <string>

using namespace std;

class Mark3Parachute :public Parachute {

private:
	int successRate;
public:
	Mark3Parachute();
	Mark3Parachute(string);
	~Mark3Parachute();
	void deploy();
	int calculateSuccessRate();	// will always return 10
	
};

#endif
