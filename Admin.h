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

    // Function to add a client
    void addClient(Client& client) {
        clients.push_back(client);
    }

    // Function to search for a client by id
    Client* searchClient(int id) {
        for (auto& client : clients) {
            if (client.id == id) {
                return &client;
            }
        }
        return nullptr;
    }


    // Function to list all clients
    void listClients() {
        cout << "Clients List:" << endl;
        for (const auto& client : clients) {
            cout << "ID: " << client.id << ", Name: " << client.name << ", Balance: " << client.balance << endl;
        }
    }


    // Function to edit a client's information
    void editClient(int id, string name, string password, double balance) {
        for (auto& client : clients) {
            if (client.id == id) {
                client.name = name;
                client.password = password;
                client.balance = balance;
                break;
            }
        }
    }

    // Function to add an employee
    void addEmployee(Employee& employee) {
        employees.push_back(employee);
    }


    // Function to search for an employee by id
    Employee* searchEmployee(int id) {
        for (auto& employee : employees) {
            if (employee.id == id) {
                return &employee;
            }
        }
        return nullptr;
    }


    // Function to list all employees
    void listEmployees() {
        cout << "Employees List:" << endl;
        for (const auto& employee : employees) {
            cout << "ID: " << employee.id << ", Name: " << employee.name << ", Salary: " << employee.salary << endl;
        }
    }


    // Function to edit an employee's information
    void editEmployee(int id, string name, string password, double salary) {
        for (auto& employee : employees) {
            if (employee.id == id) {
                employee.name = name;
                employee.password = password;
                employee.salary = salary;
                break;
            }
        }
    }
};

