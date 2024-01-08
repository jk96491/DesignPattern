#pragma once
#include "student_view.h"

class StudentController {
private:
    StudentModel* model;
    StudentView* view;

public:
    StudentController(StudentModel* m, StudentView* v) : model(m), view(v) {}

    void setStudentName(const std::string& name) {
        model->setName(name);
    }

    void setStudentAge(int age) {
        model->setAge(age);
    }

    void updateView() {
        view->printStudentDetails(model->getName(), model->getAge());
    }
};