#pragma once
#include "tv.h"

class RemoteControl {
protected:
    TV* tv;

public:
    RemoteControl(TV* television) : tv(television) {}

    virtual void pressOn() const = 0;
    virtual void pressOff() const = 0;
    virtual void setChannel(int channel) const = 0;
    virtual ~RemoteControl() {}
};

class BasicRemote : public RemoteControl {
public:
    BasicRemote(TV* television) : RemoteControl(television) {}

    void pressOn() const override {
        cout << "Remote: Pressed ON" << endl;
        tv->turnOn();
    }

    void pressOff() const override {
        cout << "Remote: Pressed OFF" << endl;
        tv->turnOff();
    }

    void setChannel(int channel) const override {
        cout << "Remote: Set channel to " << channel << endl;
        tv->setChannel(channel);
    }
};