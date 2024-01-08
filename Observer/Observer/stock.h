#pragma once
#include "base_subject.h"

class StockObserver {
public:
    virtual void update(const std::string& stockName, double price) = 0;
};

class StockInfo : public ObserverSubject<StockObserver> {
private:
    std::vector<StockObserver*> observers;
    std::string stockName;
    double price;

public:
    StockInfo(const std::string& name, double initialPrice) : stockName(name), price(initialPrice) {}

    void addObserver(StockObserver* observer) override 
    {
        observers.push_back(observer);
    }

    void removeObserver(StockObserver* observer) override 
    {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end()) {
            observers.erase(it);
        }
    }

    void notifyObservers() override 
    {
        for (StockObserver* observer : observers) {
            observer->update(stockName, price);
        }
    }

    void setPrice(double newPrice) {
        if (price != newPrice) {
            price = newPrice;
            notifyObservers();
        }
    }

    double getPrice() const {
        return price;
    }
};
