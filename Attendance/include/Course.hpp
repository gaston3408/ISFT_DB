#ifndef COURSE_H
#define COURSE_H

#include "Identifier.hpp"
#include <iostream>
using namespace std;

class Course: public Identifier
{
private:
    string name;
public:
    Course(){};

    void setName(string name);
    string getName() const;
    
    ~Course(){};
};

#endif
