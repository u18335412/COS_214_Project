#include "TestRockets.h"

TestRockets::TestRockets()
{

}

vector<Rocket*> TestRockets::testRockets()
{
    while(true)
    {
        int choice;
        cout<<"Select a rocket that you want to simulate(0: Falcon9 or 1: FalconHeavy or 3: to cancel): ";
        cin>>choice;

        if(choice==0)
        {
            RocketBuilderDirector builderDirector;
            FalconNineBuilder falconNineBuilder;
            builderDirector.setBuilder(&falconNineBuilder);
            builderDirector.buildFalconNine("FLCHVY01");
            cout <<"Falcon9 ID: " << falconNineBuilder.getRocket()->getName() << endl;
            cout<<endl;
            if(falconNineBuilder.getRocket()->test()==true)
            {
                rocketList.push_back(falconNineBuilder.getRocket());
            }
        }
        else if(choice==1)
        {
            RocketBuilderDirector builderDirector;
            FalconHeavyBuilder falconHeavyBuilder;
            builderDirector.setBuilder(&falconHeavyBuilder);
            builderDirector.buildFalconHeavy("FLCHVY02");
            cout <<"FalconHeavy ID: " << falconHeavyBuilder.getRocket()->getName() << endl;
            cout<<endl;
            if(falconHeavyBuilder.getRocket()->test()==true)
            {
                rocketList.push_back(falconHeavyBuilder.getRocket());
            }
        }
        else{
            break;
        }
    }
}

void TestRockets::beforeLaunch()
{

}

void TestRockets::AfterLaunch()
{

}

void TestRockets::ReleaseSpaceCraft()
{

}

void TestRockets::ReleaseSatellites()
{
    
}

TestRockets::~TestRockets()
{}