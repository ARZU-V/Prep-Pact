#pragma once

#include <string>
#include <chrono>

#include "Vehicle/VehicleType.h"
#include "TicketGenerator.h"

class Ticket {
private:
    std::string ticketID;
    std::string parkingSpotID;

    VehicleType vehicleType;

    std::chrono::system_clock::time_point entryTime;
    std::chrono::system_clock::time_point exitTime;

    double charges;

public:
    Ticket(
        VehicleType vehicleType,
        const std::string& parkingSpotID
    )
        : ticketID(TicketIdGenerator::generate()),
          parkingSpotID(parkingSpotID),
          vehicleType(vehicleType),
          entryTime(std::chrono::system_clock::now()),
          charges(0.0)
    {
    }

    void closeTicket(double amount) {
        charges = amount;
        exitTime = std::chrono::system_clock::now();
    }

    std::string getTicketID() const {
        return ticketID;
    }

    std::string getParkingSpotID() const {
        return parkingSpotID;
    }

    VehicleType getVehicleType() const {
        return vehicleType;
    }

    double getCharges() const {
        return charges;
    }

    std::chrono::system_clock::time_point getEntryTime() const {
        return entryTime;
    }

    std::chrono::system_clock::time_point getExitTime() const {
        return exitTime;
    }
};