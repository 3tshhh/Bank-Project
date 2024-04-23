#pragma once
#include <iostream>
#include "Client.h"
#include <vector>
#include <string>
#include "Employee.h"
#include "Person.h"
using namespace std;
class EmployeeManager
{
public:
    static void printEmployeeMenu() {
        cout << "1) New Client" << endl;
        cout << "2) List All Clients" << endl;
        cout << "3) Search for Client" << endl;
        cout << "4) Edit Client Info" << endl;
    }
    static void newClient(Employee* employee) {
        allClients.push_back(employee);
    }

    static void listAllClients(Employee* employee) {
        for (auto& i : allClients)
            i.display();
    }


    static void searchForClient(Employee* employee, int id) {
        Client s;
        for (auto& i : allClients)
            if (i.getId() == id)
            {
                return &i;
            }
       /* return NULL;*/
    }
    static void editClientInfo(Employee* employee, int id, string name, string password, double balance) {
        Client* s /*= searchClient(id)*/;
        s->setBalance(balance);
        s->setName(name);
        s->setPassword(password);
        return;
    }

    static Employee* login(int id, string password) {
            if (id == id && password == "password") {
                return new Employee(id, password);
            }
            else {
                return nullptr;
            }
    }
    static bool employeeOptions(Client* client) {
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
            case 1:
                newClient(Employee);
                break;
            case 2:
                listAllClients(employee);
                break;
            case 3:
                searchForClient(employee);
                break;
            case 4:
                editClientInfo(employee);
                break;
            case 5:
                cout << "Logging out" << endl;
                return false;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
    }
};