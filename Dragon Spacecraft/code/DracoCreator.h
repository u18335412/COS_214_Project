#ifndef DRACOCREATOR_H
#define DRACOCREATOR_H
#include "ThrusterCreator.h"
#include "Thruster.h"

class DracoCreator : ThrusterCreator {
	public:
		Thruster* createThruster();
};

#endif
