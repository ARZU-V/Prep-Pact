#pragma once

#include <string>

class TicketIdGenerator {
private:
    static int counter;

public:
    static std::string generate() {
        return "TKT-" + std::to_string(++counter);
    }
};