#include "carShowroom.h"
#include "iostream"

void CarShowroom::manufacture()
{
    carBody.assembleBody();
    engine.AddEngine();
    carInterior.AddInterior();
    std::cout<<"Car is Ready"<<std::endl;
}