#include <iostream>
#include "Spacecraft.h"

#include "Cargo.h"
#include "CrewMember.h"

#include "CrewDragonSpacecraft.h"
#include "DragonSpacecraft.h"

#include "ThrusterCreator.h"
#include "DracoCreator.h"
#include "SuperDracoCreator.h"
#include "Thruster.h"
#include "Draco.h"
#include "SuperDraco.h"

#include "ParachuteCreator.h"
#include "Mark2Creator.h"
#include "Mark3Creator.h"
#include "Parachute.h"
#include "Mark3Parachute.h"
#include "Mark2Parachute.h"

#include "ParachuteSystemObserver.h"
#include "Mark2ParachuteSystemObserver.h"
#include "Mark3ParachuteSystemObserver.h"

using namespace std;

int main()
{
    /*Testing*/
    int spacecraftOption = 0;
    Spacecraft* spacecraft = NULL;
    cout<<"Building/Testing Spacecraft Configurations"<<endl;

    cout<<"Which type of Spacecraft do you want to use?"<<endl;
    cout<<"0.Dragon Spacecraft \t 1.CrewDragon Spacecraft"<<endl;
    cin>>spacecraftOption;
    if(spacecraftOption>1 || spacecraftOption < 0){
        while(spacecraftOption>1 || spacecraftOption<0){
            cout<<"Please enter a valid option"<<endl;
            cin>>spacecraftOption;
        }
    }
    cout<<"The selected option is ";
    if(spacecraftOption==0)
    {
         cout<<spacecraftOption<<".Dragon Spacecraft"<<endl;
    }else if(spacecraftOption==1)
    {
        cout<<spacecraftOption<<"CrewDragon Spacecraft"<<endl;
    }
   

    if(spacecraftOption == 0){
        spacecraft = new DragonSpacecraft();
    }
    else{
        spacecraft = new CrewDragonSpacecraft();
    }

    

    while(true){
        int cargoOption = 0;
        cout<<"Now please select the cargo to be loaded on the spacecraft.\n 0.Food Supplies\t 1.Spacecraft Equipment tools\t  2. ISS cargo(classified)\t 3.Oxygen tanks"<<endl;
        cin>>cargoOption;
        int p = 0;
        int cargoWeight =0;
        if(cargoOption > 3 || cargoOption < 0){
            while(cargoOption>3 || cargoOption<0){
                cout<<"Please enter a valid option"<<endl;
                cin>>cargoOption;
            }
        }
        cout<<"The selected option is "<<cargoOption<<endl;
        
        if(cargoOption == 0){
            string name = "FoodSupply: Label";
            Cargo* cargo = new Cargo();
            name = name + to_string(p);
            cout<<"How much does the cargo weigh?"<<endl;
            cin>>cargoWeight;
            if(cargoWeight<0){
                while(cargoWeight<0){
                    cout<<"Please enter valid weight"<<endl;
                    cin>>cargoWeight;
                }
            }
            // cargo->setName(name);
            // cargo->setWeight(cargoWeight);
            spacecraft->attachCargo(new Cargo(name, cargoWeight));
        }
        else if(cargoOption == 1){
            string name = "Spacecraft Equipment: Label";
            Cargo* cargo = new Cargo();
            name = name + to_string(p);
            cargo->setName(name);
            cout<<"How much does the cargo weigh?"<<endl;
            cin>>cargoWeight;
            if(cargoWeight<0){
                while(cargoWeight<0){
                    cout<<"Please enter valid weight"<<endl;
                    cin>>cargoWeight;
                }
            }
            //cargo->setWeight(cargoWeight);
            // spacecraft->attach(new Cargo(name, cargoWeight));
            spacecraft->attachCargo(new Cargo(name, cargoWeight));
        }
        bool doneCargo;
        cout<<"Are you done adding cargo? (1:yes/0:no)"<<endl;
        cin>>doneCargo;
        if(doneCargo == true){
            break;
        }
    }

    bool parachuteOption;
    cout<<"Please select the type of parachute you want to use\n0.Mark2 Parachutes\t 1.Mark3 Parachutes"<<endl;
    cin>>parachuteOption;
    if(parachuteOption == 0){
        Mark2Creator* mark2Creator; // =new Mark2Creator();
        for(int i=0;i<4;i++){
            spacecraft->attachParachute(mark2Creator->createParachute("Mark2Parchute"+to_string(i)));
        }
    }
    else if(parachuteOption == 1){
        Mark3Creator* mark3Creator; // =new Mark2Creator();
        for(int i=0;i<4;i++){
            spacecraft->attachParachute(mark3Creator->createParachute("Mark3Parchute"+to_string(i)));
        }
    }
    spacecraft->print();
    return 0;
}