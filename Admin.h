#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Admin : public Employee {

public:
    Admin() {
        this->salary = 0;
    }

    Admin(string name, string password, int id, double salary) :Employee(name, password, id, salary) {}

};
