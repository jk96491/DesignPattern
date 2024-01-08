#include "student_model.h"

class StudentView {
public:
    void printStudentDetails(const std::string& name, int age) {
        std::cout << "Student: " << name << ", Age: " << age << std::endl;
    }
};