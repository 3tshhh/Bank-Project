#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
using namespace std;


class Validation
{
public:
    static bool isName(string name) {
        if (name.length() >= 5 && name.length() <= 20) {
            for (int i = 0; i < name.length(); i++) {
                if (!(name[i] >= 'a' && name[i] <= 'z'))
                    return false;
            }
            return true;
        }
    }
    static bool isPass(string password){
        if (password.length() >= 8 && password.length() <= 20) {
                return true;
		}
		else
            return false;
    }
    static bool isBalance(double balance){
        if (balance >= 1500)
            return true;
        else
            return false;
    }
    static bool isWithdraw(double amount,double balance){
        if(amount<=balance)
            return true;
        else
            return false;
    }
    static bool isSalary (double salary){
        if(salary>=5000)
            return true;
        else
            return false;
    }

};

#endif
