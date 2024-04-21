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
		string q;
		output >> q;
		output.close();
		return stoi(q);
	}
	static void saveClient(Client c) {
		int id = getLast("Clientlastid.txt");
		input.open("Clients.txt", ios::app);
		input << ++id << "#" << c.getBalance() << "#"; 
		input << c.getName() << "#" << c.getPassword() << endl;
		input.close();

		saveLast("Clientlastid.txt", id);
	}
	static void saveEmployee(Employee &e,string filename, string lastidfile) {
		ofstream input;
		Employee* dad;
		int id = getLast(filename);

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
		output.close();
	}
	static void getEmployees() {
		output.open("Employees.txt");

		while (getline(output, line))
			allEmployees.push_back(Parser::parseToEmployee(line));
		output.close();
	}
	static void getAdmins() {
		output.open("Admins.txt");

		while (getline(output, line))
			allAdmins.push_back(Parser::parseToAdmin(line));
		output.close();
	}
	static void clearFile(string filename, string lastid) {
		fstream clear;

		clear.open(filename,ios::out);
		clear.close();
		
		clear.open(lastid, ios::out);
		clear << 0;
		clear.close();
	}
};