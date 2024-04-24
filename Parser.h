#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Client.h"
#include "Admin.h"
using namespace std;
class Parser
{
	
public:
	static vector <string> split(string line) {
		vector <string> container;
		stringstream liner(line);
		string s;
		
		while(getline(liner, s, '#'))
		{
			
			container.push_back(s);
		}
		return container;
	}
	static Client parseToClient(string line) {
		Client client;
		vector <string> s = split(line);
		client.setId(stoi(s[0]));
		client.setBalance(stod(s[1]));
		client.setName(s[2]);
		client.setPassword(s[3]);
		return client;
	}
	static Employee parseToEmployee(string line) {
		Employee employee;
		vector <string> s = split(line);
		employee.setId(stoi(s[0]));
		employee.setSalary(stod(s[1]));
		employee.setName(s[2]);
		employee.setPassword(s[3]);
		return employee;
	}
	static Admin parseToAdmin(string line) {
		Admin admin;
		vector <string> s = split(line);
		admin.setId(stoi(s[0]));
		admin.setSalary(stod(s[1]));
		admin.setName(s[2]);
		admin.setPassword(s[3]);
		return admin;
	}
};

