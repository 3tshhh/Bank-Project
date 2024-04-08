#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
#include "Validation.h"
#include <iostream>
#include <string>

using namespace std;

class Client: public Person{
	//	atrri
private:
	double balance;
	//conc
public:

	Client(){
        balance = 0.0;
    }
    Client (string name,string password,int id,double balance):Person(id,name,password)
    {
    setBalance(balance);
    }


	//setter
	void setBalance(double balance) {

		if (Validation::isBalance(balance))
			this->balance = balance;

		else
			cout << "the Balance must be more than 1500\n" << endl;

	}

	//getter
	double getBalance() {
		return balance;
	}

	//Transactions
    void deposit(double amount){
        this->balance+=amount;
        cout<<"Deposit of "<<"500"<<"L.E successful. Your new balance is "<<balance<<"L.E.\n";
    }
    void withdraw(double amount){
        if(Validation::isWithdraw(amount,balance))
            cout<<"Withdrawal of "<<amount<<"L.E successful. Your new balance is "<<balance<<"L.E.\n";
        else
            cout<<"Insufficient funds. Withdrawal of "<<amount<<"L.E failed.\n";
    }
    void transferTo(double amount,Client &recipient){
        if(Validation::isWithdraw(amount,balance)){
            recipient.deposit(amount);
            this->balance-=amount;
            cout<<"Transaction Successful! Your money transfer transaction to "<<recipient.getName()<<" has been completed.\n";
            cout<<"Your balance is now "<<balance<<"L.E\n";
        }
        else
            cout<<"Incomplete Transaction: Insufficient Funds.\n";
    }
    //infoDisplay
    void checkBalance(){
        cout<<"Balance is " << getBalance()<<"L.E\n";
    }
    void display(){
        Person::printinfo();
        cout<<"balance : "<<getBalance()<<endl;
        cout << "===================" << endl;
    }

};

#endif
