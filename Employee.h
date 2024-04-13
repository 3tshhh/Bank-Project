#pragma once
#include <iostream>
#include "Person.h"

using namespace std;


class Employee : public Person {

protected:
    double salary;
public:
    Employee() {
        this->salary = 0;
    }

    Employee(string name, string password, int id, double salary) :Person(id, name, password)
    {
        setSalary(salary);
    }


    virtual void setSalary(double salary) {
        if (Validation::isSalary(salary)) {
            this->salary = salary;
        }
        else
            cout << "Salary must be greater than 5000\n";
    }
    double getSalary() {
        return salary;
    }

    
    void display() {
        Person::printinfo();
        cout << "Salary : " << getSalary() << endl;
        cout << "===================" << endl;
    }

};
