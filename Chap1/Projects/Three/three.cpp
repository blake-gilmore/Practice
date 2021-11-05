#include <iostream>
using namespace std;

int main()
{
    double salary;
    double newSalary;
    const double PAYINCREASE = .076;

    cout << "Enter your annual salary: ";
    cin >> salary;

    newSalary = salary + (salary * PAYINCREASE);
    double newMonthly = newSalary / 12;

    double retroPay = newMonthly * 6;

    cout << "The retroactive pay with the new salary will be $" << retroPay << endl
         << "The new annual salary is $" << newSalary << " and the new monthly salary is $" << newMonthly << endl;

    return 0;
}