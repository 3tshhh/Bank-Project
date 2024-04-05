#include <iostream>
#include <string>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#define long long ll

using namespace std;

 int main()
{
    Client c("youusef", "youssefff", 7777, 4000);
    c.printinfo();
    cout << "===================" << endl;
    Employee e("mohamed", "sarrrred", 555, 6666);
    e.display();
    cout << "===================" << endl;
    Admin a("hatem", "mohammmed", 9797, 848484);
    a.display();
}
