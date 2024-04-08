#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"
#include "Validation.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class Admin : public Employee{

public:
    Admin() {
        this->salary = 0;
    }

    Admin(string name,string password,int id,double salary):Employee(name,password,id,salary){}

};

#endif
