#pragma once 
#include <iostream>
#include <string>
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "DataSourceInterface.h"



class FileManager: public DataSourceInterface {
private:
    ofstream addClient;
    ifstream rClient;
public:
    FileManager() : addClient("Clients.txt",ios::app), rClient("Clients.txt") {}

    void addCid(int id){
        if(id<10)
        addClient <<id<<"#";
    }
};
