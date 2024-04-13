#pragma once
#include <iostream>
#include <vector>
#include "Client.h"
#include "Admin.h"
#include "Employee.h"

class DataSourceInterface
{
public:
    virtual void AddClient(Client &c) = 0;
    virtual vector <Client> getAllClients() = 0;
    virtual void AddEmployee(Employee e) = 0;
    virtual void AddAdmin(Admin a) = 0;
    
    virtual vector <Employee> getAllEmployees() = 0;
    virtual vector <Admin> getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

