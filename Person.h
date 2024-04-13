#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;



class Person
{
protected:
	int id;
	string name, password;	
public:
	Person() { this->id = 0; }
	Person(int id, string name, string password) {
		this->id = id;
		setName(name);
		setPassword(password);
	}

	//setters
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		if (Validation::isName(name))
			this->name = name;
		else
			cout << "Name must be alphabetic and between 5 and 20 characters.\n" << endl;
	}
	void setPassword(string password) {
		if (Validation::isPass(password))
			this->password = password;
		else {
			cout << "Password must be between 8 and 20 characters.\n" << endl;
		}
	}

	//getters
	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	void printinfo() {
		cout << "Name : " << getName() << endl;
		cout << "ID   : " << getId() << endl;
	}
};
