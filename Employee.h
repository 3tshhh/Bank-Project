#pragma once 
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
using namespace std;


class Employee : public Person{

protected:
    double salary;
public:
    Employee() {
        this->salary = 0;
    }

    Employee(string name,string password,int id,double salary):Person(id,name,password)
    {
        setSalary(salary);
    }


    void setSalary(double salary) {
        if(Validation::isSalary(salary)){
            this->salary = salary;
        }
        else
            cout<<"salary must be greater than 5000\n";
    }
    double getSalary() {
        return salary;
    }
    void display(){
        Person::printinfo();
        cout<<"Salary : "<<getSalary()<<endl;
        cout << "===================" << endl;
    }

};

