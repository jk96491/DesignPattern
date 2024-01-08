#pragma once
#include "tv.h"

class SamsungTV : public TV {
public:
    void turnOn() const override {
        std::cout << "Samsung TV is ON" << std::endl;
    }

    void turnOff() const override {
        std::cout << "Samsung TV is OFF" << std::endl;
    }

    void setChannel(int channel) const override {
        std::cout << "Samsung TV channel set to " << channel << std::endl;
    }
};