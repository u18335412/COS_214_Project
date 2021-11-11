#ifndef THRUSTER_H
#define THRUSTER_H
#include <string>

using namespace std;

class Thruster {
	private:
		int power;
		bool thrusterSwitch;

	public:
		Thruster();
		~Thruster();
		void setPower(int power);
		int getPower();
		virtual void fireUp();
		virtual void shutDown();
};

#endif
