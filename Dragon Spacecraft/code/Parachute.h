#ifndef PARACHUTE_H
#define PARACHUTE_H
#include <string>

using namespace std;

class Parachute {
	private:
		int stoppingPower;
		int successRate;
		string id;
	public:
		Parachute();
		Parachute(string);
		virtual void deploy()=0;
		virtual int calculateSuccessRate()=0;
		void setStoppingPower(int stoppingPower);
		int getStoppingPower();
		int getSuccessRate();
		void setSuccessRate(int);
		void setId(string);
		string getId();
};

#endif
