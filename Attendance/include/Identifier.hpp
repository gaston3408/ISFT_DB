#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <stdlib.h>
#include<time.h>

class Identifier
{
private:
    int id;
public:
    Identifier(){}
    ~Identifier(){};

    int getId() const
    { 
        return id;
    }

    void setId(int id)
    { 
        this->id = id;
    }

};

#endif
