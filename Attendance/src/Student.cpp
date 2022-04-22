#include "../include/Student.hpp"
#include <iostream>
using namespace std;

void Student::setName(string name)
{
    this->name = name;
}

void Student::setSurname(string surname)
{
    this->surname = surname;
}

string Student::getName() const
{
    return this->name;
};

string Student::getSurname() const
{
    return this->surname;
}
