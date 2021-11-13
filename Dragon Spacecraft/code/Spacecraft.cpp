#include "Spacecraft.h"
#include <iostream>

using namespace std;

 Spacecraft::Spacecraft() {
	reused = 0;
}

void Spacecraft::setCurrentLocation(string location) {
	this->currentLocation = location;
}

string Spacecraft::getCurrentLocation() {
	return this->currentLocation;
}

void Spacecraft::setDestination(int destination) {
	this->destination = destination;
}

double Spacecraft::getWeightToOrbit() {
	return maxWeightToEarth;
}

void Spacecraft::setWeightToOrbit(double weight) {
	this->maxWeightToOrbit=weight;
}

double Spacecraft::getWeightToEarth() {
	return this->maxWeightToEarth;
}

void Spacecraft::goToDestination() {
	cout<<"The spacecraft leaves"<<this->currentLocation<<" to "<<this->destination<<endl;
}

void Spacecraft::notify() {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
			observerList[i]->update();
	}
}

void Spacecraft::attach(ParachuteSystemObserver* obj) {
	observerList.push_back(obj);
}



void Spacecraft::detach(ParachuteSystemObserver* obj) {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
		{
			if(observerList[i]==obj)
			{
				observerList[i]=NULL;
			}
		}
	}
}

void Spacecraft::attachCargo(Cargo* obj) {
	cargoList.push_back(obj);
	cout<<obj->getName()<<" has been added to the list"<<endl;
}

// void Spacecraft::detach(Cargo* cargo) {
// 	remove(thrustersList.begin(), thrustersList.end(), cargo);
// }

void Spacecraft::detachCargo(string name) {
	// remove(thrustersList.begin(), thrustersList.end(), cargo);
	for(int i=0;i<cargoList.size();i++){
		if(cargoList.at(i)->getName() == name ){
			remove(cargoList.begin(), cargoList.end(), cargoList.at(i));
			cout<<name<<"has been removed from the spacecraft"<<endl;
		}
	}
}

void Spacecraft::missionComplete() {
	cout<<"The spacecraft has reached earth, successfully."<<endl;
	reused++;
}

void Spacecraft::attach(Thruster* thruster) {
	this->thrustersList.push_back(thruster);
}

void Spacecraft::detach(Thruster* thruster) {
	remove(thrustersList.begin(), thrustersList.end(), thruster);
}

int Spacecraft::getCurrtHight(){
	return 0;
}

void Spacecraft::setCurrtHight(int currtHight){

}

void Spacecraft::print(){
	int i = 0;
	double w = 0;
	cout<<"Cargo Information:"<<endl;
	for(Cargo* item: cargoList){
		cout<<i<<".item "<<item->getName()<<"weighs "<<item->getWeight()<<endl;
		w +=item->getWeight();
		i++;
	}
	cout<<"The total amount of weight: "<<w<<"Kg"<<endl;
	cout<<"Parachute Information:"<<endl;
	for(Parachute* item: parachuteList){
		cout<<item->getId()<<" success rate:"<<item->getSuccessRate()<<"0%"<<endl;
	}
}

void Spacecraft::attachParachute(Parachute* parachute){
	parachuteList.push_back(parachute);
	cout<<parachute->getId()<<" has been added to the spacecraft"<<endl;
}

void Spacecraft::detachParachute(string id){
	for(int i=0;i<parachuteList.size();i++){
		if(parachuteList.at(i)->getId() == id ){
			remove(parachuteList.begin(), parachuteList.end(), parachuteList.at(i));
			cout<<id<<"has been removed from the spacecraft"<<endl;
		}
	}
}