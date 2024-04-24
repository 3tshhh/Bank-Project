#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
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
		int q;
		output >> q;
		output.close();
		return q;
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

		int id = getLast(lastidfile);
		input.open(filename, ios::app);

		if(filename[0] == 'E')
		{
			dad = new Employee;
		}
		else if(filename[0] == 'A'){
			dad = new Admin;
		}


		dad = &e;
		input << ++id << "#" << dad->getSalary() << "#";
		input << dad->getName() << "#" << dad->getPassword() << endl;
		saveLast(lastidfile, id);
		input.close();
	}










	static void getClients() {
		output.open("Clients.txt");

		
		while (getline(output, line))
			allClients.push_back(Parser::parseToClient(line));
	}
	static void getEmployees() {
		output.open("Employees.txt");

		while (getline(output, line))
			allEmployees.push_back(Parser::parseToEmployee(line));
	}
	static void getAdmins() {
		output.open("Admins.txt");

		while (getline(output, line))
			allAdmins.push_back(Parser::parseToAdmin(line));
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