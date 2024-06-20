#pragma once
#include <iostream>
#include<string>
#include"Admin.h"
#include <vector>
using namespace std;
class AdminManager : public Person   {
     static vector<Admin>Admins;
     static vector<Admin> ::iterator It;
public:
    static void printaAdminMenu() {
        cout << "1) New Employee" << endl;
        cout << "2) listEmployees" << endl;
        cout << "3) searchEmployee" << endl;
        cout << "4) editEmployees" << endl;
    }

    static Admin* login(int id, string password) {
        for (It = Admins.begin(); It != Admins.end(); It++) {
            if (It->getId() == id && It->getPassword() == password){
                cout << "the id and passward are correct" << endl;
                return;
            }
        }
        cout << " there is something wrong " << endl;
    }

    static bool AdminOptions(Client* client) {
        int choice;
        switch (choice) 
        {
        case 1:
        {
            string name ;
            int id, balance;
            cout << " Add employee :" << endl;
            cin >> name >> id >> balance;
            Admin a;
            a.addEmployee(a);
            cout << "the Employee added Successfully " << endl;
        }
        break;
        case 2:
        {
            cout << "List Employee :" << endl;
            Admin a;
            a.listEmployees();
            cout << " the Employees listed successfully " << endl;
        }
        break;
        case 3:
        {
            int id;
            cout << " write the id here to search for the Employee you want" << endl;
            cin >> id;
            Admin a;
            a.searchEmployee(id);
            if (a.getId() == id) {
                cout << " you founded the Employee successfully ";
            }
            else {
                cout << "Invalid Id" << endl;
            }
        }
        case 4:
        {
            cout << " enter  new name " << endl;
            
        }
        default:
            break;
        }
    }
};