#pragma once
#include "tv.h"

class SonyTV : public TV {
public:
    void turnOn() const override {
        std::cout << "Sony TV is ON" << std::endl;
    }

    void turnOff() const override {
        std::cout << "Sony TV is OFF" << std::endl;
    }

    void setChannel(int channel) const override {
        std::cout << "Sony TV channel set to " << channel << std::endl;
    }
};