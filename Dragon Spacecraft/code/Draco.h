#ifndef DRACO_H
#define DRACO_H
#include <string>
#include "Thruster.h"

class Draco : public Thruster {
	public:
		Draco();
		Draco(int p);
		~Draco();
		void fireUp();
		void shutDown();
};
#endif
