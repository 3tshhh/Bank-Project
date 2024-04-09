#pragma once
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

class DataSourceInterface
{
public:
    virtual void AddClient(Client c) = 0;
    virtual void AddEmployee(Employee e) = 0;
    virtual void AddAdmin(Admin a) = 0;
    virtual void getAllClients() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

