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


    void AddEmployee(Employee e){
        FilesHelper::saveEmployee(e, "Employees.txt","Employeelastid.txt" );
    }

    void AddAdmin(Admin a) {
        FilesHelper::saveEmployee(a, "Admins.txt","Adminlastid.txt" );
    }

    vector <Client> getAllClients() {
        output.open("Clients.txt");

        vector <Client> clients;
        while (getline(output, line))
            clients.push_back(Parser::parseToClient(line));
        return clients;
    }


    vector <Employee> getAllEmployees(){
        output.open("Employees.txt");

        vector <Employee> Employees;
        while (getline(output, line))
            Employees.push_back(Parser::parseToEmployee(line));
        return Employees;
    }

    vector <Admin> getAllAdmins() {
        output.open("Admins.txt");

        vector <Admin> Admins;
        while (getline(output, line))
            Admins.push_back(Parser::parseToAdmin(line));
        return Admins;
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

