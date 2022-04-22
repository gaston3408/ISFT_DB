#ifndef STUDENT_H
#define STUDENT_H

#include "Identifier.hpp"
#include <iostream>
using namespace std;

class Student: public Identifier
{
private:
    string name;
    string surname;
public:
    Student(){};

    void setName(string name);
    void setSurname(string surname);
    string getName() const;
    string getSurname() const;

    ~Student(){};
};

#endif
