#pragma once
#include "Vehicle.h"

class Truck: public Vehicle{
    public:
        Truck(int number):Vehicle(VehicleType::TRUCK,number){
            
        }
};