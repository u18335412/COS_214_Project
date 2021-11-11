#ifndef MARK2PARACHUTE_H
#define MARK2PARACHUTE_H
#include "Parachute.h"

class Mark2Parachute :public Parachute {
	private:
		int SuccessRate
	public:
		Mark2Parachute();
		~Mark2Parachute();
		void deploy();
		int calculateSuccessRate();
};
#endif
