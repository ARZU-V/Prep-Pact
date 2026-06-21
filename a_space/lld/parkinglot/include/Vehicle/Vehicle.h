#pragma once
#include "VehicleType.h"


class Vehicle{
private:
    VehicleType vehicle;
    int vehicleNmber;
public:
    Vehicle(VehicleType vehicle, int vehicleNumber){
        this->vehicle = vehicle;
        this->vehicleNmber = vehicleNmber;
    } 

    int getVehicleNumber(){
        return vehicleNmber;
    }

    VehicleType getVehicleType(){
        return vehicle;
    }
};