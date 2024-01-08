#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class ObserverSubject {
public:
    virtual void addObserver(T* observer) = 0;
    virtual void removeObserver(T* observer) = 0;
    virtual void notifyObservers() = 0;
};
