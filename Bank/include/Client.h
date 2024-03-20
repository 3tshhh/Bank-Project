#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
#include "Validation.h"
class Client: public Person{
class client
{
	//	atrri
protected:
	int id;
	string name;
	string password;
	double balance;
	//conc
public:
	client(int id, string name, string password, double balance) {
		this->id = id;
		this->name = name;
		this->password = password;
		this->balance = balance;
	}
	//setters
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
		if (name.length() >= 5 && name.length() <= 20) {
			cout << "Name is valid." << endl;
		}
		else {
			cout << "Name must be between 5 and 20 characters." << endl;
		}
	}
	void setPassword(string password) {
		this->password = password;
		if (password.length() >= 8 && password.length() <= 20) {
			cout << "Password is valid." << endl;
		}
		else {
			cout << "Password must be between 8 and 20 characters." << endl;
		}
	}
	void setBalance(double balance) {
		this->balance = balance;
		if (balance >= 1500) {
			cout << "balance is valid" << endl;
		}
		else {
			cout << "the Balance must be more than 1500" << endl;
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
	double getBalance() {
		return balance;
	}
};\

private:
    double balance;
public:
    Client(){
    Balance = 0.0;
    }
    Client (string name,string password,int id,double balance):
    {
    Person::Person(id,name,password);
    this->balance = balance;
    }



};

#endif
