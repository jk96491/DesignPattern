#include "student_controller.h"

int main() {
    // Model
    StudentModel* model = new StudentModel("John Doe", 20);

    // View
    StudentView* view = new StudentView();

    // Controller
    StudentController* controller = new StudentController(model, view);

    // 초기 상태 출력
    controller->updateView();

    // 모델 업데이트
    controller->setStudentName("ssd Dtr");
    controller->setStudentAge(22);

    // 업데이트된 상태 출력
    controller->updateView();

    delete model;
    delete view;
    delete controller;

    return 0;
}
