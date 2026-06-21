#pragma once
#include "Vehicle.h"

class Bike: public Vehicle{
    public:
        Bike(int number):Vehicle(VehicleType::BIKE,number){
            
        }
};