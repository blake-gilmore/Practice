#include "administrator.h"
#include "salariedemployee.h"
#include "employee.h"
#include <iostream>
using SavitchEmployees::Administrator;
int main()
{
    Administrator newAdmin;
    newAdmin.outputAdmin();
    newAdmin.setAdmin();
    newAdmin.printCheck();
    return 0;
}