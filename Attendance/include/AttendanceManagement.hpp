#include <iostream>
#include <fstream>
#include "Student.hpp"
#include "Course.hpp"

using namespace std;

class AttendanceManagement
{
private:
    string attendances;
public:
    AttendanceManagement(){
        ifstream file("attendance.csv");
        string line;

        while (getline(file, line))
        {
            this->attendances = this->attendances + line + "\n";
        }

        file.close();
    };
    ~AttendanceManagement(){};

    string getAttendances();
    void setAttendances();
    void takeAttendance(Student* student, Course* course, string date, bool headers);
    void showAttendance();
};
