#pragma once
#include <iostream>
#include <vector>

// Model
class StudentModel {
private:
    std::string name;
    int age;

public:
    StudentModel(const std::string& n, int a) : name(n), age(a) {}

    std::string getName() const {
        return name;
    }

    void setName(const std::string& n) {
        name = n;
    }

    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }
};
