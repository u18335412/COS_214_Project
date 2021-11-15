#include "Satellite.h"
#include <iostream>

using namespace std;

Satellite :: ~Satellite() 
{

}

Satellite :: Satellite() 
{
	nextS = NULL;
	prevS = NULL;

	this-> distance = 0.0;
}

Satellite* Satellite :: nextSatellite() 
{
	return nextS;
}
Satellite* Satellite :: Clone() 
{
	return new Satellite();
}

Satellite* Satellite :: prevSatellite() 
{
	return prevS;
}

void Satellite :: attach(Antenna* a) 
{
	antenna.push_back(a);
}

void Satellite :: detach(Antenna* a) 
{
	bool found = false;
	vector<Antenna*>::iterator it = antenna.begin();
	while((it != antenna.end()) && (!found))
	{
		if (*it == a)
		{
			found = true;
			antenna.erase(it);
		}
		++it;
	}
}

void Satellite :: notifyAntenna() 
{
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	cout<<"Configuration done! All Antenna's Radio signals, set to ON."<<endl;

}

void Satellite :: SatellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}

double Satellite :: getDistance()
{
	return this->distance;
}

double Satellite :: getDist()
{
	return this->distance;
}

void Satellite ::  setDist(double d)
{
	this->distance = d;
}