#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
#include "Validation.h"
class Client: public Person{

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
