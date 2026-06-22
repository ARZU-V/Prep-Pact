#pragma once

#include <string>
#include <vector>

#include "ParkingSpot.h"
#include "Vehicle/VehicleType.h"

class ParkingFloor {
private:
    std::string floorID;
    std::vector<ParkingSpot> spots;

public:
    ParkingFloor(
        const std::string& floorID,
        const std::vector<ParkingSpot>& spots
    )
        : floorID(floorID),
          spots(spots)
    {
    }

    ParkingSpot* findAvailableSpot(
        VehicleType vehicleType
    ) {
        for (auto& spot : spots) {

            if (
                spot.isSpotAvailable() &&
                spot.getVehicleType() == vehicleType
            ) {
                return &spot;
            }
        }

        return nullptr;
    }

    const std::vector<ParkingSpot>& getSpots() const {
        return spots;
    }

    std::string getFloorID() const {
        return floorID;
    }
};