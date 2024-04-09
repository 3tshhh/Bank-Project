#include <iostream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#define long long ll

using namespace std;

int main()
{
    Client c("youusef", "youssefff", 9, 4000);
    c.display();

    Employee e("mohamed", "sarrrred", 4, 6666);
    e.display();

    Admin a("hatem", "mohammmed", 7, 500);
    a.display();
}
