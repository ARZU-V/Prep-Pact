#pragma once
#include "Vehicle.h"
class Car: public Vehicle{
    public:
        Car(int number):Vehicle(VehicleType::CAR,number){
            
        }
};