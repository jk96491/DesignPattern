#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Logger {
private:
    static Logger* instance;
    std::ofstream logFile;

    Logger()
    {
        logFile.open("application.log", std::ios::out | std::ios::app);
    }

public:
    // �̱��� �ν��Ͻ��� ������ �� �ִ� ���� �޼��带 �����մϴ�.
    static Logger* getInstance()
    {
        if (!instance)
        {
            instance = new Logger();
        }
        return instance;
    }

    void log(const std::string& message)
    {
        logFile << message << std::endl;
    }

    ~Logger()
    {
        if (logFile.is_open()) {
            logFile.close();
        }
    }
};
