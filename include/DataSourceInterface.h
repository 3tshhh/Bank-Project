#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

class DataSourceInterface
{
public:
 virtual void AddClient(Client) = 0;
 virtual void AddEmployee(Employee) = 0;
 virtual void AddAdmin(Admin) = 0;
 virtual void getAllClients() = 0;
 virtual void getAllEmployees() = 0;
 virtual void getAllAdmins() = 0;
 virtual void removeAllClients() = 0;
 virtual void removeAllEmployees() = 0;
 virtual void removeAllAdmins() = 0;

};

#endif
