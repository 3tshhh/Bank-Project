#pragma once
#include <iostream>
#include <vector>
#include "Person.h"
#include "Parser.h"
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

    void addClient(Client& client) {
        allClients.push_back(client);
    }

    Client* searchClient(int id) {
        Client s;
        for(Client &i:allClients)
            if (i.getId() == id)
            {
                return &i;
            }
        return nullptr;
    }

    void listClient() {
        for (Client& i : allClients)
            i.display();
    }

    void editClient(int id, string name, string password, double balance) {
        Client* s = searchClient(id);
        s->setBalance(balance);
        s->setName(name);
        s->setPassword(password);
        return;
    }

    void display() {
        Person::printinfo();
        cout << "Salary : " << getSalary() << endl;
        cout << "===================" << endl;
    }


};

static vector<Employee> allEmployees;