#include <iostream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
//#include "Parser.h"
#include "FilesHelper.h"
#define long long ll

using namespace std;

int main()
{
    Client c("asdfj", "oaiwh3masdsio", 11342, 41230);
    c.display();

    Employee e("mohamed", "sarrrred", 4, 6666);

    Admin a("hatem", "mohammmed", 7, 5000);
    a.display();
    string stt,str;
    stt = "Admins.txt";
    str = "Adminlastid.txt";
    cout << stt;
    cout << str;

    FilesHelper::saveEmployee(a,stt, str);
    //FilesHelper::clearFile(stt, str);
}
