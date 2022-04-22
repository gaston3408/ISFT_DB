#include "../include/AttendanceManagement.hpp"
#include <iostream>
#include <fstream>

using namespace std;

string AttendanceManagement::getAttendances()
{
    return this->attendances;
}

void AttendanceManagement::setAttendances()
{
    ifstream file("attendance.csv");
    string line;

    while (getline(file, line))
    {
        this->attendances = this->attendances + line + "\n";
    }

    file.close();
}

void AttendanceManagement::takeAttendance(Student* student, Course* course, string date, bool headers)
{
    ofstream file;
    file.open("attendance.csv");

    file << this->getAttendances();
    file << student->getId();
    file << ",";
    file << student->getName();
    file << ",";
    file << student->getSurname();
    file << ",";
    file << course->getId();
    file << ",";
    file << course->getName();
    file << ",";
    file << date;
    file.close();

    this->setAttendances();
}

void AttendanceManagement::showAttendance()
{
    ifstream file("attendance.csv");
    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
