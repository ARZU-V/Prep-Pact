#pragma once

#include <string>

#include "Vehicle/Vehicle.h"
#include "Vehicle/VehicleType.h"

class ParkingSpot {
private:
    std::string parkingID;
    VehicleType vehicleType;
    Vehicle* parkedVehicle;

public:
    ParkingSpot(
        const std::string& id,
        VehicleType type
    )
        : parkingID(id),
          vehicleType(type),
          parkedVehicle(nullptr)
    {
    }

    bool parkVehicle(Vehicle* vehicle) {

        if (
            parkedVehicle == nullptr &&
            vehicle->getVehicleType() == vehicleType
        ) {
            parkedVehicle = vehicle;
            return true;
        }

        return false;
    }

    void removeVehicle() {
        parkedVehicle = nullptr;
    }

    bool isSpotAvailable() const {
        return parkedVehicle == nullptr;
    }

    bool isOccupied() const {
        return parkedVehicle != nullptr;
    }

    std::string getId() const {
        return parkingID;
    }

    VehicleType getVehicleType() const {
        return vehicleType;
    }

    Vehicle* getParkedVehicle() const {
        return parkedVehicle;
    }
};