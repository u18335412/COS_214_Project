#ifndef CREWDRAGONSPACECRAFT_H
#define CREWDRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include "CrewMember.h"

using namespace std;

class CrewDragonSpacecraft :public Spacecraft {
	private:
		vector<CrewMember*> spacecraftCrew;
		vector<Cargo*> spacecraftCargo;
		int currentHeight;

	public:
		CrewDragonSpacecraft();
		~CrewDragonSpacecraft();
		void enterCrewMember(CrewMember*);
		void removeCrewMember(string);
		void setCurrentLocation(string location);
		double currentWeight();
		int getCurrentHeight();
		void setCurrentHeight(int currtHight);
		void crewInfo();
};
#endif
