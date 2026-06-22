#pragma once

#include <exception>

class ParkingSpotNotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "No parking spot available.";
    }
};