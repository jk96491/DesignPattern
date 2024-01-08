#pragma once
#include <iostream>
#include <string>
using namespace std;

class TV {
public:
    virtual void turnOn() const = 0;
    virtual void turnOff() const = 0;
    virtual void setChannel(int channel) const = 0;
    virtual ~TV() {}
};
