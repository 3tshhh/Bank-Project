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

    void addEmployee(Employee& employee) {

        allEmployees.push_back(employee);

    }

    Employee* searchEmployee(int id) {

        for (auto& i : allEmployees) {
            if (i.getId() == id) {

                return &i;
            }
        }
        return nullptr;

    }



    void editEmployees(int id, string name, string password, double salary) {
        Employee* s = searchEmployee(id);
        s->setSalary(salary);
        s->setName(name);
        s->setPassword(password);
    }
    void listEmployees() {
        for (auto& i : allEmployees)
            i.display();
    }

};

static vector<Admin> allAdmins;