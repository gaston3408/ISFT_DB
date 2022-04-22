#include "./include/AttendanceManagement.hpp"
#include "./include/Student.hpp"
#include "./include/Course.hpp"
#include<cstdlib>
#include<ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));

    Student* student = new Student();
    student->setId(1+rand()%(101-1));
    student->setName("Juan");
    student->setSurname("Perez");

    Course* course = new Course();
    course->setId(1+rand()%(101-1));
    course->setName("Algebra");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2022-04-20", true);

    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}