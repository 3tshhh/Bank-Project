#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;



class Person
{
protected:
    int id;
    string name,password;

public:
    Person(){this->id = 0;}
    Person (int id,string name,string password){
        this->id=id;
        this->name = name;
        this->password = password;
    }
};

#endif
