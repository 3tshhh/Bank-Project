#pragma once
#include <iostream>
#include "Client.h"
#include "Admin.h"
#include <vector>
#include <string>
#include "Person.h"
using namespace std;
class AdminManager
{
public:
	static void printEmployeeMenu() {
            cout << "1) New Client" << endl;
            cout << "2) List All Clients" << endl;
            cout << "3) Search for Client" << endl;
            cout << "4) Edit Client Info" << endl;
        }
    static Admin* login(int id, string password) {
        if (id == id && password = "password") {
            return new Admin(id, password);
        }
        else
            return false;
    }
    static bool AdminOptions(Client* client) {

    }
};

