#ifndef THRUSTER_H
#define THRUSTER_H
#include <string>

using namespace std;

class Thruster {
	private:
		int power;
		bool thrusterSwitch;
		string id;
	public:
		Thruster();
		Thruster(string);
		~Thruster();
		void setPower(int power);
		int getPower();
		virtual void fireUp()=0;
		virtual void shutDown()=0;
		void turnOn();
		void turnOff();
		bool isOn();
		void setId(string);
		string getId();

};

#endif
