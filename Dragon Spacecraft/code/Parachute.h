#ifndef PARACHUTE_H
#define PARACHUTE_H

class Parachute {
	private:
		int stoppingPower;
		int successRate;
	public:
		Parachute();
		virtual void deploy()=0;
		virtual int calculateSuccessRate()=0;
		void setStoppingPower(int stoppingPower);
		int getStoppingPower();
		int getSuccessRate();
		void setSuccessRate();
};

#endif
