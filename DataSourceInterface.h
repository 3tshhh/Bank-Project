#pragma once
#include <iostream>
#include <string>


class DataSourceInterface
{
public:
    virtual void AddClient() = 0;
    virtual void AddEmployee() = 0;
    virtual void AddAdmin() = 0;
    virtual void getAllClients() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

