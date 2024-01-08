#include "stock.h"

class StockInvestor : public StockObserver {
private:
    std::string observerName;

public:
    StockInvestor(const std::string& name) : observerName(name) {}

    void update(const std::string& stockName, double price) override {
        std::cout << "Observer " << observerName << ": " << stockName << " price updated to " << price << std::endl;
    }
};

int main() {
    StockInfo* googleStock = new StockInfo("GOOGLE", 1500.0);

    StockInvestor* investor1 = new StockInvestor("Investor 1");
    StockInvestor* investor2 = new StockInvestor("Investor 2");

    googleStock->addObserver(investor1);
    googleStock->addObserver(investor2);

    googleStock->setPrice(1600.0);

    cout << endl;

    googleStock->setPrice(1800.0);

    delete investor1;
    delete investor2;
    delete googleStock;

    return 0;
}
