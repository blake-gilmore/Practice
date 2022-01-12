//This is the file salariedemployee.cpp
//This is the implementation for the class SalariedEmployee.
//The interface for the class SalariedEmployee is in
//the header file salariedemployee.h.
#include <iostream>
#include <string>
#include "salariedemployee.h"
using std::string;
using std::cout;
using std::endl;
namespace SavitchEmployees
{
SalariedEmployee::SalariedEmployee( ) : Employee( ), salary(0)
{
//deliberately empty
}
SalariedEmployee::SalariedEmployee(const string& theName,
const string& theNumber,
double theWeeklyPay)
: Employee(theName, theNumber), salary(theWeeklyPay)
{
//deliberately empty
}
double SalariedEmployee::getSalary( ) const
{
return salary;
}
void SalariedEmployee::setSalary(double newSalary)
{
salary = newSalary;
}
void SalariedEmployee::printCheck( )
{
setNetPay(salary);
cout << "\n________________________________________________\n"
<< "Pay to the order of " << getName( ) << endl
<< "The sum of " << getNetPay( ) << " Dollars\n"
 << "_________________________________________________\n"
 << "Check Stub NOT NEGOTIABLE \n"
 << "Employee Number: " << getSsn( ) << endl
 << "Salaried Employee. Regular Pay: "
<< salary << endl << "_________________________________________________\n";
}
}//SavitchEmployees