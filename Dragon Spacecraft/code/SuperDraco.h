#ifndef SUPERDRACO_H
#define SUPERDRACO_H
#include "Thruster.h"
class SuperDraco :public Thruster {
	public:
		SuperDraco();
		SuperDraco(int p);
		~SuperDraco();
		void shutDown();
		void fireUp();
};

#endif
