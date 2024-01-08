#include "logger.h"

Logger* Logger::instance = nullptr;

int main() {
    Logger* logger = Logger::getInstance();

    logger->log("Application started.");

    Logger* anotherLogger = Logger::getInstance();
    anotherLogger->log("User logged in.");

    return 0;
}
