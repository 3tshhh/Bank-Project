#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Client.h"
#include "Parser.h"
using namespace std;
class FilesHelper{
protected:
	static string line;
	static ofstream input;
	static ifstream output;
	
public:
	
	static void saveLast(string filename, int id) {
		ofstream input;
		input.open(filename);
		input << id;
		input.close();
	}
	static int getLast(string filename) {
		ifstream output;
		output.open(filename);
		string q;
		output >> q;
		output.close();
		return stoi(q);
	}
	static void saveClient(Client c) {

		input.open("Clients.txt", ios::app);
		input << c.getId() << "#" << c.getBalance() << "#"; 
		input << c.getName() << "#" << c.getPassword() << endl;
		input.close();

		saveLast("Clientlastid.txt", c.getId());
	}
	static void saveEmployee(Employee &e,string filename, string lastidfile) {
		ofstream input;
		Employee* dad;
		
		input.open(filename, ios::app);
		if(filename[0] == 'E')
		{
			dad = new Employee;
			input << "Employee";
		}
		else if(filename[0] == 'A'){
			dad = new Admin;
			input << "Admin";
		}
		dad = &e;
		input << dad->getId() << "#" << dad->getSalary() << "#";
		input << dad->getName() << "#" << dad->getPassword() << endl;
		saveLast(lastidfile, dad->getId());
		input.close();
	}
	static void getClients() {
		output.open("Clients.txt");

		vector <Client> clients;
		while (getline(output, line))
			clients.push_back(Parser::parseToClient(line));
		for (auto& i : clients)
			i.display();
	}
	static void getEmployees() {
		output.open("Employees.txt");

		vector <Employee> Employees;
		while (getline(output, line))
			Employees.push_back(Parser::parseToEmployee(line));
		for (auto &i : Employees)
			i.display();
	}
	static void getAdmins() {
		output.open("Admins.txt");

		vector <Admin> Admins;
		while (getline(output, line))
			Admins.push_back(Parser::parseToAdmin(line));
		for (auto& i : Admins)
			i.display();
	}
	static void clearFile(string filename, string lastid) {
		ofstream clear;

		clear.open(filename);
		clear.clear();
		clear.close();

		clear.open(lastid);
		clear.clear();
		clear.close();
	}
};