#include "8b.h"
#include <iostream>
#include <string>
using namespace std;
employee::employee()
{
    setData("", 0, 0.0);
    return;
}
employee::employee(string setName, int setServiceYears, double setSalary)
{
    setData(setName, setServiceYears, setSalary);
    return;
}
employee::employee(int setServiceYears, double setSalary)
{
    setData("", setServiceYears, setSalary);
    return;
}
void employee::setData(string setName, int setServiceYears, double setSalary)
{
    name = setName;
    numOfServiceYears = setServiceYears;
    salary = setSalary;
}
void employee::print() const
{
    cout << name << "\nNumber of service years: " << numOfServiceYears << endl
         << "Salary: $" << salary << endl;

    return;
}
void employee::updateSalary(double x)
{
    salary += x;
    return;
}

int employee::getNumOfServiceYears() const
{
    return numOfServiceYears;
}

double employee::getSalary() const
{
    return salary;
}