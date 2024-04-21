#pragma once
#include "DataSourceInterface.h"
#include "Parser.h"
#include <fstream>
#include <sstream>
#include "FilesHelper.h"


class FileManager : public DataSourceInterface {
private:
    static string line;
    static ofstream input;
    static ifstream output;
public:
    FileManager(){}

    void AddClient(Client &c){
        FilesHelper::saveClient(c);
    }


    void AddEmployee(Employee &e){
        FilesHelper::saveEmployee(e, "Employees.txt","Employeelastid.txt" );
    }

    void AddAdmin(Admin &a) {
        FilesHelper::saveEmployee(a, "Admins.txt","Adminlastid.txt" );
    }

    vector <Client> getAllClients() {
        FilesHelper::getClients();
        return allClients;
    }


    vector <Employee> getAllEmployees(){
        FilesHelper::getEmployees();
        return allEmployees;
    }

    vector <Admin> getAllAdmins() {
        FilesHelper::getAdmins();
        return allAdmins;
    }

    void removeAllClients() { 
        FilesHelper::clearFile("Clients.txt", "Clientlastid.txt");
    }

    void removeAllEmployees(){
        FilesHelper::clearFile("Employees.txt", "Employeelastid.txt");
    }

    void removeAllAdmins(){
        FilesHelper::clearFile("Admins.txt", "Adminlastid.txt");
    }
};

