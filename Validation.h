#pragma once
#include <iostream>
#include <string>
using namespace std;


class Validation
{
private:
    static bool isName(string name) {
        if (name.length() >= 5 && name.length() <= 20) {
            for (auto i : name) {
                if (!isalpha(i))
                    return false;
            }

        }
        return true;
    }
    static bool isPass(string password) {
        if (password.length() >= 8 && password.length() <= 20) {
            return true;
        }
        else
            return false;
    }
    static bool isBalance(double balance) {
        if (balance >= 1500)
            return true;
        else
            return false;
    }
    static bool isWithdraw(double amount, double balance) {
        if (amount <= balance)
            return true;
        else
            return false;
    }
    static bool isSalary(double salary) {
        if (salary >= 5000)
            return true;
        else
            return false;
    }

public:
    	static string enterName() {
		string name;
		cout << "\nPlease Enter Your Name....\n";
		cin >> name;
		while (!isName(name))
		{
			cout << "\nName Is Not Valid!\n";
			cout << "Name Must be Alphabetic from 5 to 20 Character!";
			cout << "\nPlease Enter a Valid Name...\n";
			cin >> name;
		}
		return name;
	}
        static string enterPassword() {
            string password;
            cout << "\nPlease Enter Your Password....\n";
            cin >> password;
            while (!isPass(password)) {
                cout<< "\nPassword Is Not Valid!\n";
                cout << "Password Must be from 8 to 20 Character";
                cout << "\nPlease Enter a Valid Password...\n";
                cin >> password;
            }
            return password;
        }
        static double enterBalance() {
            double balance;
            cout << "\nPlease Enter Client's Balance....\n";
            cin >> balance;
            while (!isBalance(balance))
            {
                cout << "\nBalance Is Not Valid!\n";
                cout << "Minimum Balance is 1500 L.E.";
                cout << "\nPlease Enter a Valid Balance...\n";
                cin >> balance;
            }
            return balance;
        }
        static double enterSalary() {
            double salary;
            cout << "\nPlease Enter Employee's Salary....\n";
            cin >> salary;
            while (!isSalary(salary))
            {
                cout << "\nSalary Is Not Valid!\n";
                cout << "Minimum Salary is 5000 L.E.";
                cout << "\nPlease Enter a Valid Salary...\n";
                cin >> salary;
            }
            return salary;
        }
        static double enterWithdraw(){
            double Withdraw;
            cout<< "\nPlease enter the amount you would like to withdraw....\n";
            cin >> Withdraw;
            while (!isWithdraw(Withdraw))
            {
                cout << "\n Balance Is Not Valid\n";
                cout << "\n the Balance Must Be Bigger than OR Equal the Amount\n";
                cout << "\nPlease Enter a Valid Amount...\n";
                cin >> Withdraw;
            }
            return Withdraw;
        }
};

