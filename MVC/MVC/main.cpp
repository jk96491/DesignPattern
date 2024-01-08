#include "student_controller.h"

int main() {
    // Model
    StudentModel* model = new StudentModel("John Doe", 20);

    // View
    StudentView* view = new StudentView();

    // Controller
    StudentController* controller = new StudentController(model, view);

    // �ʱ� ���� ���
    controller->updateView();

    // �� ������Ʈ
    controller->setStudentName("ssd Dtr");
    controller->setStudentAge(22);

    // ������Ʈ�� ���� ���
    controller->updateView();

    delete model;
    delete view;
    delete controller;

    return 0;
}
