#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;

CrewDragonSpacecraft::CrewDragonSpacecraft() {
	cout<<"CrewDragonSpacecraft has been created"<<endl;
}

double CrewDragonSpacecraft::currentWeight() {
	double weight=0;
	for(Cargo* item: spacecraftCargo){
		weight += item->getWeight();
	}
	for(CrewMember* item: spacecraftCrew){
		weight += item->getWeight();
	}
	return weight;
}

int CrewDragonSpacecraft::getCurrentHeight() {
	return this->currentHeight;
}

void CrewDragonSpacecraft::setCurrentHeight(int currtHight) {
	this->currentHeight = currtHight;
}

void CrewDragonSpacecraft::enterCrewMember(CrewMember* member){
	spacecraftCrew.push_back(member);
	cout<<member->getName()<<" has borded the spacecraft"<<endl;
}

void CrewDragonSpacecraft::removeCrewMember(string id){
	for(int i=0;i<spacecraftCrew.size();i++){
		if(spacecraftCrew.at(i)->getName() == id ){
			remove(spacecraftCrew.begin(), spacecraftCrew.end(), spacecraftCrew.at(i));
			cout<<id<<"has left the spacecraft"<<endl;
		}
	}
}

void CrewDragonSpacecraft::crewInfo(){
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tCrew Information:"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	double w = 0;
	int i=0;
	for(CrewMember* item: spacecraftCrew){
		cout<<i<<item->getName()<<" weight: "<<item->getWeight()<<" kg"<<endl;
		w += item->getWeight();
		i++;
	}
	cout<<endl;
	cout<<"Total crew weight is: "<<w<<endl;
	cout<<endl;
}