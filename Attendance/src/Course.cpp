#include "../include/Course.hpp"
#include <iostream>
using namespace std;

void Course::setName(string name)
{
    this->name = name;
}

string Course::getName() const
{
    return this->name;
}
